//
//  Bridge.mm
//  CardGame
//
//  Created by Sillyatom on 03/03/16.
//
//

#import <Foundation/Foundation.h>
#import "Network.h"
#import "GameKitHelper.h"

void Network::findMatches()
{
    [[NSNotificationCenter defaultCenter]postNotificationName:FIND_MATCHES object:nil];
}
