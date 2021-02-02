/*
 ============================================================================
 Name        : Test00.c
 Author      : Xavi Fortes
 Version     :
 Copyright   : Xavi Fortes 2021
 Description : Año Bisiesto en C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int year;
	puts("Pon el año que quieres saber si es bisiesto.");
	fflush(stdout);
	scanf("%d", &year);
	if (year % 400 == 0) {
		printf("%d es un año bisiesto.", year);
	}
	else if(year % 100 == 0) {
		printf("%d no es un año bisiesto.", year);
	}
	else if(year % 4 == 0) {
		printf("%d es un año bisiesto.", year);
	}
	else {
		printf("%d no es un año bisiesto.", year);
	}
	return 0;
}
