//
//  GetSubjects.h
//  Views2
//
//  Created by Dayanand Deshpande on 19/07/14.
//  Copyright (c) 2014 Jay Deshpande. All rights reserved.
//


#import <Foundation/Foundation.h>

@protocol GetSubjectsProtocol <NSObject>

- (void)SubjectsDownloaded:(NSArray *)items2;

@end

@interface GetSubjects: NSObject <NSURLConnectionDataDelegate>

@property (nonatomic, weak) id<GetSubjectsProtocol> delegate;

- (void)downloadSubjects:(int)uid;

@end


