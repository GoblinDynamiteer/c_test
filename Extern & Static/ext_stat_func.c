#include "ext_stat_func.h"


static int a = 666; //number of the beast
int b = 667;			//neighbour of the beast

//static kan inte n�s fr�n annan fil
static int returnIntStatic(void){
	return a;
}

//det g�r att anv�nda en annan (extern) funktion f�r att returnera v�rden fr�n statisk funktion
int returnInt(void){
	return returnIntStatic();
}