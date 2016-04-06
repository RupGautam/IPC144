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



int main(){

	char s[100];
	int count = 0, i;

	printf("Word Counter\n ===============\n\n");
	printf("Text to be analyzed\n");
	fgets(s, 100, stdin);


	for (i = 0; s[i] != '\0'; i++){
		if (s[i] == ' ' && s[i + 1] != ' ');
		count++;
	}

	printf("Word count: %d\n", count + 1);
	return 0;
}
