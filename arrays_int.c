#include <stdio.h>

int main(){
	printf("\n---------------1d-arrays---------------------\n");
	int IntArray[5] = {1,2,3,4,5};
	int ett = 1, tva = 2, varde_fran_array;
	for(int i=0;i<5;i++){
		printf("IntArray[%d]: %d\n",i, IntArray[i]);
	}
	varde_fran_array = IntArray[2];
	printf("varde_fran_array: %d IntArray[2]: %d", varde_fran_array, IntArray[2]);
	
	if (varde_fran_array == IntArray[2])	
		printf("\nvarde_fran_array == IntArray[2]");
	
	varde_fran_array = IntArray[3];
	printf("\nvarde_fran_array: %d IntArray[3]: %d", varde_fran_array, IntArray[3]);
	
	if (varde_fran_array == IntArray[3])	
		printf("\nvarde_fran_array == IntArray[3]");
	
	printf("\n---------------2d-arrays---------------------\n");
	int IntArray2[2][5] = {{1,2,3,4,5},{1,2,3,4,5}};
	for(int i=0;i<5;i++){
		printf("IntArray[1][%d]: %d\n",i, IntArray2[1][i]);
	}
	for(int i=0;i<5;i++){
		printf("IntArray[0][%d]: %d\n",i, IntArray2[0][i]);
	}
	varde_fran_array = IntArray2[1][2];
	printf("varde_fran_array: %d IntArray2[1][2]: %d", varde_fran_array, IntArray2[1][2]);
	
	if (varde_fran_array == IntArray2[1][2])	
		printf("\nvarde_fran_array == IntArray2[1][2]");
}