//
//  VASTViewController.h
//  VASTParser
//
//  Created by Joseph Afework on 12/28/13.
//  Copyright (c) 2013 Joseph Afework. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VASTViewController : UIViewController
@property (nonatomic, weak) IBOutlet UILabel *progressLabel;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView *progressIndicator;
@end
