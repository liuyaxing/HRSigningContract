//
//  HRGHConfig.h
//  HRSigningContract
//
//  Created by bizhanlu on 2020/11/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HRGHConfig : NSObject

+(instancetype) instance;
-(instancetype)setAppId:(NSString*)appId appSecret:(NSString*)appSecret;

-(NSString*)appId;
-(NSString*)appSecret;

@end

NS_ASSUME_NONNULL_END
