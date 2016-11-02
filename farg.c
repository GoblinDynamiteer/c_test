#include <stdio.h>
#include <stdlib.h>

#if defined POSIX  //kristofer : HITTADE DENNA P� N�TET, S� DET SKA FUNGERA P� LINUX
  #define CLEARSCR system ( "clear" )
#elif defined MSDOS || defined WIN32
  #define CLEARSCR system ( "cls" )
#endif

#define ANSI_COLOR_RED	"\x1b[31m"
#define ANSI_COLOR_RESET	"\x1b[0m"
#define FRO "\x1b[31m" 	//R�d
#define ANSI_COLOR_GREEN "\x1b[32m" 	//Gr�n
#define FGU "\x1b[33m" 	//gul
#define FBL "\x1b[34m" 	//M�rkbl�
#define FCY "\x1b[36m" 	//Ljusbl� (cyan)
#define TSU "\x1b[4m" 		//Understruken
#define F "\x1b[0m" 			//�terst�ller f�rg

#define PRROD(X) printf(ANSI_COLOR_RED"%s"ANSI_COLOR_RESET,X)

int main (int argc, char const *argv[]) {

CLEARSCR;
system("chcp 1252");
PRROD("R�d Text!\n");
printf(ANSI_COLOR_RED"Ocks� R�d!\n"ANSI_COLOR_RESET);
printf(ANSI_COLOR_GREEN"Gr�n!\n"ANSI_COLOR_RESET);
return 0;
}