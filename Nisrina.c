#include <stdio.h>
#include "Nisrina.h"

float Penjumlahan ()
{
	float hasil, bil1, bil2;
	
	InputBilFloat(&bil1, &bil2);
	hasil = bil1 + bil2;
	
	return hasil;
}

void InputBilFloat(float *bil1, float *bil2)
{
	printf("Masukkan Bilangan pertama :");
	scanf("%f", &*bil1);
	printf("Masukkan Bilangan kedua :");
	scanf("%f", &*bil2);
}

void InputBilInt(int *bil1, int *bil2)
{
	printf("\n\nMasukkan Bilangan pertama :");
	scanf("%d", &*bil1);
	printf("Masukkan Bilangan kedua :");
	scanf("%d", &*bil2);
}

void TampilHasilFloat(float hasil, char nama[])
{
	printf("\n%s : %g", nama,hasil);
}

void TampilHasilInt(int hasil, char nama[])
{
	printf("\n%s : %d", nama,hasil);
}
