//
//  Contato+CoreDataProperties.h
//  Contatos
//
//  Created by Francisco Vieira on 01/09/16.
//  Copyright © 2016 Francisco Vieira. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Contato.h"

NS_ASSUME_NONNULL_BEGIN

@interface Contato (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *nome;
@property (nullable, nonatomic, retain) NSString *sobrenome;

@end

NS_ASSUME_NONNULL_END
