/*
 //================================
 //    _____  ____________________
 //   /     \ \_   ___ \__    ___/
 //  /  \ /  \/    \  \/ |    |
 // /    Y    \     \____|    |
 // \____|__  /\______  /|____|
 //         \/        \/
 //
 // 29/03/2015  Create
 // 02/05/2015  Version 1.0 OK
 // 19/01/2016  Add new private function
 //================================
 */

#import <Foundation/Foundation.h>

@interface NSString (M)

    //================================ Encode
- (NSString *)m_encodeMD5;
- (NSString *)m_encodeSHA1;
- (NSString *)m_encodeSHA256;
- (NSString *)m_encodeSHA512;

+ (NSString *)m_stringWithEncodeUTF8Entities:(NSString *)string;
+ (NSString *)m_stringWithEncodeToBase64:(NSString *)string;
- (NSString *)m_encodeBase64;
+ (NSString *)m_stringWithDecodeBase64:(NSString *)string;
- (NSString *)m_decodeBase64;
- (NSString *)m_encodeURL;

    //================================ Convert
+ (NSString *)m_stringWithDate:(NSDate*)d withFormat:(NSString *)f;
+ (NSString *)m_stringHexWithData:(NSData*)d;

    //================================ Utils
- (BOOL)m_isHasString:(NSString *)substring;
- (NSInteger)m_indexOf:(NSString*)substring from:(NSInteger)starts;
- (NSString*)m_substringFrom:(NSInteger)a to:(NSInteger)b;
- (NSString*)m_trim;
- (NSString*)m_trimWith:(NSString *)characters;

+ (NSString*)m_stringFormatMinuteWithSecond:(NSUInteger)second;
@end
