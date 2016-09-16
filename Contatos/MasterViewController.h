//
//  MasterViewController.h
//  Contatos
//
//  Created by Francisco Vieira on 25/08/16.
//  Copyright © 2016 Francisco Vieira. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

-(IBAction)unwindForSegue:(UIStoryboardSegue *)segue;

@end

