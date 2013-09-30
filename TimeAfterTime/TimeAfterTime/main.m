//
//  main.m
//  TimeAfterTime
//
//  Created by Len Damico on 9/29/13.
//  Copyright (c) 2013 Len Damico. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDate *now = [NSDate date];
        //NSLog(@"The new date lives at %p", now);
        NSLog(@"The date is now %@", now);
        
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start of 1979.", seconds);
        
        NSDate*later = [now dateByAddingTimeInterval:100000];
        NSLog(@"In 100,000 seconds it will be %@", later);
    }
    return 0;
}

