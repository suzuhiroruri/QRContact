//
//  Contact.h
//  QRContact
//
//  Created by Hiromasa Suzuki on 13/07/28.
//  Copyright (c) 2013年 Hiromasa Suzuki. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Contact : NSObject
@property NSString *lastname;
@property NSString *firstname;
@property NSString *lastyomi;
@property NSString *firstyomi;
@property NSMutableArray *email;
@property NSMutableArray *phone;
@end
