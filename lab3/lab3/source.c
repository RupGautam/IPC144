//
//  main.c
//  IPC Lab_2
//
//  Created by Rup Gautam on 2016-01-27.
//  Copyright © 2016 Rup Gautam. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)


{
    int strength;
    int speed;
    int defense;
    int intel;
    float sum;
    float ratio_strength;
    float ratio_speed;
    float ratio_defense;
    float ratio_intel;


// user inputs

    printf("Strength:?\n");
    scanf("%d", &strength);

    printf("Speed:?\n");
    scanf("%d", &speed);

    printf("Defense:?\n");
    scanf("%d", &defense);

    printf("Intel:?\n");
    scanf("%d", &intel);


// sum of all the attributes
    sum = (strength + speed + defense + intel);


// dividing attributes by sum to get radio
    ratio_strength = (strength / sum) * 100;
    ratio_speed = (speed / sum) * 100;
    ratio_defense = (defense / sum) * 100;
    ratio_intel = ((intel / sum) * 100);



// output the final stats result

    printf("Your player's final stats are\n");

    printf("%d\n", (int)ratio_strength);
    printf("%d\n", (int)ratio_speed);
    printf("%d\n", (int)ratio_defense);
    printf("%d\n", (int)ratio_intel);


    return 0;

}