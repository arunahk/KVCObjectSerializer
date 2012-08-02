//
//  GlossEntry.h
//  JSONTest
//
//  Created by mahadevan on 15/12/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "KVCBaseObject.h"
#import "GlossDef.h"

@interface GlossEntry : KVCBaseObject
{
    NSString * Abbrev;
    NSString * Acronym;
    GlossDef * GlossDef;
    NSString * GlossSee;
    NSString * GlossTerm;
    NSString * ID;
    NSString * SortAs;
    
}
@property(nonatomic) NSString * Abbrev;
@property(nonatomic) NSString * Acronym;
@property(nonatomic) GlossDef * GlossDef;
@property(nonatomic) NSString * GlossSee;
@property(nonatomic) NSString * GlossTerm;
@property(nonatomic) NSString * ID;
@property(nonatomic) NSString * SortAs;

@end
