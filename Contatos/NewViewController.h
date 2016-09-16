//
//  NewViewController.h
//  Contatos
//
//  Created by Francisco Vieira on 08/09/16.
//  Copyright © 2016 Francisco Vieira. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface NewViewController : UIViewController

-(void)setContatoManagedObject:(NSManagedObject *)managedObject;
-(void)setManagedObjectContext:(NSManagedObjectContext *)context andEntityDescription:(NSEntityDescription *)entityDescription;

@end
