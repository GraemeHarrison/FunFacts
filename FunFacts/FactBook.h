//
//  FactBook.h
//  FunFacts
//
//  Created by Graeme Harrison on 2015-12-24.
//  Copyright © 2015 Graeme Harrison. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
