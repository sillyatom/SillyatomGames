//
//  Bridge.mm
//  CardGame
//
//  Created by Sillyatom on 03/03/16.
//
//

#import <Foundation/Foundation.h>
#import "Network.h"

bool Network::isHost = false;

void Network::findMatches()
{
    [[NSNotificationCenter defaultCenter]postNotificationName:@"FIND_MATCHES" object:nil];
}