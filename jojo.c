#include <stdio.h>
#include <stdlib.h>
#include "jojo.h"
#include "Nisrina.h"

int Modulus()
{
	
	int Hasil,bil1,bil2;	
	InputBilInt(&bil1,&bil2);
	Hasil = bil1 % bil2;
	return Hasil;
}


