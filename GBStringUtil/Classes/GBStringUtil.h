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

//是否为空
+ (BOOL)isNullOrEmpty:(NSString *)str;

//验证码验证 推广码 交易密码
+(BOOL)validateValidateCode:(NSString *)validate;

//手机号码验证
+ (BOOL)validateMobilePhone:(NSString *)mobile;

//验证输入的密码
+(BOOL)validatePassword:(NSString *)password;

//身份证号
+ (BOOL)validateIdentity:(NSString *)identityCard;

//身份证号后六位
+ (BOOL)validateIdentityForNum:(NSString *)identityCard;

//验证银行卡号
+ (BOOL)validateBankCard:(NSString *)bankCardNumber;

//去掉空格
+ (NSString *)trimSpacesOfString:(NSString *)str;

//验证输入昵称4~14个字符，2~7个汉字
+(BOOL)valiNickName:(NSString *)string;

/**
 textfield能被输入字符的判断
 @param textString 输入字符
 @param string 判断字符
 @return return value description
 */
+ (BOOL)compareOriginalString:(NSString *)textString withJudgeString:(NSString *)string;

//手机号码加空格，格式为xxx xxxx xxxx
+ (NSMutableString *)setGapWith:(NSString *)string;

//时间格式
+ (NSDateFormatter *)dateFormatterWithFormatString:(NSString *)format;

//字符串添加千分位
+ (NSString *)setDetailLabelText:(NSString *)countString;

//手机号加星号
+ (NSString *)changeOrgialString:(NSString *)string;

/**
 打上星号
 @param string 字符串
 @param range 范围
 @return return value description
 */
+ (NSString* )starsReplacedOfString:(NSString *)string withinRange:(NSRange)range;

//获取姓名的姓
+ (NSString *)firstCharactorWithString:(NSString *)string;

/**
 判断是否是纯汉字
 
 @param string 字符
 @return return value description
 */
+ (BOOL)isChineseWithString:(NSString *)string;

/**
 判断是否含有汉字
 
 @param string 字符
 @return return value description
 */
+ (BOOL)includeChineseWithString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
