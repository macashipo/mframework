/*
 //================================
 //    _____  ____________________
 //   /     \ \_   ___ \__    ___/
 //  /  \ /  \/    \  \/ |    |
 // /    Y    \     \____|    |
 // \____|__  /\______  /|____|
 //         \/        \/
 //
 // 18/05/2016
 //================================
 */
#import "M.h"
#import "UIFont+FontAwesome.h"
#import "NSString+FontAwesome.h"
#import "MLabelAwesome.h"
@interface MAwesomeUtils : NSObject
+ (UIFont*)fontWithSize:(CGFloat)size;
+ (UILabel*)labelWithIcon:(NSString*)fa_icon
                     size:(CGFloat)size
                    color:(UIColor*)color;
+ (void)label:(UILabel*)label
      setIcon:(NSString*)fa_icon
         size:(CGFloat)size
        color:(UIColor*)color
    sizeToFit:(BOOL)shouldSizeToFit;
+ (UIImage*)imageWithIconAwesome:(NSString*)fa_icon
                iconColor:(UIColor*)iconColor
                 iconSize:(CGFloat)iconSize;
+ (UIImage*)imageWithIconAwesome:(NSString*)fa_icon
                iconColor:(UIColor*)color
                 iconSize:(CGFloat)iconSize
                imageSize:(CGSize)imageSize;
+ (UIImage*)imageWithText:(NSString*)characterCodeString
                     font:(UIFont*)font
                iconColor:(UIColor*)iconColor
                imageSize:(CGSize)imageSize;
@end
