#include <math.h>
#include <stdio.h>

int main(){
	for(int x = 1;x<=10;x++){
		for(int y = 1;y<=4;y++)
			printf("int/%%d %d^%d = %d\n",x, y, pow(x,y));
	}
	for(float x = 1;x<=10;x++){
		for(float y = 1;y<=4;y++)
			printf("float/%%f %.0f^%.0f = %.0f\n",x, y, pow(x,y));
	}
	return 0;
}


