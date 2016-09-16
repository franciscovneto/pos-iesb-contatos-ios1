//
//  DetailViewController.h
//  Contatos
//
//  Created by Francisco Vieira on 25/08/16.
//  Copyright © 2016 Francisco Vieira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

