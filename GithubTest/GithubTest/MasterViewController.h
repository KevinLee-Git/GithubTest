//
//  MasterViewController.h
//  GithubTest
//
//  Created by KevinLee on 13-8-8.
//  Copyright (c) 2013年 KevinLee. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
