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
	float bil1,bil2, penjumlahan, pengurangan, pembagian, perkalian;
	int angka1, angka2, modulus;
	
	InputBilFloat(&bil1,&bil2);
	penjumlahan = Penjumlahan (bil1, bil2);
	TampilHasilFloat (penjumlahan, "penjumlahan");
	pembagian = Bagi(bil1,bil2);
	TampilHasilFloat (pembagian, "pembagian");
	perkalian = Perkalian (bil1, bil2);
	TampilHasilFloat (perkalian, "perkalian");
	pengurangan = Pengurangan (bil1, bil2);
	TampilHasilFloat (pengurangan, "pengurangan");
	InputBilInt(&angka1,&angka2);
	modulus = Modulus(angka1, angka2);
	TampilHasilInt (modulus, "modulus");
	
	return 0;
}
