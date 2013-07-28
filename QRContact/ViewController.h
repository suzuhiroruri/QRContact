//
//  ViewController.h
//  QRContact
//
//  Created by Hiromasa Suzuki on 13/07/28.
//  Copyright (c) 2013年 Hiromasa Suzuki. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBarSDK.h"
#import "Contact.h"
#import <AddressBook/AddressBook.h>

@interface ViewController : UIViewController<ZBarReaderDelegate>

@end
