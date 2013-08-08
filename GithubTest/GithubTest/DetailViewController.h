//
//  DetailViewController.h
//  GithubTest
//
//  Created by KevinLee on 13-8-8.
//  Copyright (c) 2013年 KevinLee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
