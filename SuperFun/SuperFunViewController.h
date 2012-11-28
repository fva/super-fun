//
//  SuperFunViewController.h
//  SuperFun
//
//  Created by Fiona Van Alstyne on 11/26/12.
//  Copyright (c) 2012 ItsyBitsy Labs. All rights reserved.
// 

#import <UIKit/UIKit.h>

@interface SuperFunViewController : UIViewController <UITextFieldDelegate>
- (IBAction)changeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;
@end
