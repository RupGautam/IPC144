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

void BattkeDl( int* hp);




int main(void){


  int hp = 10;
  int mhp = 10;
  int exp = 0; // init varibles to avoid garbage value 
  float  days = 8.0f;

  do{

    int select;
  	int low = 1;
  	int high = 4;
  	int exit;
 	printf("1 - Rest at Inn\n");
 	printf("2 - Train\n");
 	printf("3 - Fight the Demon Lord\n");
 	printf("4 - Quit Game\n\n");
 	printf("Select:  ");
	scanf("%d", &select);

	if (select < low || select > high)
        {
            printf("\nInvalid input, try again:\n");
            exit = 0;
        }


	switch(select){
	case1:
	restAtInn(&days, &hp, mhp );
	printf("Case1");
	break;

	case2: 
	train(&days, &hp, &exp);
	printf("Case2");
	break;

	case3: 
	BattkeDl(&hp);
	printf("Case3");
	break;

	}

	}while(exit >= 4);
		printf("C Ya!");
 	return 0;
 	}

 	void restAtInn(){
 	// math 
 	printf("RestInn");
 	}
 	 	void train(){
 	// math 
 	printf("Train");
 	}
 	 	void BattkeDl(){
 	// math 
 	printf("Fight");
 	}
