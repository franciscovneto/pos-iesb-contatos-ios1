//
//  Contato.h
//  Contatos
//
//  Created by Francisco Vieira on 01/09/16.
//  Copyright © 2016 Francisco Vieira. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface Contato : NSManagedObject


@property (readonly) NSString * nomeCompleto;
// Insert code here to declare functionality of your managed object subclass

@end

NS_ASSUME_NONNULL_END

#import "Contato+CoreDataProperties.h"
