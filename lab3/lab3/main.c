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

	int selector;

	printf("Battle Start!\n");


	printf("Your HP:%d Enemy HP:%d\n", playerHP, enemyHP);

	printf("1 - Attack\n");
	printf("2 - Magic\n");


	// select move 1 or 2

	printf("Select your move:");
	scanf_s("%d", &selector);


	// if option 1 

	if (selector ==1) {
		printf("You attacked the ememy!\n");
		printf("The enemy attacked you!\n");


		float attackPower;
		attackPower = ((float) playerStrength/ enemyDefense);
		// printf("%f", playerNewpower);


		// new stats 
		float playernewAttackpower;
		float enemynewAttackpower;

		playernewAttackpower = (int)(attackPower * 5);
		enemynewAttackpower = (int)(enemyHP - playernewAttackpower);

		printf("Your HP:%.0f  Enemy HP:%.0f\n", playernewAttackpower, enemynewAttackpower);


		//re loop again
		printf("1 - Attack\n");
		printf("2 - Magic\n");

		//selector re
		printf("Select your move:");
		scanf_s("%d", &selector);

		// if option 1 
		if (selector == 1) {
			printf("You attacked the ememy!\n");
			printf("The enemy attacked you!\n");

		}
		else (playernewAttackpower == !1);
			printf("You died!\n");
		
		}
		return 0;

}