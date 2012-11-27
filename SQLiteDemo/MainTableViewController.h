//
//  MainTableViewController.h
//  SQLiteDemo
//
//  Created by stronger on 12/11/19.
//  Copyright (c) 2012年 MobileIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainTableViewController : UITableViewController <UISearchBarDelegate>
{
    UIBarButtonItem *addButton;
    NSMutableArray *custs;
}

@property (strong, nonatomic) IBOutlet UISearchBar *tableSearchBar;

@end
