//
//  main.c
//  IPC Lab_2
//
//  Created by Rup Gautam on 2016-01-27.
//  Copyright @ 2016 Rup Gautam. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)


{
	int strength, speed, defense, intelligence;
	float ratio_strength, ratio_speed, ratio_defense, ratio_intelligence;
	float sum;


// user inputs

    printf("Strength:");
    scanf("%d", &strength);

    printf("Speed:");
    scanf("%d", &speed);

    printf("Defense:");
    scanf("%d", &defense);

    printf("Intelligence:");
    scanf("%d", &intelligence);


// sum of all the attributes
    sum = (int)(strength + speed + defense + intelligence);


// dividing and multiply to get ratio
    ratio_strength = (strength / sum) * 100;
    ratio_speed = (speed / sum) * 100;
    ratio_defense = (defense / sum) * 100;
    ratio_intelligence = ((intelligence / sum) * 100);



// output the final stats result

    printf("Your player's final stats are\n");

    printf("Strength: %d\n", (int)ratio_strength);
    printf("Speed: %d\n", (int)ratio_speed);
    printf("Defense: %d\n", (int)ratio_defense);
    printf("Intelligence: %d\n", (int)ratio_intelligence);


	int remainder = (int)sum % 30;

	printf("Luck: %d", remainder);

    return 0;

}
