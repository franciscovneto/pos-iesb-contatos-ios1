//
//  UIViewController+CoreData.m
//  Contatos
//
//  Created by Francisco Vieira on 08/09/16.
//  Copyright © 2016 Francisco Vieira. All rights reserved.
//

#import "UIViewController+CoreData.h"
#import "AppDelegate.h"

@implementation UIViewController (CoreData)

-(NSManagedObjectContext *)managedObjectContext{
    AppDelegate * delegate = [[UIApplication sharedApplication] delegate];
    
    return delegate.managedObjectContext;
}


@end
