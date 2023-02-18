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
	
	
	printf("================================ SCIENTIFIC CALCULATOR ===============================");
	printf("\n \n");
	printf("================================ 1. Kalkulator Standar       ==============================\n");
	printf("================================ 2. Kalkulator Scientific    ==============================\n");
	printf("================================ 3. Tata Cara Penggunaan	 ==============================\n");
	printf("================================ 4. Credit		             ==============================\n");	
	printf("================================ 0. Keluar			         ==============================\n");
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
