/*         
File Name		: Aurora.c
Description		: Tugas Proyek 2 
Author			: Athalie Aurora Puspanegara
*/

/* ========== Header File ========== */

#include "Aurora.h" 
#include "Nisrina.h"
#include <stdio.h>

/* ======= End of Header File ====== */


float Bagi(){
	float hasil;
	float bil1, bil2;
	
	InputBilFloat(&bil1,&bil2);	
	
	hasil = (bil1/bil2);
	return hasil;
}

	