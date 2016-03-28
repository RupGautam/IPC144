/* I declare that the attached assig nment is wholly my own work in accordance with Seneca Academic Policy.
* No part of this assignment has been copied manually or electronically from anyother source (including web sites)
* or distributed to other students.
* Name   Rup Gautam   Student ID  033838152
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void validate();
//int validate(const int low, const int high); Page 80
void menu();
int selector;

int main(){

	int exit = 0;
	const int low = 1;
	const int high = 8;


	do {
		//Function is called to display menu
		menu();
		scanf("%d", &selector);

		//This function will display "Invalid Input, Try Again" message when the user input is invalid(i.e. selector <0 or selector>9)
		if (selector < low || selector>high)
		{
			printf("Invalid input, Try again\n\n");
			exit = 0;
		}


		else{
			validate(); //This function will be called if input is valid.(i.e. selector>=0, or selector <= 8)
			//exit = 1;
			//I wasn't sure whether to display menu everytime while user inputs int, So I put it as option to turn off menu.
			//if exit = 0; menu is displayed always, not need to have exit = 0 here.
			//if exit = 1; menu only diplays for invalid input.
		}
	} while (exit == 0);
	return 0;

}

void validate() {
	printf("Not Implemented!\n\n"); //print to warn user input Not Implemented.
	// printf("Not Implemented!\n\n"); //Option to turn off warning, if user input is within range of 1-8.

}

//This function displays the menu, regardless of valid or invalid choice. But line 35 has option to display menu just once on valid choice.
void menu()
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
