//
//  HomeModel.h
//  Views2
//
//  Created by Dayanand Deshpande on 17/07/14.
//  Copyright (c) 2014 Jay Deshpande. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol HomeModelProtocol <NSObject>

- (void)itemsDownloaded:(NSArray *)items;


@end

@interface HomeModel : NSObject <NSURLConnectionDataDelegate>

@property (nonatomic, weak) id<HomeModelProtocol> delegate;

- (void)downloadItems;

@end