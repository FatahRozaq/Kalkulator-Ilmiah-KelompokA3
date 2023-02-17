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
	float penjumlahan, pengurangan, pembagian, perkalian;
	int modulus, pilih;
	
	printf("================================ SCIENTIFIC CALCULATOR ===============================");
	printf("\n \n");
	printf("================================ 1. Penjumlahan        ==============================\n");
	printf("================================ 2. Pengurangan        ==============================\n");
	printf("================================ 3. Pembagian          ==============================\n");
	printf("================================ 4. Perkalian          ==============================\n");
	printf("================================ 5. Modulus            ==============================\n");
	printf("Masukkan pilihan menu yang anda pilih :");
	scanf("%d", &pilih);
	switch (pilih)
	{
		case 1:
			penjumlahan = Penjumlahan ();
			TampilHasilFloat (penjumlahan, "Penjumlahan");
			break;
		
		case 2:
			pengurangan = Pengurangan ();
			TampilHasilFloat (pengurangan, "Pengurangan");
			break;
		
		case 3:
			pembagian = Bagi();
			TampilHasilFloat (pembagian, "Pembagian");
			break;
			
		case 4:
			perkalian = Perkalian ();
			TampilHasilFloat (perkalian, "Perkalian");
			break;
			
		case 5:
			modulus = Modulus();
			TampilHasilInt (modulus, "Modulus");
			break;
	}
	
	return 0;
}
