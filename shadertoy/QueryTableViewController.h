//
//  QueryTableViewController.h
//  shadertoy
//
//  Created by Reinder Nijhoff on 19/08/15.
//  Copyright (c) 2015 Reinder Nijhoff. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QueryTableViewController : UITableViewController

- (void) setSortBy:(NSString *)sortBy;
- (void) reloadData;

@end
