//
//  FSBTaksViewController.h
//  tenkay
//
//  Created by Jabari Bell on 12/28/12.
//  Copyright (c) 2012 Jabari Bell. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSBTasksViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

@end
