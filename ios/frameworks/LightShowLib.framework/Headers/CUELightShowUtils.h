//
//  ImageUtils.h
//  LightShowLibBundle
//
//  Created by Jameson Rader on 7/19/18.
//  Copyright © 2018 CUE Audio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class UIImage;

@interface CUELightShowUtils : NSObject

+ (void) getImageWithURL: (NSString *) urlString andCompletionHandler:(void (^)(UIImage * image))completion;
+ (void) saveImage: (UIImage *) image atPath: (NSString *) imagePath;
+ (BOOL) doesFileExist: (NSString *) path;
+ (NSString *) createPathFromName: (NSString *) imgName;
+ (void) saveNSData: (NSData *) data atPath: (NSString *) path;
+ (UIImage *) retrieveGIFDataFromMemory: (NSString *) path;
+ (UIImage *) retrieveImageFromMemory: (NSString *) imagePath;
+ (void) downloadImage: (NSURL *) url withCompletionHandler:(void (^)(UIImage * image))completion;
+ (BOOL) checkIfURLIsValidLSImageType: (NSString *) urlString;
+ (BOOL) checkIfURLIsValidSelfieCamImageType: (NSString *) urlString;
+ (void) getNSDataWithURL: (NSString *) urlString andCompletionHandler:(void (^)(NSData * downloadedData))completion;
+ (BOOL) checkIfURLIsGIF: (NSString *) urlString;
//SC
+ (UIImage*)imageByCombiningImage:(UIImage*)firstImage withImage:(UIImage*)secondImage;
+ (UIImage*) scaleImage:(UIImage*)image toSize:(CGSize)newSize;
+ (UIImage *)imageWithImage:(UIImage *)image convertToSize:(CGSize)size;

@end
