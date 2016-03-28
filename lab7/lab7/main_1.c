// File Info:
// ${ProjectName} <main_1.c>
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
// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>

const char* NAMES[COUNT_OF_INVENTORY_NAMES] = {"Potion","HP Booster","Strength Booster","Defense Booster","Intelligence Booster"};
void Print_Item(int item);
int Find_Item(int id[],int size,int item);
int Use_Item(int id[],int quantity[],int size,int item);
int Add_Item(int id[], int quantity[],int size,int item);

int main(){

	int id[3] = {3,4,1};
	int quantity[3] = {2,1,0}; //Now we have 2 Defense Booster, 1 Intelligence Booster and 0 Potion
	
	unsigned int i; //counter variable
	int choice; //user choice variable
	int item; //user item
	int exit = 0; //do-while flag for exiting
	srand(time(NULL));




}