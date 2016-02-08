//
//  main.c
//  IPC Lab_3
//
//  Created by Rup Gautam on 2016-02-8.
//  Copyright @ 2016 Rup Gautam. All rights reserved.
//

#define _CRT_SECURenemyNO_WARNINGS
#include <stdio.h>

int main(void)

{

	// player stats varibles 

	int playerStrength = 10;
	int playerDefense = 20;
	int playerIntelligence = 40;
	int playerHP = 10;

	// enemy stats varibles 

	int  enemyStrength = 30;
	int  enemyDefense = 40;
	int  enemyIntelligence = 25;
	int  enemyHP = 10;

	// user selection 

	int attack = 1;
	int magic = 2;

	printf("Battle Start!\n");


	printf("Your HP:%d Enemy HP:%d\n", playerHP, enemyHP);

	printf("1 - Attack\n");
	printf("2 - Magic\n");
	

// select move 1 or 2

	printf("Select your move:");
	scanf_s("%d %d", &attack, &magic);


// if option 1 













		return 0;

}
