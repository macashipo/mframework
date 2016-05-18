/*
 //================================
 //    _____  ____________________
 //   /     \ \_   ___ \__    ___/
 //  /  \ /  \/    \  \/ |    |
 // /    Y    \     \____|    |
 // \____|__  /\______  /|____|
 //         \/        \/
 //
 // 17/05/2016
 //================================
 */

#import <Foundation/Foundation.h>

@interface MFormatterCurrency : NSObject

@end

@interface NSNumberFormatter (MCurrency)
+ (id)m_formatterWithCurrency:(NSString *)locale;
+ (id)m_formatterWithCurrencyVND;
@end

@interface NSString (MCurrecy)

+(NSString*)m_currencyVNDWith:(NSNumber *)number;
+(NSString*)m_currencyVNDWithInt:(NSInteger)number;
@end
