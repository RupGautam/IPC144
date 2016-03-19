// File Info:
// lab6 <main.c>
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
float GetRandom(float low, float high);
int validate(int low, int high);
void clear();

int main() {
    int input;
    do {

        SeedRandom();
        float randNum;

        randNum = GetRandom(0.15, 0.50);
        float strenghtRatio = randNum;

        randNum = GetRandom(0.15, 0.50);
        float speedRatio = randNum;

        randNum = GetRandom(0.15, 0.50);
        float defenceRatio = randNum;

        randNum = GetRandom(0.15, 0.50);
        float intelligenceRatio = randNum;

            /* Above block generates random ratio values for: 
         Strength, Speed, Defense & Intelligence
         between 0.15-0.5 */

        randNum = GetRandom(0.5, 2.0);
        float HPratio = randNum;

        randNum = GetRandom(3, 20);
        float level = randNum;

      	/* Above block generates random ratio values for: 
         Health Power and Level between 0.5-2.0 */


        strenghtRatio = truncf(strenghtRatio * level * level);
        // math strength x twice level value 

        speedRatio = truncf(speedRatio * level * level);
        // math strength x twice level value

        defenceRatio = truncf(defenceRatio * level * level);
        // math strength x twice level value

        intelligenceRatio = truncf(intelligenceRatio * level * level);
        // math strength x twice level value

        HPratio = truncf(HPratio * level);
        level = truncf(level);

        /* Above block generates random ratio values for: 
         Health Power and Level between 0.5-2.0 */

        printf("Level        - %d\n", (int) level);
        printf("HP           - %d\n", (int) HPratio);
        printf("Strenght     - %d\n", (int) strenghtRatio);
        printf("Speed        - %d\n", (int) speedRatio);
        printf("Defence      - %d\n", (int) defenceRatio);
        printf("Intelligence - %d\n", (int) intelligenceRatio);
        printf("Generate Another?  (1 - YES 2 - No) : ");
        input = validate(1, 2);
    } while (input != 2);


}
void SeedRandom() {

    srand(time(NULL));
}

float GetRandom(float low, float high) {

    float x = low + ((float) rand() / RAND_MAX * (high - low));


    return x;

}


void clear() {
    while (getchar() != '\n');
}

int validate(int low, int high) {
    int number, Result;
    do {
        scanf("%d", & number);

        if (number >= low && number <= high)

        {
            Result = number;
        } else {
            clear();
            printf("Invalid input, try again:  \n");
        }
    }
    while (Result != number);
    return number;
}