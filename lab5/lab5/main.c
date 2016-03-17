// main.c
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


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void restAtInn(float* days, int* hp, int mHP);

void train(float* days, int* hp, int *exp);

void BattleDl(int* hp);

void mainMenu();

int select;





int main(void){


	int hp = 10;
	int mHP = 10;
	int exp = 0; // init varibles to avoid garbage value 
	float  days = 8.0f;
	int low = 1;
	int high = 4;
	int exit = 0;
	do{ 
		printf("Days remaning: %lf : HP: %d : EXP: %d\n", days, hp, exp);
		mainMenu();
		scanf("%d", &select);


		if (select < low || select > high)
		{
			printf("\nInvalid input, try again:\n");
			exit = 0;
		}


if (select == 1) {
          restAtInn(&days, &hp, mHP);
          hp = mHP;
          days -= 1;
        } else if (select == 2) {
          train(&days, &hp, &exp);
          hp -= 2;
          days -= 0.5;
          exp += 10;
        } else if (select == 3) {
          BattleDl(&hp);
          hp = 0;
        } else if (select == 4) {
          printf("Exit !");
        } else {
        	exit = 0;
        }
        if (hp <= 0) {
          printf("Game Over !\n\n");
        }
      } while (exit == 0);

      return 0;
    }



void restAtInn(){
	printf("\nYou Rested at Inn");
}
void train(){
	printf("\nYou did some tranning!\n\n");
}
void BattleDl(){
	printf("\nHe's too strong\n\n");
}

void mainMenu(){
		
		printf("1 - Rest at Inn\n");
		printf("2 - Train\n");
		printf("3 - Fight the Demon Lord\n");
		printf("4 - Quit Game\n\n");
		printf("Select:  ");
}