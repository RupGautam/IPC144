// File Info:
// lab6 <main1.c>
//
// Author:
// Rup Gautam <rupngautam@gmail.com>
//
// Copyright (c) 2016 RupGautam
//
//  I declare that the attached assig nment is wholly my own work in accordance with Seneca Academic Policy.
//  No part of this assignment has been copied manually or electronically from anyother source (including web sites)
//  or distributed to other students.
//  Name   Rup Gautam   Student ID  033838152

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void SeedRandom();
void clear();
void GetRandom(float low, float high);
void validate(int low, int high);

int main(){

int input;

do
{
		SeedRandom();
		float randNum;

		randNum = GetRandom(0.15, 0.50);
		float strength_Ratio = randNum;

		randNum = GetRandom(0.15, 0.50);
		float speed_Ratio = randNum;

		randNum = GetRandom(0.15, 0.50);
		float intelligence_Ratio = randNum;

		/* Above block generates random ratio values for:
		 	Strength, Speed, Defense & Intelligence
		 	between 0.15-0.5 */

		randNum = GetRandom(0.5, 2.0);
		float HP_Ratio = randNum;

		randNum = GetRandom(3, 20);
		float level = randNum;

		/* Above block generates random ratio values for:
		 	Health Power and Level between 0.5-2.0 */

		strength_Ratio = ((truncf)strength_Ratio * level * level);
		// math strength x twice level value

		speed_Ratio = ((truncf)speed_Ratio * level * level);
		// math speed x twice level value

		intelligence_Ratio = ((truncf)intelligence_Ratio * level * level);
		// math intel x twice level value

		HP_Ratio = ((truncf)HP_Ratio * level * level);
		// math HealthP x twice level value

		level = ((truncf)level);
		// simply trunced the level value

		printf("Enemy Power Generator\n");
		printf("Level        - %d\n", (int)level);
        printf("HP           - %d\n", (int)HP_Ratio);
        printf("Strenght     - %d\n", (int)strength_Ratio);
        printf("Speed        - %d\n", (int)speed_Ratio);
        printf("Defence      - %d\n", (int)defenceRatio);
        printf("Intelligence - %d\n", (int)intelligence_Ratio);
        printf("Generate Another??   ");
        input = validate(1, 2);


		} while (input != 2); //loop if input not equal to 2 and get random SeedRandom.
        }
        void SeedRandom()
        {
        	srand(time(0));
        	}
        float GetRandom(float)

		}
		float GetRandom(float low, float high)
		{

		float x = low + ((float) rand() / RAND_MAX * (high - low));

		return x;

}

   void clear()
   {
    while(getchar() != '\n');
   }

   int validate(int low, int high)
   {
     int Number;
     int Result;
     do {
       scanf("%d", number);

       if (number >= low && number <= high)

       {
          Result = Number;

       }
       else { clear();
          printf("Invalid input, try again:  \n");
       }
    }

    while(Result != Number);
    return Number;
   }