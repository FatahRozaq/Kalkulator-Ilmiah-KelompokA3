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


/* ================================= */

void pangkat() {
    double bil, hasil;
    int ap;
    
    // Meminta pengguna memasukkan bilangan
    printf("Masukkan bilangan: ");
    scanf("%lf", &bil);
    
    // Meminta pengguna memasukkan pangkat akar
    printf("Masukkan pangkat akar: ");
    scanf("%d", &ap);
    
    // Menghitung akar pangkat tertentu
    if (ap % 2 == 0 && bil < 0) {
        printf("Tidak dapat menghitung akar pangkat genap dari bilangan negatif\n");
        return 1;
    }
    hasil = pow(fabs(bil), 1.0 / ap);
    if (bil < 0) {
        hasil = -hasil;
    }
    
    // Menampilkan hasil akar pangkat tertentu
    printf("Akar pangkat %d dari %.2f adalah %.2f\n", ap, bil, hasil);
    
    return 0;
}



// Konversi bilangan desimal ke biner
void desimalkeBiner(int desimal) {
    int biner[32], i = 0;

    while (desimal > 0) {
        biner[i] = desimal % 2;
        desimal /= 2;
        i++;
    }

    printf("Biner: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", biner[j]);
    }
    printf("\n");
}

// Konversi bilangan desimal ke oktal
void desimalkeOktal(int desimal) {
    int oktal[32], i = 0;

    while (desimal > 0) {
        oktal[i] = desimal % 8;
        desimal /= 8;
        i++;
    }

    printf("Oktal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", oktal[j]);
    }
    printf("\n");
}

// Konversi bilangan desimal ke heksadesimal
void desimalkeHexa(int desimal) {
    char hexa[32];
    int i = 0;

    while (desimal > 0) {
        int remainder = desimal % 16;
        if (remainder < 10) {
            hexa[i] = remainder + 48;
        } else {
            hexa[i] = remainder + 55;
        }
        desimal /= 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexa[j]);
    }
    printf("\n");
}	