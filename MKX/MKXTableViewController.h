//
//  MKXTableViewController.h
//  MKX
//
//  Created by Student on 5/12/15.
//  Copyright (c) 2015 shp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MKXTableViewController : UITableViewController
@property (weak, nonatomic) NSArray *images;
@property (weak, nonatomic) NSArray *names;




@property (weak, nonatomic) IBOutlet UIImageView *cage;
@property (weak, nonatomic) IBOutlet UIImageView *scorpion;
@property (weak, nonatomic) IBOutlet UIImageView *subzero;

@end
