//
//  main.c
//  IPC Lab_4
//
//  Created by Rup Gautam on 2016-03-07.
//  Copyright @ 2016 Rup Gautam. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int newGame = 1;
  int loadGame = 2;
  int exitGame = 3;

  //selection
  int selector;

    do {
    printf("\n----Main Menu-------\n");
    printf("1 - New Game\n");
    printf("2 - Load Game\n");
    printf("3 - Exit\n");
    printf("Select: ");
    scanf("%d", &selector);

  if (selector == 1)
  {
    printf("New Game .... Starting!\n");
  }

  else if(selector == 2 )
  {
    printf("Loading.... Game!\n");

  }

  else if(selector == 3)
  {
    printf("Good Bye!\n");

  }
  else{
      printf("Invalid input, Try Again:");

  }
  } while (selector >= 4);
    return 0;
}