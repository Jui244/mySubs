//
//  ViewController.h
//  Views2
//
//  Created by Dayanand Deshpande on 17/07/14.
//  Copyright (c) 2014 Jay Deshpande. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HomeModel.h"

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, HomeModelProtocol>

@property (weak, nonatomic) IBOutlet UITableView *listTableView;

@end
