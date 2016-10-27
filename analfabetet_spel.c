#include <stdio.h>
#include <string.h>
#include <limits.h>
#define ANALFABETET "aBcDeFgHiJkLmNoPqRsTuVwXyZ"

int main(){
	unsigned long int hej = 0;
	char input[100];
	while(hej++ != ULONG_MAX){
		do{
			printf("Skriv in alfabetet a-Z, varannan gemen/versal, för att komma till nästa nivå i spelet!\nSkriv: ");
			scanf("%s", input);
		}while(strcoll(ANALFABETET, input));
		printf("\nRätt!! Du är på nivå: %d\n", hej);
		if(hej == ULONG_MAX/2){
			printf("Achievement unlocked: Halvvägs!!");
		}
	}
	printf("!Grattis, du vann!");
}