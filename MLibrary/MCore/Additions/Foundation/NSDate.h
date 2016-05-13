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

/*
 Date Format
 y: Year
    year    y       yy      yyy     yyyy
    1       1       01      001     0001
    12      12      12      012     0012
    1234    1234    1234    1234    1234
 M: Month
    1..2:   9,09
    3:      Sept
    4:      September
 w: Weeek of year
 W: Week of month
 
 d: Day of month
 D: Day of year
 
 E: Day of week
    1..3:   Tues
    4:      Tuesday
    5:      T
 e: Day of week
    1..2:   2
    3:      Tues
    4:      Tuesday
 a: Period: AM or PM
 h: Hour 1..2:  1-12
 H: Hour 1..2:  0-24
 m: Minute 1..2:    0-59
 s: Second 1..2:    0-59
 S: Fractional Second 1..n: 3456
 */

#import <Foundation/Foundation.h>

struct MDateInformation {
    NSInteger day;
	NSInteger month;
	NSInteger year;
	
	NSInteger weekday;
	
	NSInteger minute;
	NSInteger hour;
	NSInteger second;
	
};
typedef struct MDateInformation MDateInformation;
@interface NSDate (M)
    //================================ Convert
-(NSString *)   m_stringDateWithFormat:(NSString *)f;
-(NSString *)   m_stringDate;
-(NSString *)   m_stringDateAndHour;

+(NSDate *)     m_dateFromString:(NSString *)s withFormat:(NSString *)f;

    //================================ Infomation
- (MDateInformation)m_dateInformation;
- (MDateInformation)m_dateInformationWithTimeZone:(NSTimeZone *)timezone;
- (NSInteger) m_getDay;
- (NSInteger) m_getMonth;
- (NSInteger) m_getYear;
- (NSInteger) m_getWeekday;
- (NSInteger) m_getMinute;
- (NSInteger) m_getHour;
- (NSInteger) m_getSecond;

    //================================ Utils
- (BOOL)    m_isEqualDayToDate:(NSDate *)d;
+ (NSDate *)m_getYesterday;
+ (NSDate *)m_getTomorrow;
- (BOOL)    m_isToday;
+ (NSDate *)m_dateFromDateInformation:(MDateInformation)info;
+ (NSDate *)m_dateFromDateInformation:(MDateInformation)info timeZone:(NSTimeZone *)timezone;
@end
