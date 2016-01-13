//
//  FDCTableViewDataSource.h
//  FirstDribbbleChallenge
//
//  Created by Douglas Barreto on 1/13/16.
//  Copyright © 2016 Data Empire. All rights reserved.
//


#import <Bricks/Bricks.h>
#import "FDCSessionManager.h"
#import "FDCShot.h"
#import "FDCSessionManager+Shots.h"
#import "FDCShot.h"

@interface FDCTableViewDataSource : BKBaseTableViewDatasourceAndDelegate
{
    /*! @brief The shots that will be showed. */
    NSMutableArray *_shots;
    UITableViewController *_tableViewControler;
}

@property (nonatomic) FDCShot* selectedShot;

- (void)getDribbleShots;

@end
