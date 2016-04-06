//
// main.c
//
// Author:
//       RupGautam <rngautam@myseneca.ca>
//
// Copyright (c) 2016 RupGautam
//
// I declare that the attached assig nment is wholly my own work in accordance with Seneca Academic Policy.
// No part of this assignment has been copied manually or electronically from anyother source (including web sites)
// or distributed to other students.
// Name   Rup Gautam   Student ID  033838152

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



void main()
{

	char str[100];

	int wordcount = 0, i;

	printf("Text to be analyzed: ");
	fgets(str, 100, stdin);


	for (i = 0; str[i] != '\0'; i++)
	{


		if (str[i] == ' ' && str[i + 1] != ' ')
			wordcount++;
	}


	if (wordcount > 1){

		printf(" Word counts: %d", wordcount + 1);
	}
	else{
		printf("Please enter valid string");
	}
	return 0;
}
