// File Info: 
// milestone_4 <main.c> 
// Date 30/03/2016
// Author: 
// Rup Gautam <rupngautam@gmail.com> 
// 
// Copyright (c) 2016 RupGautam 
// 
// I declare that the attached assig nment is wholly my own work in accordance with Seneca Academic Policy. 
// No part of this assignment has been copied manually or electronically from anyother source (including web sites) 
// or distributed to other students. 
// Name Rup Gautam Student ID  

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#define MAX_ITEMS 10

struct Cart {
    int sku[MAX_ITEMS];
    float price[MAX_ITEMS];
    int quantity[MAX_ITEMS];
    float totalCost;
    int size;
};

void menu();
void displayInventory(const int sku[],
const float price[]);
int searchInventory(const int sku[],
const int item);
void checkPrice(const int sku[],
const float price[]);
void clear();

void displayCart(const struct Cart * pShoppingCart);
void addCart(struct Cart * pShoppingCart,
const int sku[],
const float price[]);
void removeCart(struct Cart * pShoppingCart);
void checkout(struct Cart * pShoppingCart);
int selector;
int validate(int low, int high);

int main() {

    struct Cart cart; //An object of Cart 
    cart.size = 0; //Number of items in myCart 

    int sku[4] = {2358, 7654, 1209, 1345};
    float price[4] = {12.60, 34.99, 5.70, 12.50};
    const int low = 1;
    const int high = 8;
    int exit;
    int inputItem;
    int itemIndex;
    int input;

    do {

        menu();
        input = validate(1, 8); // low of 1 and high of 8 for the menu selection. 

        switch (input)
        {
            case 1:
                displayInventory(sku, price);
                break;

            case 2:
                checkPrice(sku, price);
                break;

            case 3:
                displayCart( & cart);
                break;

            case 4:
                addCart( & cart, & sku[0], & price[0]);
                break;

            case 5:
                removeCart( & cart);
                break;

            case 6:
                checkout( & cart);
                printf("Total cost: %f\n\n", cart.totalCost); // Displaying total cost at checkout
                break;

            case 7:
                clear();
                break;
        }

    } while (input != 8);
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

void displayInventory(const int sku[],
    const float price[])
{
    // This funtion takes an int array sku & float price to display items info. 
    const int MAX_ARRAY_SIZE = 4;
    int i;
    printf("Inventory\n");
    printf("========================\n");
    printf("Sku\t Price\n");

    for (i = 0; i < MAX_ARRAY_SIZE; i++)
    {

        printf("%d\t %.2lf\n", sku[i], price[i]);

    }
}

/* This function recevies an int array sku and int of desired item eg: 2358 
Then it searches for that int item to match the sku arrays and outputs 
the return 
index if it founds, in case of not matching the array it will output 
"Item does not exist: 
*/
int searchInventory(const int sku[],
    const int item)
{
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

/* This function searches for the price of array like does the 
"searchInventory". 
In case item exist outputs price info, if item does not exist outputs 
" Item does not exist in the shop" 
*/
void checkPrice(const int sku[],
    const float price[])
{
    int inputItem;
    int Index = -1;
    int i;
    printf("Enter an Item to check the price: ");
    scanf("%d", & inputItem);

    for (i = 0; i < 4; i++)
    {
        if (inputItem == sku[i])
        {
            Index = i;
        }

    }
    if (Index != -1)
    {
        printf("Item %d Costs $%.2lf\n\n", inputItem, price[Index]);
        // If sku# exist print price 
    }
    else
    {
        printf("Item does not exist in the shop! Please try again\n\n");
        // If sku# does not exist print Item does not exist and give option to input again 

    }

}

int validate(int low, int high)
{

    int selector; //let user select for menu choice 

    do {
        scanf("%d", & selector);

        if (selector < low || selector > high)

            printf("Invalid input, Try again: ");
        // Invalid input, if input is less than low or bigger than high validate 
    }
    while (selector < low || selector > high);
    return selector;

}

void clear()
{
    // Clear screen, print new 40 lines 

    int i;

    for (i = 0; i < 40; i++)
    {
        printf("\n");
    }

    return;
}

void displayCart(const struct Cart * pShoppingCart)
{
    unsigned int i;
    printf("Inventory\n====================================\nSku\t\tQuantity\tPrice\n");
    for (i = 0; i < pShoppingCart -> size; ++i)
    {
    printf("%d\t\t%d\t%f\n", pShoppingCart -> sku[i], pShoppingCart -> quantity[i], pShoppingCart -> price[i]);
    }
    printf("====================================\n\n");
    }

void addCart(struct Cart * pShoppingCart,
    const int sku[],
    const float price[]) {
    int current_sku;
    int quantity;
    int index;
    int cart_index;
    do {
        printf("Enter Sku number: ");
        scanf("%d", & current_sku);
        index = searchInventory(sku, current_sku);
        if (-1 == index)
        {
            continue;
        }
        break;
    } while (1);

    //If user inputs correct sku, than prompt the quantity 
    printf("Enter quantity: ");
    scanf("%d", & quantity);

    cart_index = searchInventory( & pShoppingCart -> sku[0], current_sku);
    if (-1 == cart_index){

        /*if ( pShoppingCart->size == 4 ) { 
        printf("Card full!"); 
        return; 
        }*/

        pShoppingCart -> sku[pShoppingCart -> size] = current_sku;
        pShoppingCart -> price[pShoppingCart -> size] = price[index];
        pShoppingCart -> quantity[pShoppingCart -> size] = quantity;
        ++pShoppingCart -> size;
    }
    else
    {
        pShoppingCart -> sku[cart_index] = current_sku;
        pShoppingCart -> price[cart_index] = price[index];
        pShoppingCart -> quantity[cart_index] = quantity;
    }
}

void removeCart(struct Cart * pShoppingCart)
{
    if (0 == pShoppingCart -> size) {
        printf("Cart is empty already!\n\n");
    }
    else
    {
        pShoppingCart -> size = 0;
        printf("Cart is successfully removed!\n\n");
    }
}

void checkout(struct Cart * pShoppingCart)
{
    float returned_value = 0.0;
    int i;
    for (i = 0; i < pShoppingCart -> size; ++i) {
    returned_value += pShoppingCart -> quantity[i] *
    pShoppingCart -> price[i];

    }
    pShoppingCart -> totalCost = returned_value;
}