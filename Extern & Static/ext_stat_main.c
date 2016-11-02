#include "ext_stat_func.h"

int main(){
	printf("returnInt(): %d", returnInt());
	//printf("returnIntStatic(): %d", returnIntStatic()); < ---går ej
	//printf("a: %d", a); //< ---går ej -- skriver ut 0
	printf("\nb: %d", b);
	return 0;
	
}