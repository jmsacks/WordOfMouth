//
//  UserViewController.h
//  GroupProject2nd
//
//  Created by Kori Kolodziejczak on 11/18/14.
//  Copyright (c) 2014 Tuan Vu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "User.h"
#import "NetworkController.h"
#import "Review.h"

@interface UserViewController : UIViewController <UITabBarControllerDelegate, UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate>

@property (nonatomic, strong) NSString *login;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *confirmPassword;
@property (nonatomic, strong) NSArray *userReviews;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIImageView *profileImageView;
@property (weak, nonatomic) IBOutlet UILabel *userNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *numberOfReviewsLabel;

@end
