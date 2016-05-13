/*
 //================================
 //    _____  ____________________
 //   /     \ \_   ___ \__    ___/
 //  /  \ /  \/    \  \/ |    |
 // /    Y    \     \____|    |
 // \____|__  /\______  /|____|
 //         \/        \/
 //
 // 29/03/2015
 //================================
 */
#import <Foundation/Foundation.h>

@interface NSArray (M)
- (NSArray *)   m_reversedArray;
- (NSString *)  m_jsonString;
- (id)          m_objectAtIndexSafe:(NSUInteger)index;
- (id)          m_objectAtIndexCircle:(NSInteger)index;
- (NSArray *)   m_shuffledArray;
- (NSArray *)   m_uniqueObjects;

+ (NSString *)  m_jsonString:(NSArray *)array;
+ (NSArray *)   m_reversedArray:(NSArray *)array;
@end

@interface NSMutableArray (M)
- (void)        m_shuffle;
@end
