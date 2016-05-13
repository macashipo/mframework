/*
 //================================
 //    _____  ____________________
 //   /     \ \_   ___ \__    ___/
 //  /  \ /  \/    \  \/ |    |
 // /    Y    \     \____|    |
 // \____|__  /\______  /|____|
 //         \/        \/
 //
 // 26/04/15
 // 02/05/15  Version 1.0 OK
 // 27/05/15  Edit m_loadBool
 //================================
 */

#import <Foundation/Foundation.h>

@interface NSUserDefaults (M)

 //================================ Save, load and synchronize
+ (void)    m_save:(id)object withKey:(NSString *)key;
+ (void)    m_clearWithKey:(NSString *)key;
+ (id)      m_loadWithKey:(NSString *)key;
+ (BOOL)    m_synchronize;

+ (NSString *)      m_loadString:(NSString *)key;
+ (BOOL)            m_loadBool:(NSString *)key;
+ (NSInteger)       m_loadInteger:(NSString *)key;
+ (NSNumber *)      m_loadNumber:(NSString *)key;
+ (NSArray *)       m_loadArray:(NSString *)key;
+ (NSDictionary *)  m_loadDictionary:(NSString *)key;
+ (NSData *)        m_loadData:(NSString *)key;
+ (NSDate *)        m_loadDate:(NSString *)key;

 //================================ Save, load with secu
+ (void)m_saveDataLock:(id)object withKey:(NSString *)key;
+ (NSData *)m_loadDataLockWithKey:(NSString *)key;

@end
