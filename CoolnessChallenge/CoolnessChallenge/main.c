//
//  main.c
//  CoolnessChallenge
//
//  Created by Len Damico on 9/15/13.
//  Copyright (c) 2013 Len Damico. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 99;
    for (i = 99; i > 0; i--) {
                if (i % 5 == 0) {
            printf("Found one!\n");
            continue;
        }
        printf("%d\n", i);

        
    }
}

