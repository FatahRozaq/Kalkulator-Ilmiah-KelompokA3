#include <stdio.h>
#include <stdlib.h>
#include "jojo.h"
#include <math.h>

void panggilModulus(){ // Panggil modul ini di main
	int bilMod1, bilMod2, mod;
	InputDataModulus(&bilMod1, &bilMod2, "Masukan angka : ");
	mod = Modulus(bilMod1, bilMod2); 
	printf("Hasil Modulus : %d", mod);
}
void panggilAkar(){ // Panggil modul ini di main
	float bil1, akar;
	printf("Memasukkan angka: ");
	scanf("%f",&bil1);
	akar = Akar2(bil1);
	printf("Hasil=%g\n", akar);
}
void konvertLuas(){ // Panggil modul ini di main
	float bil2;
	Luas(bil2);
}
void konvertSuhu(){ // Panggil modul ini di main
	float bil2;
	Suhu(bil2);
}
void panggilLogaritma(){ // Panggil modul ini di main
	float bil1, log1;
	
	printf("\nMasukkan angka=");
	scanf("%f", &bil1);
	log1 = Logaritma(bil1);
	printf("Hasil Logaritma : %g", log1);
}

int Modulus(int bil1, int bil2)
{
	int Hasil;	
	Hasil = bil1 % bil2;
	return Hasil;
}

float Akar2(float bil1){
	float Hasil;
	
	Hasil = sqrt(bil1);
	
	return Hasil;
}

float Suhu(float bil2)
{

	int Milih,lagi,lagi1,lagi2,lagi3;
	float Diubah,bil3,bil4,bil5,bil6,bil7,bil8,bil9,bil10,bil11,bil13;
	printf("1. C\n");
	printf("2. F\n");
	printf("3. R\n");
	printf("4. K\n");
	printf("Memilih Suhu:");
	scanf("%d",&Milih);
	system("cls");
	switch(Milih){
		case 1:
		printf("Diubah menjadi:\n");
		printf("1. F\n");
		printf("2. K\n");
		printf("3. R\n");
		printf("Pilih [1-3] : ");
		scanf("%d",&lagi);
		system("cls");
			switch(lagi){
				case 1:
							printf("Memasukkan suhu:");
							scanf("%f",&bil2);
							Diubah=(9.0/5.0 * bil2)+32;
							printf("%g F",Diubah);break;
				case 2:
							printf("Memasukkan suhu:");
							scanf("%f",&bil3);
							Diubah=bil3 + 273;
							printf("%g K",Diubah);break;
				case 3:
							printf("Memasukkan suhu:");
							scanf("%f",&bil4);
							Diubah=bil4 * 4/5.0;
							printf("%g R",Diubah);break;		
			}break;
		case 2:
		printf("Diubah menjadi:\n");
		printf("1. C\n");
		printf("2. K\n");
		printf("3. R\n");
		printf("Pilih [1-3] : ");
		scanf("%d",&lagi1);
		system("cls");
			switch(lagi1){
				case 1:
							printf("Memasukkan suhu:");
							scanf("%d",&bil5);
							Diubah=(bil5 -32 ) * 5.0/9.0;
							printf("%g C",Diubah);break;
				case 2:
							printf("Memasukkan suhu:");
							scanf("%f",&bil6);
							Diubah=( bil6 - 32) * 5.0/9.0 + 273;
							printf("%g K",Diubah);break;
				case 3:
							printf("Memasukkan suhu:");
							scanf("%f",&bil6);
							Diubah=( bil6 - 32) * 4/9.0;
							printf("%g K",Diubah);break;
				}break;
		case 3:
		printf("Diubah menjadi:\n");
		printf("1. C\n");
		printf("2. F\n");
		printf("3. K\n");
		printf("Pilih [1-3] : ");
		scanf("%d",&lagi2);
		system("cls");
			switch(lagi2){
				case 1:
							printf("Memasukkan suhu:");
							scanf("%f",&bil7);
							Diubah=bil7 * 5.0/4;
							printf("%g C",Diubah);break;					
				case 2:
							printf("Memasukkan suhu:");
							scanf("%f",&bil8);
							Diubah=(bil8 * 9/4)+32;
							printf("%g F",Diubah);break;
				case 3:
							printf("Memasukkan suhu:");
							scanf("%f",&bil9);
							Diubah=(bil9 * 5/4)+273;
							printf("%g K",Diubah);break;		
			}break;
		case 4:
		printf("Diubah menjadi:\n");
		printf("1. C\n");
		printf("2. F\n");
		printf("3. R\n");
		printf("Pilih [1-3] : ");
		scanf("%d",&lagi3);
		system("cls");
			switch(lagi3){
				case 1:
							printf("Memasukkan suhu:");
							scanf("%d",&bil10);
							Diubah=bil10 - 273;
							printf("%g C",Diubah);break;
				case 2:
							printf("Memasukkan suhu:");
							scanf("%d",&bil11);
							Diubah=(bil11 - 273) * 9/5 + 32;
							printf("%g F",Diubah);break;
				case 3:
							printf("Memasukkan suhu:");
							scanf("%d",&bil13);
							Diubah= (bil13 - 273) * 4/5;
							printf("%g R",Diubah);break;
			}break;
			
			
		}
}
	

float Luas(float bil2){
		
	int milih;
	float Hasil,bil3,bil4,bil5,bil6,bil7,bil8;	
		printf("1. km\n");
		printf("2. hm\n");
		printf("3. dam\n");
		printf("4. m  \n");
		printf("5. dm\n");
		printf("6. cm\n");
		printf("7. mm \n");
		printf("Pilih [1-7] : ");
		scanf("%d",&milih);
		system("cls");
		switch (milih){
			case 1 :
				printf("Memasukkan angka (km): ");
				scanf("%f",&bil2);
		
				if(bil2 > -32.768){
					Hasil= bil2 * 100;
					printf("%.0f hm\n",Hasil);
					Hasil= bil2 * 10000;
					printf("%.0f dam\n",Hasil);
					Hasil= bil2 * 1000000;
					printf("%.0f m\n",Hasil);
					Hasil= bil2 * 100000000;
					printf("%.0f dm\n",Hasil);
					Hasil= bil2 * 10000000000;
					printf("%.0f cm\n",Hasil);
					Hasil= bil2 * 1000000000000;
					printf("%.12f mm\n",Hasil);
			
					}break;
			case 2 :
				printf("Memasukkan angka (hm): ");
				scanf("%f",&bil3);
				
				if(bil3 > -32.768){
					Hasil= bil3 /100;
					printf("%g km\n",Hasil);
					Hasil= bil3 * 100;
					printf("%.0f dam\n",Hasil);
					Hasil= bil3 * 10000;
					printf("%.0f m\n",Hasil);
					Hasil=bil3 *  1000000;
					printf("%.0f dm\n",Hasil);
					Hasil= bil3 * 100000000;
					printf("%.0f cm\n",Hasil);
					Hasil= bil3 * 10000000000;
					printf("%.0f mm\n",Hasil);
			
					}break;
			case 3 :
				printf("Memasukkan angka (dam): ");
				scanf("%f",&bil4);
				
				if(bil4 > -32.768){
					Hasil= bil4 / 10000;
					printf("%g km\n",Hasil);
					Hasil= bil4 / 100;
					printf("%g hm\n",Hasil);
					Hasil= bil4 * 100;
					printf("%.0f m\n",Hasil);
					Hasil=bil4 *  10000;
					printf("%.0f dm\n",Hasil);
					Hasil= bil4 * 1000000;
					printf("%.0f cm\n",Hasil);
					Hasil= bil4 * 100000000;
					printf("%.0f mm\n",Hasil);
			
					}	break;	
			case 4 :
				printf("Memasukkan angka (m): ");
				scanf("%f",&bil5);
				
				if(bil5 > -32.768){
					Hasil= bil5 / 1000000;
					printf("%g km\n",Hasil);
					Hasil= bil5 / 10000;
					printf("%g hm\n",Hasil);
					Hasil= bil5 / 100;
					printf("%g dam\n",Hasil);
					Hasil=bil5 *  100;
					printf("%.0f dm\n",Hasil);
					Hasil= bil5 * 10000;
					printf("%.0f cm\n",Hasil);
					Hasil= bil5 * 1000000;
					printf("%.0f mm\n",Hasil);
			
					}	break;			
			case 5 :
				printf("Memasukkan angka (dm): ");
				scanf("%f",&bil6);
				
				if(bil6 > -32.768){
					Hasil= bil6 / 100000000;
					printf("%.8f km\n",Hasil);
					Hasil= bil6 / 1000000;
					printf("%f hm\n",Hasil);
					Hasil= bil6 / 10000;
					printf("%g dam\n",Hasil);
					Hasil= bil6 / 100;
					printf("%g m\n",Hasil);
					Hasil= bil6 * 100;
					printf("%.0f cm\n",Hasil);
					Hasil= bil6 * 10000;
					printf("%.0f mm\n",Hasil);
			
					}	break;			
			case 6 :
				printf("Memasukkan angka (cm): ");
				scanf("%f",&bil7);
				
				if(bil7 > -32.768){
					Hasil= bil7 / 10000000000;
					printf("%.10f km\n",Hasil);
					Hasil= bil7 / 100000000;
					printf("%.8f hm\n",Hasil);
					Hasil= bil7 / 1000000;
					printf("%f dam\n",Hasil);
					Hasil= bil7 / 10000;
					printf("%g m\n",Hasil);
					Hasil= bil7 / 100;
					printf("%g dm\n",Hasil);
					Hasil= bil7 * 100;
					printf("%.0f mm\n",Hasil);
			
					}	break;
			case 7 :
				printf("Memasukkan angka (cm): ");
				scanf("%f",&bil8);
				
				if(bil8 > -32.768){
					Hasil= bil8 / 1000000000000;
					printf("%.12f km\n",Hasil);
					Hasil= bil8 / 10000000000;
					printf("%.10f hm\n",Hasil);
					Hasil= bil8 / 100000000;
					printf("%.8f dam\n",Hasil);
					Hasil= bil8 / 1000000;
					printf("%f m\n",Hasil);
					Hasil= bil8 / 10000;
					printf("%g dm\n",Hasil);
					Hasil= bil8 / 100;
					printf("%g cm\n",Hasil);
			
					}	break;							
			}
}		



//LOGARITMA BASIS 10
float Logaritma(float bil1){

	float Hasil,bil2;
	
	
	Hasil= log(bil1);
//	printf("%g",Hasil);

	return Hasil;
}	

void InputDataModulus(int *bilMod1, int *bilMod2, char *kalimat){
	printf("%s", kalimat);
	scanf("%d", *&bilMod1);
	
	printf("%s", kalimat);
	scanf("%d", *&bilMod2);
}	

void LogaritmaBebas(){
	float basis, angka, Hasil;
   
    printf("Masukkan basis : ");
    scanf("%lf", &basis);
    printf("Masukkan angka : ");
    scanf("%lf", &angka);
    
    Hasil = HitungLogBebas(basis, angka);
    
    printf("Hasil= %g", Hasil);

}
		
double HitungLogBebas(float basis2, float angka2){
	float Hasil;
	
	Hasil = log10(basis2) / log10(angka2);
	return Hasil;
}	
	

