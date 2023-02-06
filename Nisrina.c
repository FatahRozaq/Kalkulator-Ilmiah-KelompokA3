#include <stdio.h>
#include "Nisrina.h"

float Penjumlahan (float bil1, float bil2)
{
	float hasil;
	hasil = bil1 + bil2;
	
	return hasil;
}

void InputBil(float *bil1, float *bil2)
{
	printf("Masukkan Bilangan pertama :");
	scanf("%f", &*bil1);
	printf("Masukkan Bilangan kedua :");
	scanf("%f", &*bil2);
}

void TampilHasil (float hasil)
{
	printf("Hasil : %.3f", hasil);
}
