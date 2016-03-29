// File Info:
// lab7 <main.c>
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
//

#define _CRT_SECURE_NO_WARNINGS 

#include <stdlib.h> 
#include <stdio.h> 
#include <time.h>

#define COUNT_OF_INVENTORY_NAMES 5

const char* NAMES[COUNT_OF_INVENTORY_NAMES] = {"Potion","HP Booster","Strength Booster","Defense Booster","Intelligence Booster"};

void Print_Item(int item);
int Find_Item(int id[],int size,int item);
int Use_Item(int id[],int quantity[],int size,int item);
int Add_Item(int id[], int quantity[],int size,int item);
	
int main(int argc, char* argv[]) {

	int id[3] = {3,4,1};
	int quantity[3] = {2,1,0}; //Now we have 2 Defense Booster, 1 Intelligence Booster and 0 Potion
	
	unsigned int i; //counter variable
	int choice; //user choice variable
	int item; //user item
	int exit = 0; //do-while flag for exiting

	srand(time(NULL));

	do { //main program cycle
		printf("1. Get New Item\n2. Show Inventory\n3. Use Item\n4. Quit\n\nSelect Option: ");
		scanf("%d",&choice);
		if ( choice < 1 || choice > 4 ) {
			printf("Bad choice!!\n\n");
			continue; //Bad choice
		}
		switch (choice) {
			case 1: {
				int item = rand() % 5;
				if ( Add_Item(id,quantity,3,item) ) {
					printf("New item added!\n\n");
				} else {
					printf("Inventory is already full!\n\n");
				}
				break;
			};
			case 2: {
				for( i = 0 ; i < 3; ++i ) {
					printf("%d. ",id[i]);
					Print_Item(id[i]); //Use the function explained above.
					printf("%d\n",quantity[i]);
				}
				printf("\n");
				break;
			};
			case 3: {
				printf("Select item. ");
				scanf("%d",&item);
				if ( Use_Item(id,quantity,3,item) ) {
					printf("Item used!\n");
				} else {
					printf("You don't have that item!\n");
				}
				break;
			};
			case 4: {
				printf("Quit!\n\n");
				exit = 1;
				break;
			};
		}
	} while (!exit);

	return 0;
}

void Print_Item(int item) {
	printf("%s ",NAMES[item]);
}

int Find_Item(int id[],int size,int item) {
// sample collected from IPC Book page 99
	int i;
	for ( i = 0; i < size; ++i ) {
		if ( item == id[i] ) {
			return i;
		}
	}
	return -1;
}

int Use_Item(int id[],int quantity[],int size,int item) {
	int index = Find_Item(id,size,item);
	if ( -1 == index ) {
		return 0;
	}
	if ( quantity[index] > 0 ) {
		--quantity[index];
		return 1;
	} else {
		return 0;
	}
}

int Add_Item(int id[], int quantity[],int size,int item) {
	int i;
	int index = Find_Item(id,size,item);
	if ( -1 != index) {
		++quantity[index];
		return 1;
	}
	//Looking for the element with zero quantity
	index = -1;
	for ( i = 0; i < size; ++i ) {
		if ( 0 == quantity[i] ) {
			index = i;
			break;
		}
	}
	if ( -1 == index ) {
		return 0; //No element with zero quantity
	}
	//changing element
	id[index] = item;
	quantity[index] = 1;
	return 1;
}