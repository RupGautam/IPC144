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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int FindItem(int id[], int size, int item);
// This funtion performs a linear search over the array.
int AddItem(int id[], int qtty[], int size, int item);
// This function adds an item to the inventory of the player, also it searches through the id arrays 
int UseItem(int id[], int qtty[], int size, int item);
// This functio removes an item from the inventory 
void PrintItem(int item);
// This function prints the item name associated with item ID array
void menu();
int input,  select;

int main(){

	menu();
	scanf("%d", &select);
	if (input == 1)
		printf("you selected 1");


	return 0;
}

void menu(){
	printf("1. Get New Item\n");
	printf("2. Show Inventory\n");
	printf("3. Use Item\n");
	printf("4. Quit\n");
}

