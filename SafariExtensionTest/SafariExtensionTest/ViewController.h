//
//  ViewController.h
//  SafariExtensionTest
//
//  Created by Felix Deimel on 31.12.20.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController

@property (weak, nonatomic) IBOutlet NSTextField *appNameLabel;

- (IBAction)openSafariExtensionPreferences:(id)sender;

@end

