/****************************************************************************
 Copyright (c) 2013      cocos2d-x.org
 Copyright (c) 2013-2014 Chukong Technologies Inc.

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#import "RootViewController.h"
#import "cocos2d.h"
#import "platform/ios/CCEAGLView-ios.h"
#import "../../Classes/Network/NetworkConstants.h"
#import "../../Classes/Network/Network.h"
#import "../../Classes/Events/NetworkEvent.h"

@implementation RootViewController

/*
 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
    }
    return self;
}
*/

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/

/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
}

*/
// Override to allow orientations other than the default portrait orientation.
// This method is deprecated on ios6
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    return UIInterfaceOrientationIsLandscape( interfaceOrientation );
}

// For ios6, use supportedInterfaceOrientations & shouldAutorotate instead
- (NSUInteger) supportedInterfaceOrientations{
#ifdef __IPHONE_6_0
    return UIInterfaceOrientationMaskAllButUpsideDown;
#endif
}

- (BOOL) shouldAutorotate
{
    return YES;
}

- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation {
    [super didRotateFromInterfaceOrientation:fromInterfaceOrientation];

    auto glview = cocos2d::Director::getInstance()->getOpenGLView();

    if (glview)
    {
        CCEAGLView *eaglview = (CCEAGLView*) glview->getEAGLView();

        if (eaglview)
        {
            CGSize s = CGSizeMake([eaglview getWidth], [eaglview getHeight]);
            cocos2d::Application::getInstance()->applicationScreenSizeChanged((int) s.width, (int) s.height);
        }
    }
}

//fix not hide status on ios7
- (BOOL)prefersStatusBarHidden
{
    return YES;
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];

    // Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(findMatches)
                                                 name:FIND_MATCHES object:nil];
}

- (void)findMatches
{
    [[GameKitHelper sharedGameKitHelper] findMatchWithMinPlayers:MIN_PLAYERS maxPlayers:MAX_PLAYERS viewController:self delegate:self];
}

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    [super dealloc];
}

#pragma mark GameKitHelperDelegate

- (void)matchStarted
{
    NSLog(@"RootView : Match started");
    if ([[GameKitHelper sharedGameKitHelper]isHost])
    {
        Network::isHost = true;
    }
    else
    {
        Network::isHost = false;
    }
    
    NSError * error;
    NSData * data = [NSJSONSerialization dataWithJSONObject:[NSDictionary dictionaryWithObjectsAndKeys:[NSNumber numberWithInt:MATCH_STARTED], @"api", nil] options:NSJSONWritingPrettyPrinted error:&error];
    [self sendGameEvent:data api:MATCH_STARTED];
}

- (void)matchEnded
{
    NSLog(@"RootView : Match ended");
}

- (void)match:(GKMatch *)match didReceiveData:(NSData *)data fromPlayer:(NSString *)playerID
{
//#if COCOS2D_DEBUG
//    NSError * error;
//    NSDictionary * response = [NSJSONSerialization JSONObjectWithData:data options:kNilOptions error:&error];
//    int api = [[response objectForKey:@"api"] intValue];
//    NSLog(@"[ RootView : Received data ] api type %d",api);
//#endif
    
    dispatch_async(dispatch_get_main_queue(),
    ^{
        //.mm callback
        NSError * error;
        NSDictionary * response = [NSJSONSerialization JSONObjectWithData:data options:kNilOptions error:&error];
        int api = [[response objectForKey:@"api"] intValue];
        
        switch (api)
        {
            case (SELECTED_HOST):
            {
                [[GameKitHelper sharedGameKitHelper] setHostID:(NSString*)[response objectForKey:@"hostId"]];
            }
                break;
                
            default:break;
        }

        [self sendGameEvent:data api:api];
        
    });
}

- (void) sendGameEvent:(NSData *)data api:(int)api
{
    dispatch_async(dispatch_get_main_queue(),
   ^{
        NSLog(@"[ RootView : Dispatching Received data ] api type %d",api);
        NetworkEvent event(NetworkEvent::RECEIVE_DATA, [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding].UTF8String);
        cocos2d::Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);
   });
}

@end
