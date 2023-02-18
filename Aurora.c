/*         
File Name		: divider.cpp
Description		: Tugas Proyek 2 
Author			: Athalie Aurora Puspanegara
*/


/* ========== Header File ========== */

#include "Aurora.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>

/* ======= End of Header File ====== */
/*         
File Name		: Aurora.c
Description		: Tugas Proyek 2 
Author			: Athalie Aurora Puspanegara
*/

/* ========== Header File ========== */

#include "Aurora.h" 
#include <stdio.h>

/* ======= End of Header File ====== */


float Bagi(float bil1, float bil2){
	float hasil;
	
	hasil = (bil1/bil2);
	return hasil;
}

void pangkat() {
    double bil, hasil;
    int ap;
    
    // Meminta pengguna memasukkan bilangan
    printf("Masukkan bilangan: ");
    scanf("%lf", &bil);
    
    // Meminta pengguna memasukkan pangkat akar
    printf("Masukkan pangkat akar: ");
    scanf("%d", &ap);
    
    // Menghitung akar pangkat tertentu
    if (ap % 2 == 0 && bil < 0) {
        printf("Tidak dapat menghitung akar pangkat genap dari bilangan negatif\n");
        return 1;
    }
    hasil = pow(fabs(bil), 1.0 / ap);
    if (bil < 0) {
        hasil = -hasil;
    }
    
    // Menampilkan hasil akar pangkat tertentu
    printf("Akar pangkat %d dari %.2f adalah %.2f\n", ap, bil, hasil);
    
    return 0;
}



void header()
{
	system("cls");
 printf("\n\n\n\t\t\t\t\t\t\t   /$$$$$$            /$$                  /$$$$$$   /$$$$$$ 	\n");
 printf("\t\t\t\t\t\t\t  /$$__  $$          | $$                 /$$__  $$ /$$__  $$	\n");
 printf("\t\t\t\t\t\t\t | $$  \__/  /$$$$$$  | $$  /$$$$$$$      | $$  \ $$|__/  \ $$	\n");
 printf("\t\t\t\t\t\t\t | $$       |____  $$| $$ /$$_____/      | $$$$$$$$   /$$$$$/	\n");
 printf("\t\t\t\t\t\t\t | $$        /$$$$$$$| $$| $$            | $$__  $$  |___  $$	\n");
 printf("\t\t\t\t\t\t\t | $$    $$ /$$__  $$| $$| $$            | $$  | $$ /$$  \ $$	\n");
 printf("\t\t\t\t\t\t\t |  $$$$$$/|  $$$$$$$| $$|  $$$$$$$      | $$  | $$|  $$$$$$/	\n");
 printf("\t\t\t\t\t\t\t  \______/  \_______/|__/ \_______/         |__/  |__/ \______/ 	\n");
	
}

void headcalprog()
{
	system("cls");
 printf("\n\n\n\t\t\t\t\t\t\t  /$$$$$$            /$$                 /$$$$$$$                              \n");
 printf("\t\t\t\t\t\t\t /$$__  $$          | $$                | $$__  $$                             		\n");
 printf("\t\t\t\t\t\t\t| $$  \__/  /$$$$$$  | $$  /$$$$$$$      | $$  \ $$ /$$$$$$  /$$$$$$   /$$$$$$ 		\n");
 printf("\t\t\t\t\t\t\t| $$       |____  $$| $$ /$$_____/      | $$$$$$$//$$__ $$ /$$__ $$ /$$__  $$		\n");
 printf("\t\t\t\t\t\t\t| $$        /$$$$$$$| $$| $$            | $$____/| $$  \__/| $$  \ $$| $$   \ $$		\n");
 printf("\t\t\t\t\t\t\t| $$    $$ /$$__  $$| $$| $$            | $$     | $$     | $$ | $$| $$  | $$		\n");
 printf("\t\t\t\t\t\t\t|  $$$$$$/|  $$$$$$$| $$|  $$$$$$$      | $$     | $$     | $$$$$$/|  $$$$$$$		\n");
 printf("\t\t\t\t\t\t\t  \______/  \_______/|__/ \_______/        |__/     |__/       \______/   \____ $$		\n");
 printf("\t\t\t\t\t\t\t                                                                      /$$  \$$		\n");
 printf("\t\t\t\t\t\t\t                                                                    | $$$$$$/		\n");
 printf("\t\t\t\t\t\t\t\t\t\t @ f l a u u r a l i x \t                        \______/ 		\n");
	
}

void athalie()
{
	printf("\t\t\t\t\t\t\t\t @ a t h a l i e \t\t\t\t");
}


void menu()
{
	printf("\n\n\t\t\t\t\t\t\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
    printf("\n\t\t\t\t\t\t\t\t\t\t   Sistem Bilangan  ");
	printf("\n\t\t\t\t\t\t\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
    printf("\n\t\t\t\t\t\t\t\t\t   [1] Desimal ");	printf("\t[3] Oktadesimal\n\n");
    printf("\t\t\t\t\t\t\t\t\t   [2] Biner");		printf("\t[4] Hexadesimal\n\n"); 
   
    printf("\n\t\t\t\t\t\t\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");

}

void BarDes()
{
	system("CLS");
	headcalprog();
	printf("\n\n\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	//printf("\n\t=============================================================== \n");	
	printf("\n\n\t\t\t\t\t\t\t\t D \tE \tS \tI \tM \tA \tL				    \n");
	printf("\t 														 \n");
	printf("\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	
	
			
}

void Fullmode()
{
	
	system("color 0e");
		
	/*Color attributes are specified by TWO hex digits -- the first
	corresponds to the background; the second the foreground.  Each digit
	can be any of the following values:

    0 = Black       8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White */
    
	ShowWindow(GetConsoleWindow(), SW_SHOWMAXIMIZED); 	// Screen mode full
}
