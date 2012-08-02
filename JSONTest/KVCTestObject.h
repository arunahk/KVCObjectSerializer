//
//  KVCTestObject.h
//  JSONTest
//
//  Created by mahadevan on 26/10/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KVCChildObject.h"
#import "KVCBaseObject.h"

@interface KVCTestObject : KVCBaseObject {
    NSString * kName;
    NSString * addressField;
    NSInteger kAge;
    NSMutableArray * kChildrenArray;  
    NSDictionary * kChildObject;
    BOOL isAvailable;
    double doubleValue;
    
}
@property BOOL isAvailable;
@property double doubleValue;
@property (nonatomic) NSString  * kName;
@property (nonatomic) NSString * addressField;
@property NSInteger kAge;
@property (nonatomic) NSMutableArray * kChildrenArray;
@property (nonatomic) NSDictionary * kChildObject;
@end
