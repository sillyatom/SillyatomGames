//
//  GameKitHelper.m
//  CardGame
//
//  Created by Sillyatom on 20/02/16.
//
//
#import "GameKitHelper.h"

@implementation GameKitHelper

@synthesize hostID;
@synthesize isHost;

NSString * const PRESENT_AUTHENTICATION_VIEW_CONTROLLER = @"PRESENT_AUTHENTICATION_VIEW_CONTROLLER";
NSString * const LOCAL_PLAYER_IS_AUTHENTICATED = @"LOCAL_PLAYER_IS_AUTHENTICATED";
NSString * const FIND_MATCHES = @"FIND_MATCHES";

int const MIN_PLAYERS = 2;
int const MAX_PLAYERS = 4;

BOOL _enableGameCenter;
BOOL _matchStarted;

+ (instancetype) sharedGameKitHelper
{
    static GameKitHelper * instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[GameKitHelper alloc] init];
    });
    return instance;
}

- (id) init
{
    self = [super init];
    _enableGameCenter = (self) ? YES : NO;
    _matchStarted = false;
    isHost = false;
    return self;
}

- (void) sendDataToAll:(NSString*)str
{
    //NSLog(@"[ GameKitHelper ] Send Data To All %@ ", str);
    NSError * error;
    NSData * data = [str dataUsingEncoding:NSUTF8StringEncoding];
    BOOL success = [_match sendDataToAllPlayers:data withDataMode:GKMatchSendDataReliable error:&error];
    if (!success)
    {
        NSLog(@"[Send Data : error : %@ ] ", error.localizedDescription);
    }
}

-(void) sendDataToPlayer:(NSString*)playerId strData:(NSString*)str
{
    //NSLog(@"[ GameKitHelper ] Send Data to Player with id %@ with data %@ ", playerId, str);
    NSError * error;
    NSData * data = [str dataUsingEncoding:NSUTF8StringEncoding];
    BOOL success = [_match sendData:data toPlayers:[NSArray arrayWithObject:[_playersDict objectForKey:playerId]] dataMode:GKMatchSendDataReliable error:&error];
    if (!success)
    {
        NSLog(@"Send data to player %@ failed. Error : %@ ", playerId, error.localizedDescription);
    }
}

- (void) authenticateLocalPlayer
{
    GKLocalPlayer * localPlayer = [GKLocalPlayer localPlayer];
    
    if (localPlayer.isAuthenticated)
    {
        [self sendAuthMessage];
        return;
    }
    
    localPlayer.authenticateHandler = ^(UIViewController * viewController, NSError * error)
    {
        [self setLastError : error];
        
        if (error != nil)
        {
            NSLog(@"GameCenter auth Failed");
            return;
        }
        
        if (viewController != nil)
        {
            [self setAuthenticationViewController : viewController];
        }
        else if ([GKLocalPlayer localPlayer].isAuthenticated)
        {
            _enableGameCenter = YES;
            NSLog(@" [ Player Authenticated ] ");
        }
        else
        {
            _enableGameCenter = NO;
        }
        
        [self sendAuthMessage];
    };
}

-(void) sendAuthMessage
{
    NSMutableDictionary * dict = [[NSMutableDictionary alloc]init];
    
    if ([[GKLocalPlayer localPlayer]isAuthenticated])
    {
        [dict setValue:[NSNumber numberWithUnsignedInt:0] forKey:@"api"];
    }
    else
    {
        [dict setValue:[NSNumber numberWithUnsignedInteger:1] forKey:@"api"];
    }
    
    NSError * error = nil;
    NSData * data = [NSJSONSerialization dataWithJSONObject:dict options:NSJSONWritingPrettyPrinted error:&error];
    NSString * dataStr = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    UnitySendMessage("NetworkManager", "OnReceiveData", [dataStr UTF8String]);
}

- (void) findMatchWithMinPlayers:(int)minPlayers maxPlayers:(int)maxPlayers viewController:(UIViewController *)viewController delegate:(id<GameKitHelperDelegate>)delegate
{
    if (!_enableGameCenter) return;
    
    _matchStarted = NO;
    self.match = nil;
    _delegate = delegate;
    [viewController dismissViewControllerAnimated:NO completion:nil];
    
    GKMatchRequest * gkMatchRequest = [[GKMatchRequest alloc]init];
    gkMatchRequest.minPlayers = minPlayers;
    gkMatchRequest.maxPlayers = maxPlayers;
    
    GKMatchmakerViewController * matchMakerViewCtrller = [[GKMatchmakerViewController alloc]initWithMatchRequest:gkMatchRequest];
    matchMakerViewCtrller.matchmakerDelegate = self;
    
    [viewController presentViewController:matchMakerViewCtrller animated:YES completion:nil];
}

// The user has cancelled matchmaking
- (void)matchmakerViewControllerWasCancelled:(GKMatchmakerViewController *)viewController
{
    [viewController dismissViewControllerAnimated:YES completion:nil];
}

// Matchmaking has failed with an error
- (void)matchmakerViewController:(GKMatchmakerViewController *)viewController didFailWithError:(NSError *)error
{
    [viewController dismissViewControllerAnimated:YES completion:nil];
    NSLog(@"Error finding match: %@", error.localizedDescription);
}

- (void) startMatch
{
    if (!_matchStarted && self.match.expectedPlayerCount == 0)
    {
        NSLog(@"GameKitHelper : Ready to start match!");
        [self lookUpPlayers];
        [self.match chooseBestHostPlayerWithCompletionHandler:^(NSString * _Nullable playerID)
        {
            isHost = (playerID == [GKLocalPlayer localPlayer].playerID);
            NSLog(@"[ Chosen Host id ] %@ - isHost %d", playerID, isHost);
            _matchStarted = YES;
            
            [_delegate matchStarted];
        }];
    }
}

// A peer-to-peer match has been found, the game should start
- (void)matchmakerViewController:(GKMatchmakerViewController *)viewController didFindMatch:(GKMatch *)match
{
    [viewController dismissViewControllerAnimated:YES completion:nil];
    self.match = match;
    match.delegate = self;
    [self startMatch];
}

- (void) lookUpPlayers
{
    NSLog(@"Looking up %lu Players .... ", (unsigned long)self.match.playerIDs.count);
    [GKPlayer loadPlayersForIdentifiers:self.match.playerIDs withCompletionHandler:^(NSArray * players, NSError * error)
     {
         if (error != nil)
         {
             NSLog(@" [ On Load Players ] Error Retrieving Player Data ");
             _matchStarted = NO;
             [_delegate matchEnded];
         }
         else
         {
             _playersDict = [[NSMutableDictionary alloc]init];
             for (GKPlayer * player in players)
             {
                 NSLog(@"Found Player %@", player.alias);
                 [_playersDict setObject:player forKey:player.playerID];
             }
             //add local player
             [_playersDict setObject:[GKLocalPlayer localPlayer] forKey:[GKLocalPlayer localPlayer].playerID];
          }
     }];
}

#pragma mark GKMatchDelegate

// The match received data sent from the player.
- (void)match:(GKMatch *)match didReceiveData:(NSData *)data fromPlayer:(NSString *)playerID
{
    if (_match != match) return;
    [_delegate match:match didReceiveData:data fromPlayer:playerID];
}

// The player state changed (eg. connected or disconnected)
- (void)match:(GKMatch *)match player:(NSString *)playerID didChangeState:(GKPlayerConnectionState)state
{
    if (_match != match) return;
    
    switch (state)
    {
        case GKPlayerStateConnected:
            // handle a new player connection.
            NSLog(@"Player connected!");
            [self startMatch];
            break;
            
        case GKPlayerStateDisconnected:
            // a player just disconnected.
            NSLog(@"Player disconnected!");
            _matchStarted = NO;
            [_delegate matchEnded];
            break;
    }
}

// The match was unable to connect with the player due to an error.
- (void)match:(GKMatch *)match connectionWithPlayerFailed:(NSString *)playerID withError:(NSError *)error
{
    if (_match != match) return;
    
    NSLog(@"Failed to connect to player with error: %@", error.localizedDescription);
    _matchStarted = NO;
    [_delegate matchEnded];
}

// The match was unable to be established with any players due to an error.
- (void)match:(GKMatch *)match didFailWithError:(NSError *)error {
    
    if (_match != match) return;
    
    NSLog(@"Match failed with error: %@", error.localizedDescription);
    _matchStarted = NO;
    [_delegate matchEnded];
}

- (void) setAuthenticationViewController:(UIViewController *)authenticationViewController
{
    if (authenticationViewController != nil)
    {
        _authenticationViewController = authenticationViewController;
        [[NSNotificationCenter defaultCenter] postNotificationName:PRESENT_AUTHENTICATION_VIEW_CONTROLLER object:self];
    }
}

- (void) setLastError:(NSError *)lastError
{
    if (lastError != nil)
    {
        _lastError = [lastError copy];
        NSLog(@"GameKitHelper error : %@", [[self.lastError userInfo] description]);
    }
}

@end