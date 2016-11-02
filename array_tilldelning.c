#include <stdio.h>

int main(){
	int a[] = {1,2,3,4,5};
	int b[] = {9,8,7,6,5};
	int antal_element = sizeof(b)/sizeof(b[0]);
	printf("Adress för pekare a: %p\n", &a);
	printf("Adress för pekare b: %p\n", &b);
	printf("Elementvärden:\n");
	for(int i = 0; i < antal_element; i++){
		printf("b[%d] = %d (adress %p)\n", i , b[i], &b[i]);
	}
	//b = a; 			//går inte - fel i kompilator
	//b = &a;			//går inte - fel i kompilator
	//*b = a; 			//går inte - fel i kompilator
	*b = *a; 			//första värdet i arrayen kopieras
	printf("\na[0] = %d (adress %p)\n", a[0], &a[0]);
	printf("b[0] = %d (adress %p)\n", b[0], &b[0]);
	//b[0] = a[0]; 	//första värdet i arrayen kopieras
	int *c = a; 		//funkar, pekar på samma värden i minnet, på samma adresser
	printf("\nAdress för pekare a: %p\n", &a);
	printf("Adress för pekare c: %p\n", &c);
	printf("\nElementvärden:\n");
	for(int i = 0; i < antal_element; i++){
		printf("c[%d] = %d (adress %p)\n", i , c[i], &c[i]);
		printf("a[%d] = %d (adress %p)\n", i , a[i], &a[i]);
	}
	int x = 88;
	int *px = &x;
	int *py;
	py = px;
	printf("\nVariabel x har värdet %d, x har adress %p", x, &x);
	printf("\nPekare py pekar på värdet %d, värdet ligger på adress %p", *py, &*py); // &*x för minnesadressen för värdet som pekare x pekar på
	printf("\nPekaren py har adress %p", &py); //&x för adressen som pekare x ligger på i minnet
	return 0;
}