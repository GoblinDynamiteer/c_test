#include <stdio.h>

int main(){
	int a[] = {1,2,3,4,5};
	int b[] = {9,8,7,6,5};
	int antal_element = sizeof(b)/sizeof(b[0]);
	printf("Adress f�r pekare a: %p\n", &a);
	printf("Adress f�r pekare b: %p\n", &b);
	printf("Elementv�rden:\n");
	for(int i = 0; i < antal_element; i++){
		printf("b[%d] = %d (adress %p)\n", i , b[i], &b[i]);
	}
	//b = a; 			//g�r inte - fel i kompilator
	//b = &a;			//g�r inte - fel i kompilator
	//*b = a; 			//g�r inte - fel i kompilator
	*b = *a; 			//f�rsta v�rdet i arrayen kopieras
	printf("\na[0] = %d (adress %p)\n", a[0], &a[0]);
	printf("b[0] = %d (adress %p)\n", b[0], &b[0]);
	//b[0] = a[0]; 	//f�rsta v�rdet i arrayen kopieras
	int *c = a; 		//funkar, pekar p� samma v�rden i minnet, p� samma adresser
	printf("\nAdress f�r pekare a: %p\n", &a);
	printf("Adress f�r pekare c: %p\n", &c);
	printf("\nElementv�rden:\n");
	for(int i = 0; i < antal_element; i++){
		printf("c[%d] = %d (adress %p)\n", i , c[i], &c[i]);
		printf("a[%d] = %d (adress %p)\n", i , a[i], &a[i]);
	}
	int x = 88;
	int *px = &x;
	int *py;
	py = px;
	printf("\nVariabel x har v�rdet %d, x har adress %p", x, &x);
	printf("\nPekare py pekar p� v�rdet %d, v�rdet ligger p� adress %p", *py, &*py); // &*x f�r minnesadressen f�r v�rdet som pekare x pekar p�
	printf("\nPekaren py har adress %p", &py); //&x f�r adressen som pekare x ligger p� i minnet
	return 0;
}