#include <stdio.h>
#include <stdlib.h>
#include "Nisrina.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	float bil1,bil2, hasil;
	
	InputBil(&bil1,&bil2);
	hasil = Penjumlahan (bil1, bil2);
	TampilHasil (hasil);
	
	return 0;
}
