//
//  ProjectDetailIdentifiersViewController.h
//  iNaturalist
//
//  Created by Alex Shepard on 2/23/16.
//  Copyright © 2016 iNaturalist. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProjectDetailV2ViewController.h"

@interface ProjectDetailIdentifiersViewController : UITableViewController

@property (assign) NSInteger totalCount;
@property NSArray *identifierCounts;
@property BOOL hasFetchedIdentifiers;

@property (assign) id <ProjectDetailV2Delegate> projectDetailDelegate;

- (void)reloadDataViews;

@end
