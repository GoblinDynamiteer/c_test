#include <stdio.h>
#include <stdlib.h>

int main(){
	char a[10];
	char *b;
	a[0] = 'A';
	printf("a: %c\n", a[0]);
	//  *b = 'B';   //GÅR EJ
	char *c = malloc(sizeof(char)); //Måste allokera minne
	*c = 'C';
	*(c+1) = 'D';
	*(c+2) = 'E';
	*(c+3) = '\0';
	printf("c: %c\n", *c);
	printf("c: %s\n", c);
	char *d = c;
	char *e;
	e = c;
	printf("d: %c\n", *d);
	printf("d+1: %c\n", *(d+1));
	printf("e: %c\n", *e);
}