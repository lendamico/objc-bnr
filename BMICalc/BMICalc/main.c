//
//  main.c
//  BMICalc
//
//  Created by Len Damico on 9/18/13.
//  Copyright (c) 2013 Len Damico. All rights reserved.
//

#include <stdio.h>

// Here is the declaration of the struct Person
typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMAssIndex(Person p)
{
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}

int main(int argc, const char * argv[])
{
    Person person;
    person.weightInKilos = 96;
    person.heightInMeters = 1.8;
    printf("person weighs %i kilograms\n", person.weightInKilos);
    printf("person is %.2f meters tall\n", person.heightInMeters);
    float bmi = bodyMAssIndex(person);
    printf("person has a BMI of %.2f\n", bmi);
    return 0;

}

