#include <stdio.h>

_Bool Jag_Ska_Bli_Ett(void){
	return 1==1;
}

_Bool Jag_Ska_Bli_Noll(void){
	return 2==4;
}

_Bool Jag_Ska_Bli_Ett_Ocksa(int i){
	return i == 123123;
}

_Bool Jag_Ska_Bli_Noll_Ocksa(int i){
	return i == 9876;
}

int main(){
	int testtal = 123123;
	printf("Ska vara 1: %d\nSka vara 0: %d\nSka vara 1: %d\nSka vara 0: %d", Jag_Ska_Bli_Ett(), Jag_Ska_Bli_Noll(), Jag_Ska_Bli_Ett_Ocksa(testtal), Jag_Ska_Bli_Noll_Ocksa(testtal));
	return 0;
}