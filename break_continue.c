#include <stdio.h>



int main(){
	int i = 0;
	while(1){
		i++;
		if(i!=11){
			printf("i: %d\n", i);
			continue; //continue "börjar om" en loop utan at köra koden efter.
		}
		
		//Hit kommer man inte förrän i är 10
		printf("Jag ska inte visas förrän i = 10\n\n");
		break; //bryter while(1)
	}

	int menu, submenu;
	//körs tills if 
	while(1){ 
		printf("Välj Meny: 1-5, 0 för att avsluta: ");
		scanf("%d", &menu);
		//nästlade switch-satser för "menysystem" -- rörigt dock
		switch(menu){
			case 1:
				while(1){ //Loopar tills användaren skriver 0 vid inmatning, detta triggar en if-sats som avslutar programmet
					printf("Välj submenu för %d: 1-5, 0 för att backa: ", menu);
					scanf("%d", &submenu);
					if(!submenu){ //om submenu är 0 (!0  =  1 -- triggar if)
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
					printf("Välj submenu för %d: 1-5, 0 för att backa: ", menu);
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
					printf("Välj submenu för %d: 1-5, 0 för att backa: ", menu);
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
					printf("Välj submenu för %d: 1-5, 0 för att backa: ", menu);
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
					printf("Välj submenu för %d: 1-5, 0 för att backa: ", menu);
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