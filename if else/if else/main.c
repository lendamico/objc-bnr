//
//  main.c
//  if else
//
//  Created by Len Damico on 9/11/13.
//  Copyright (c) 2013 Len Damico. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    float truckweight = 34563.8;
    
    // Is truck under the limit?
    if (truckweight < 40000.0) {
        printf("It is a light tru qck\n");
    } else {
        printf("It is a heavy truck\n");
    }
    
    
}

