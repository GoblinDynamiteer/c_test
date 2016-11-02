#include <stdio.h>
#include <stdlib.h>

#if defined POSIX  //kristofer : HITTADE DENNA PÅ NÄTET, SÅ DET SKA FUNGERA PÅ LINUX
  #define CLEARSCR system ( "clear" )
#elif defined MSDOS || defined WIN32
  #define CLEARSCR system ( "cls" )
#endif

#define ANSI_COLOR_RED	"\x1b[31m"
#define ANSI_COLOR_RESET	"\x1b[0m"
#define FRO "\x1b[31m" 	//Röd
#define ANSI_COLOR_GREEN "\x1b[32m" 	//Grön
#define FGU "\x1b[33m" 	//gul
#define FBL "\x1b[34m" 	//Mörkblå
#define FCY "\x1b[36m" 	//Ljusblå (cyan)
#define TSU "\x1b[4m" 		//Understruken
#define F "\x1b[0m" 			//Återställer färg

#define PRROD(X) printf(ANSI_COLOR_RED"%s"ANSI_COLOR_RESET,X)

int main (int argc, char const *argv[]) {

CLEARSCR;
system("chcp 1252");
PRROD("Röd Text!\n");
printf(ANSI_COLOR_RED"Också Röd!\n"ANSI_COLOR_RESET);
printf(ANSI_COLOR_GREEN"Grön!\n"ANSI_COLOR_RESET);
return 0;
}