#include <stdio.h>
#include <string.h>
#include <limits.h>
#define ANALFABETET "aBcDeFgHiJkLmNoPqRsTuVwXyZ"

int main(){
	unsigned long int hej = 0;
	char input[100];
	while(hej++ != ULONG_MAX){
		do{
			printf("Skriv in alfabetet a-Z, varannan gemen/versal, f�r att komma till n�sta niv� i spelet!\nSkriv: ");
			scanf("%s", input);
		}while(strcoll(ANALFABETET, input));
		printf("\nR�tt!! Du �r p� niv�: %d\n", hej);
		if(hej == ULONG_MAX/2){
			printf("Achievement unlocked: Halvv�gs!!");
		}
	}
	printf("!Grattis, du vann!");
}