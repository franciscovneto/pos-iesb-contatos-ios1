//
//  UIViewController+CoreData.h
//  Contatos
//
//  Created by Francisco Vieira on 08/09/16.
//  Copyright © 2016 Francisco Vieira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (CoreData)

@property (readonly) NSManagedObjectContext * managedObjectContext;

@end
