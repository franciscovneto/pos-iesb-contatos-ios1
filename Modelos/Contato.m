//
//  Contato.m
//  Contatos
//
//  Created by Francisco Vieira on 01/09/16.
//  Copyright © 2016 Francisco Vieira. All rights reserved.
//

#import "Contato.h"

@implementation Contato

-(NSString *)nomeCompleto{
    return [NSString stringWithFormat:@"%@ %@", self.nome, self.sobrenome];
}
// Insert code here to add functionality to your managed object subclass

@end
