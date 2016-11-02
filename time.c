#include <stdio.h>
#include <time.h>
#include <windows.h>

/* void sov(int sekunder) {
    int TidNu= time(0) + sekunder;
    while (time(0) < TidNu);
} */

void sov2(){
	double summa =9999;
	for(int i=0;i<9000000;i++){
		summa*=9999;
		summa/=123;
	}
}


int main(){
	printf("0");
	Sleep(500);
	printf("1");
	Sleep(500);
	printf("3");
	Sleep(500);
	printf("3");
	return 0;
}



