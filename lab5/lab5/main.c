﻿// main.c
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

int validate(int low, int high); 

void exit_game();

int select;





int main(void){


	int hp = 10;
	int mHP = 10;
	int exp = 0; // init varibles to avoid garbage value 
	float  days = 8.0f;
	int low = 1;
	int high = 4;
	do{ 
		printf("Days remaning: %.1lf : HP: %d : EXP: %d\n", days, hp, exp);
		mainMenu();
		select = validate(1, 4);
	
		switch(select){

		case 1:
		  restAtInn(&days, &hp, mHP);
          hp = mHP;
          days -= 1;
          break;

        case 2: 
          train(&days, &hp, &exp);
          hp -= 2;
          days -= 0.5;
          exp += 10;
          break;

        case 3: 
          BattleDl(&hp);
          hp = 0;
          break;

        case 4:
          exit_game(0);
          break;
          }

        }while (select != 4);
        printf("Good Bye!");

       return 0;

		}

//if (select == 1) {
//          restAtInn(&days, &hp, mHP);
//          hp = mHP;
//          days -= 1;
//        } else if (select == 2) {
//          train(&days, &hp, &exp);
//          hp -= 2;
//          days -= 0.5;
//          exp += 10;
//        } else if (select == 3) {
//          BattleDl(&hp);
//          hp = 0;
//        } else if (select == 4) {
//          printf("Exit !");
//        } else {
//          printf("Invalid input, Try Again: \n");
//          exit = 0;
//        }
//        if (hp <= 0) {
//          printf("Game Over !\n\n");
//        }
  //    } while (exit == 0);

     // return 0;
   // }



void restAtInn(){
	printf("\nYou Rested at Inn\n\n");
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
int validate(int low, int high) 
{

do {
scanf("%d", &select);

if(select < low || select > high)
	printf("Invalid input, Try again: "); 
// Invalid input, if input is less than low or bigger than high validate 
}
while (select < low || select > high);

return select;

}

void exit_game(){
}