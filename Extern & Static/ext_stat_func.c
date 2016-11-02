#include "ext_stat_func.h"


static int a = 666; //number of the beast
int b = 667;			//neighbour of the beast

//static kan inte nås från annan fil
static int returnIntStatic(void){
	return a;
}

//det går att använda en annan (extern) funktion för att returnera värden från statisk funktion
int returnInt(void){
	return returnIntStatic();
}