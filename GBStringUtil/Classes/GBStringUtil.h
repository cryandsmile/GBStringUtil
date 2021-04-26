//
//  GBStringUtil.h
//  FBSnapshotTestCase
//
//  Created by gaobin on 2021/4/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GBStringUtil : NSObject
+ (NSString *)UUID;

//MD5加密
+ (NSString *)md5:(NSString *)input;

//去空格
+ (NSString *)replaceSpace:(NSString *)originString;
@end

NS_ASSUME_NONNULL_END
