//  OCHamcrest by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2016 hamcrest.org. See LICENSE.txt

#import "HCReturnValueGetter.h"


NS_ASSUME_NONNULL_BEGIN

@interface HCUnsignedShortReturnGetter : HCReturnValueGetter

- (instancetype)initWithSuccessor:(nullable HCReturnValueGetter *)successor NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithType:(char const *)handlerType successor:(nullable HCReturnValueGetter *)successor NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
