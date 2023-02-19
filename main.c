#include <stdio.h>
#include <stdlib.h>
#include "Nisrina.h"
#include "Aurora.h"
#include "fatah.h"
#include "jojo.h"
#include "gavrila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	float penjumlahan, pengurangan, pembagian, perkalian, perpangkatan;
	int modulus, pilih;
	
	Fullmode();
	header();
	BarmenuUtama();
	
	
//	printf("\n\n\t\t\t\t\t\t\t======================= SCIENTIFIC CALCULATOR =========================");
	printf("\n \n");
	printf("\t\t\t\t\t\t\t\t [1]. Kalkulator Standar    \n\n");
	printf("\t\t\t\t\t\t\t\t [2]. Kalkulator Scientific \n\n");
	printf("\t\t\t\t\t\t\t\t [3]. Tata Cara Penggunaan  \n\n");
	printf("\t\t\t\t\t\t\t\t [4]. Credit   		   \n\n");	
	printf("\t\t\t\t\t\t\t\t [0]. Keluar                \n");
	printf("\n\n\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");

	PilihMenu(&pilih);
	getchar();
	switch (pilih)
	{
		case 1:
			CalStd();
			break;
		
		case 2:
			CalStfc();
			break;
			
		case 3:
			TataCara();
			break;
			
		case 4:
			Credit();
			
		default:
			exit(1);
	}
	
	return 0;
}
