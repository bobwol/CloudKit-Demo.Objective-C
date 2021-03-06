//
//  CityTableViewCell.h
//  CloudKit-demo
//
//  Created by Maksim Usenko on 3/16/15.
//  Copyright (c) 2015 Yalantis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "City.h"

@interface CityTableViewCell : UITableViewCell

+ (NSString *)reuseIdentifier;
+ (NSString *)nibName;

- (void)setCity:(City *)city;

@end
