#include <stdio.h>
#include "gavrila.h"
#include "Nisrina.h"

//operasi pengurangan
float Pengurangan(){
	float pengurangan, bil1, bil2;
	InputBilFloat(&bil1,&bil2);
	
	pengurangan = (bil1-bil2);
	return pengurangan;
}


