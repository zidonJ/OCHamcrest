//
//  OCHamcrest - HCWrapInMatcher.mm
//  Copyright 2012 hamcrest.org. See LICENSE.txt
//
//  Created by: Jon Reid
//

#import "HCWrapInMatcher.h"

#import "HCIsEqual.h"


id<HCMatcher> HCWrapInMatcher(id matcherOrValue)
{
    if (!matcherOrValue)
        return nil;
    
    if ([matcherOrValue conformsToProtocol:@protocol(HCMatcher)])
        return matcherOrValue;
    else
        return HC_equalTo(matcherOrValue);
}
