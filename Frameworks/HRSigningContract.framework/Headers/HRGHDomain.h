//
//  MyDomain.h
//  AFNetworking
//
//  Created by 毕战路 on 2019/7/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HRGHDomain : NSObject

@property(nonatomic,copy) NSString* eShareHost;
@property(nonatomic,copy) NSString* eSignHost;

+(instancetype)instance;

-(instancetype)setEShareHost:(NSString*)eShareHost andESignHost:(NSString*)eSignHost;

@end

NS_ASSUME_NONNULL_END
