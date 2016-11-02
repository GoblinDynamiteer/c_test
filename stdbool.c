#include <stdio.h>
#include <stdbool.h>

bool funkFalse(void){
	return false;
}

bool funkTrue(void){
	return true;
}

int main(){
	bool x;
	x = true;
	if(x){
		printf("x: %d", x);
	}
	x = 0;
	if(!x){
		printf("\nx: %d", x);
	}
	if(funkTrue){
		printf("\nfunkTrue");
	}
	
	if(!funkTrue()){
		printf("\nfunkTrue");
	}
	
	if(!funkFalse()){
		printf("\nfunkFalse");
	}
}

