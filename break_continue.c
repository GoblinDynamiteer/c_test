#include <stdio.h>



int main(){
	int i = 0;
	while(1){
		i++;
		if(i!=11){
			printf("i: %d\n", i);
			continue; //continue "b�rjar om" en loop utan at k�ra koden efter.
		}
		
		//Hit kommer man inte f�rr�n i �r 10
		printf("Jag ska inte visas f�rr�n i = 10\n\n");
		break; //bryter while(1)
	}

	int menu, submenu;
	//k�rs tills if 
	while(1){ 
		printf("V�lj Meny: 1-5, 0 f�r att avsluta: ");
		scanf("%d", &menu);
		//n�stlade switch-satser f�r "menysystem" -- r�rigt dock
		switch(menu){
			case 1:
				while(1){ //Loopar tills anv�ndaren skriver 0 vid inmatning, detta triggar en if-sats som avslutar programmet
					printf("V�lj submenu f�r %d: 1-5, 0 f�r att backa: ", menu);
					scanf("%d", &submenu);
					if(!submenu){ //om submenu �r 0 (!0  =  1 -- triggar if)
						break; //bryter while(1) -- inre loop
					}
					switch(submenu){
						case 1:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 2:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 3:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 4:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 5:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						default:
							printf("Fel val!\n");
							break;
					}
				}
				break;
			case 2:
				while(1){
					printf("V�lj submenu f�r %d: 1-5, 0 f�r att backa: ", menu);
					scanf("%d", &submenu);
					if(!submenu){
						break;
					}
					switch(submenu){
						case 1:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 2:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 3:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 4:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 5:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						default:
							printf("Fel val!\n");
							break;
					}
				}
				break;
			case 3:
				while(1){
					printf("V�lj submenu f�r %d: 1-5, 0 f�r att backa: ", menu);
					scanf("%d", &submenu);
					if(!submenu){
						break;
					}
					switch(submenu){
						case 1:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 2:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 3:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 4:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 5:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						default:
							printf("Fel val!\n");
							break;
					}
				}
				break;
			case 4:
				while(1){
					printf("V�lj submenu f�r %d: 1-5, 0 f�r att backa: ", menu);
					scanf("%d", &submenu);
					if(!submenu){
						break;
					}
					switch(submenu){
						case 1:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 2:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 3:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 4:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 5:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						default:
							printf("Fel val!\n");
							break;
					}
				}
				break;
			case 5:
				while(1){
					printf("V�lj submenu f�r %d: 1-5, 0 f�r att backa: ", menu);
					scanf("%d", &submenu);
					if(!submenu){
						break;
					}
					switch(submenu){
						case 1:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 2:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 3:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 4:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						case 5:
							printf("Visar submenu %d - %d\n",menu, submenu);
							break;
						default:
							printf("Fel val!\n");
							break;
					}
				}
				break;
			case 0:
				printf("Avslutar!");
				return 0;
			default:
				printf("Fel val!\n");
				break;
		}
	}
	return 0;
}