#include <stdio.h>
#include <string.h>

int main(){
	struct Monster{
		int id;
		char bokstav[2];
		char namn[15];
		int hp;
		int skada;
	}Slemtroll, Kodskelett;

	Slemtroll.id = 1;
	strcpy( Slemtroll.bokstav, "S"); 
	strcpy( Slemtroll.namn, "Slemroll");
	Slemtroll.hp = 25;
	Slemtroll.skada = 30;

	Kodskelett.id = 2;
	strcpy( Kodskelett.bokstav, "K"); 
	strcpy( Kodskelett.namn, "Kodskelett");
	Kodskelett.hp = 15;
	Kodskelett.skada = 20;

	printf("%s (%s):\tID: %d DMG: %d HP: %d\n", Slemtroll.namn, Slemtroll.bokstav, Slemtroll.id, Slemtroll.skada, Slemtroll.hp);
	printf("%s (%s):\tID: %d DMG: %d HP: %d", Kodskelett.namn, Kodskelett.bokstav, Kodskelett.id, Kodskelett.skada, Kodskelett.hp);
   
}