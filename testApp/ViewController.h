//
//  ViewController.h
//  testApp
//
//  Created by iD Student on 6/24/13.
//  Copyright (c) 2013 Omar Zakaria. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    float firstNumber;
    float secondNumber;
    int operation;
    BOOL op;
    IBOutlet UITextField *answer; 
    
}
-(void)getNumber:(id)sender;
-(void)doMath:(id)sender;
-(void)getOperation:(id)sender;
-(IBAction)clear: (id)sender;
@end
