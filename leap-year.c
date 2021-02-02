/*
 ============================================================================
 Name        : Test00.c
 Author      : Xavi Fortes
 Version     :
 Copyright   : Xavi Fortes 2021
 Description : Leap Year
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int year;
	puts("Put the year you want to know if it's leap.");
	fflush(stdout);
	scanf("%d", &year);
	if (year % 400 == 0) {
		printf("%d is a leap year.", year);
	}
	else if(year % 100 == 0) {
		printf("%d isn't a leap year.", year);
	}
	else if(year % 4 == 0) {
		printf("%d is a leap year.", year);
	}
	else {
		printf("%d isn't a leap year.", year);
	}
	return 0;
}
