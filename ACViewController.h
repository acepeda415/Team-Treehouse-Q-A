//
//  ACViewController.h
//  Crystal Ball
//
//  Created by Angel Cepeda on 10/18/13.
//  Copyright (c) 2013 Angel Cepeda. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ACCrystalBall;

@interface ACViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic, readonly) ACCrystalBall *crystalBall;
- (IBAction)buttonPressed;

@end
