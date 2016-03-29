// File Info:
// milestone_3 <main.c>
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



void menu();
void displayInventory(); 
int searchInventory(const int sku[], const int item); 
void checkPrice(const int sku[],const float price[]); 
void clear(); 

void displayCart(); 
void addCart(); 
void removeCart(); 
void checkout(); 
int selector; 
int validate(int low, int high); 

int main(){

	int sku[4] = {2358, 7654, 1209, 1345};
	float price[4] = {12.60, 34.99, 5.70, 12.50};
	const int low = 1;
	const int high = 8;
	int exit;
	int inputItem;
	int itemIndex;
	int input;


	do{

			menu();
			input = validate(1, 8); // low of 1 and high of 8 for the menu selection.
		
			switch(input){
			case 1: 
					displayInventory(sku, price);
					break;

			case 2: 
					checkPrice(sku, price);
					break;

			case 3: 
					printf("Not implemented\n\n");
					break;

			case 4: 
					printf("Not implemented\n\n");
					break;

			case 5: 
					printf("Not implemented\n\n");
					break;

			case 6: 
					printf("Not implemented\n\n");
					break;

			case 7: 
					clear();
					break;
			}

			}while (input != 8);
			printf("Good Bye!"); // exit the program, if user input is not equal to 8. 


			return 0;

	}


void menu() // printing Store menu
{
	printf("=== Welcome to the Grocery Store ===\n");
	printf("1) Display the inventory\n");
	printf("2) Price check\n");
	printf("3) Display my shopping cart\n");
	printf("4) Add to cart\n");
	printf("5) Remove from cart\n");
	printf("6) Check out\n");
	printf("7) Clear Screen\n");
	printf("8) Exit\n\n");
	printf("Select: ");
}

 
void displayInventory(const int sku[],const float price[]) {
  // This funtion takes an int array sku & float price to display items info.
const int MAX_ARRAY_SIZE = 4;
int i;
 printf("Inventory\n");
 printf("========================\n");
 printf("Sku\t Price\n");

for(i =0; i < MAX_ARRAY_SIZE; i++){ 

 printf("%d\t %.2lf\n", sku[i], price[i]);

	} 
}

/* This function recevies an int array sku and int of desired item eg: 2358 
Then it searches for that int item to match the sku arrays and outputs the return 
index if it founds, in case of not matching the array it will output "Item does not exist:
*/
int searchInventory(const int sku[], const int item){
	int i;
	int Index = -1;
	for (i = 0; i < 4; i++)
	{
     	if (item == sku[i])
     	{
         	Index = i;
     	} //Sample collected from IPC book page 99.  
	}
	return Index;


}

/* This function searches for the price of array like does the "searchInventory". 
   In case item exist outputs price info, if item does not exist outputs
"  Item does not exist in the shop" 
*/ 
void checkPrice(const int sku[],const float price[]){
	int inputItem;
	int Index = -1;
	int i;
    printf("Enter an Item to check the price:  ");
    scanf("%d", &inputItem);
	
	for (i = 0; i < 4; i++)
	{
     	if (inputItem == sku[i])
     	{
         	Index = i;
     	}

	}
	if(Index != -1){
		printf("Item %d Costs $%.2lf\n\n", inputItem, price[Index]); 
		// If sku# exist print price
	}
	else{
	printf("Item does not exist in the shop! Please try again\n\n"); 
	// If sku# does not exist print Item does not exist and give option to input again 

	}
	 
}

int validate(int low, int high) {

int selector; //let user select for menu choice  

do {
scanf("%d", &selector);

if(selector < low || selector > high)
	
printf("Invalid input, Try again: "); 
// Invalid input, if input is less than low or bigger than high validate 
}
while (selector < low || selector > high);
return selector;

}


void clear(){ 
// Clear screen, print new 40 lines 

int i;

for (i = 0; i < 40; i++)
{ 
printf("\n");
}

return;
}