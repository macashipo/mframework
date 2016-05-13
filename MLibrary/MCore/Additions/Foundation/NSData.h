/*
 //================================
 //    _____  ____________________
 //   /     \ \_   ___ \__    ___/
 //  /  \ /  \/    \  \/ |    |
 // /    Y    \     \____|    |
 // \____|__  /\______  /|____|
 //         \/        \/
 //
 // 02/05/2015  Version 1.0 OK
 //================================
 */

#import <Foundation/Foundation.h>

@interface NSData (M)
    //================================ Encrypt
- (NSData *)m_encryptAES256WithKey:(NSString *)key;
- (NSData *)m_decryptAES256WithKey:(NSString *)key;
- (NSData *)m_encryptXORWithKey:(NSString *)key;

    //================================ Base64
+ (NSData *)m_dataWithEncodeBase64String:(NSString *)string;

    //================================ Utils
- (BOOL)m_isHasPrefixBytes:(const void *)prefix length:(NSUInteger)length;
- (BOOL)m_isHasSuffixBytes:(const void *)suffix length:(NSUInteger)length;

    //================================ Convert
- (NSString *)m_string;
- (NSString *)m_stringHex;
+ (NSData *)m_dataWithString:(NSString *)s;
+ (NSData *)m_dataWithStringHex:(NSString *)s;
@end
