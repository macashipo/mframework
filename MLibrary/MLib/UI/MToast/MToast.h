/*
 //================================
 //    _____  ____________________
 //   /     \ \_   ___ \__    ___/
 //  /  \ /  \/    \  \/ |    |
 // /    Y    \     \____|    |
 // \____|__  /\______  /|____|
 //         \/        \/
 //
 // 09/07/2015
 //================================
 */
#import "M.h"

@interface MToast : NSObject
{
    NSString *text;
    UIButton *contentView;
    CGFloat  duration;
}
+ (void)showText:(NSString *)t;
+ (void)showText:(NSString *)t duration:(CGFloat)d;

+ (void)showText:(NSString *)t topMargin:(CGFloat)to;
+ (void)showText:(NSString *)t topMargin:(CGFloat)to duration:(CGFloat)d;

+ (void)showText:(NSString *)t bottomMargin:(CGFloat)bo;
+ (void)showText:(NSString *)t bottomMargin:(CGFloat)bo duration:(CGFloat)d;

+ (void)showTextInCenter:(NSString *)t;
+ (void)showTextInCenter:(NSString *)t duration:(CGFloat)d;
@end
