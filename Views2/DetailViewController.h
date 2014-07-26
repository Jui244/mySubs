//
//  DetailViewController.h
//  Views2
//
//  Created by Dayanand Deshpande on 17/07/14.
//  Copyright (c) 2014 Jay Deshpande. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GetSubjects.h"


@interface DetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, GetSubjectsProtocol>

@property (weak, nonatomic) IBOutlet UITableView *SubjectList;

@property (strong, nonatomic)  User *selectedUser;

@end
