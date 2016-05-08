//
//  GameKitHelper.h
//  CardGame
//
//  Created by Sillyatom on 20/02/16.
//
//

#import <GameKit/GameKit.h>
#import <Foundation/Foundation.h>

@protocol GameKitHelperDelegate
- (void)matchStarted;
- (void)matchEnded;
- (void)match:(GKMatch *)match didReceiveData:(NSData *)data fromPlayer:(NSString *)playerID;
@end

//for notifications
extern NSString * const PRESENT_AUTHENTICATION_VIEW_CONTROLLER;
extern NSString * const LOCAL_PLAYER_IS_AUTHENTICATED;
extern NSString * const FIND_MATCHES;

//constants for players
extern int const MIN_PLAYERS;
extern int const MAX_PLAYERS;

@interface GameKitHelper : NSObject <GKMatchmakerViewControllerDelegate, GKMatchDelegate>

@property (nonatomic, strong) GKMatch * match;
@property (nonatomic, strong) NSString * hostID;
@property (nonatomic, assign) BOOL isHost;
@property (nonatomic, assign) id<GameKitHelperDelegate> delegate;
@property (nonatomic, strong) NSMutableDictionary * playersDict;
@property (nonatomic, strong) NSMutableDictionary * playersDP;

-(void) findMatchWithMinPlayers : (int) minPlayers maxPlayers:(int)maxPlayers viewController:(UIViewController*)viewController delegate:(id<GameKitHelperDelegate>)delegate;

-(void) sendDataToPlayer:(NSString*)playerId strData:(NSString*)str;
- (void) sendDataToAll:(NSString*)str;

@property (nonatomic, readonly) UIViewController * authenticationViewController;
@property (nonatomic, readonly) NSError * lastError;

+ (instancetype) sharedGameKitHelper;
- (void)authenticateLocalPlayer;
@end