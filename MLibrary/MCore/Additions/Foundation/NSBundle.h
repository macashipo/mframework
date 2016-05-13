/*
 //================================
 //    _____  ____________________
 //   /     \ \_   ___ \__    ___/
 //  /  \ /  \/    \  \/ |    |
 // /    Y    \     \____|    |
 // \____|__  /\______  /|____|
 //         \/        \/
 //
 // 14/04/2015
 //================================
 // Need import MFBundle.bundle to project
 //================================
 // 
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSBundle (M)
+ (NSBundle *)  m_bundle;
+ (UIImage *)   m_imagePNGFromMBundle:(NSString *)name;
+ (UIImage *)   m_imageFromMBundle:(NSString *)name withExt:(NSString *)ext;
@end
