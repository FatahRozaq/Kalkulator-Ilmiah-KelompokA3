/*         
File Name		: calcprog.cpp
Description		: Tugas Proyek 2 
Author			: Athalie Aurora Puspanegara
*/


/* ========== Header File ========== */

#include "calcprog.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>

/* ======= End of Header File ====== */



/* Kamus Data */


int main()
{
	
	int pilih;
	
	Fullmode();
	headcalprog();
                                   	
    printf("\n\n\t\t\t\t\t\t\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\t\t\t\t\t\t\t\t   Sistem Bilangan  ");
	printf("\n\t\t\t\t\t\t\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\n\t\t\t\t\t\t\t\t\t   1. Desimal ");	printf("\t\t3. Oktadesimal\n\n");
    printf("\t\t\t\t\t\t\t\t\t   2. Biner");		printf("\t\t4. Hexadesimal\n\n"); 
    printf("\n\t\t\t\t\t\t\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
  	printf("\n\t\t\t\t\t\t\t Pilih : ");
	scanf("%d", &pilih);	
	
	switch(pilih)
	{
		case 1:
			Desimal();
			break;
		
		case 2:
			Biner();
			break;
		case 3:
			Okta();
		case 4:
			Hexa();
			break;
		
		default:
			
			printf("\n\t\t\t\t\t\t\tInvalid..! Tolong masukan kembali sesuai opsi yang ada!");
			Sleep(1500);
	}
	
	return main();
}

int i, j;
int des;
Histori hist;



void Desimal()
{
	
	BarDes();
	char input[100];
	int cek;
	
	
	while(1)
	{		

	printf("\n\n\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");		
	printf("\n\t					 ");
	printf("\n\t\t\t\t\t\t\t Desimal	: ");	
	printf("\n\t					 ");
	printf("\n\t\t\t\t\t\t\t Biner		:	");	
	printf("\n\t					");		
	printf("\n\t\t\t\t\t\t\t Oktadesimal	:	");	
	printf("\n\t					 ");		
	printf("\n\t\t\t\t\t\t\t Hexadesimal	:	");	
	printf("\n\t					");	
	printf("\n\n\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	printf("\n\n\t\t\t\t\t\t\t Masukan Angka : "); getchar(); scanf("%[^\n]s", &input);
	//printf("\n\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	
		
		
		cek = 1;
		des = atoi(input);
		
		
		// Validasi 
		for(i = 0 ; i < strlen(input); i++)
		{
			if(input[i] >= '0' && input[i] <= '9')
			{
				
			}
			else 
			{
				printf("Invalid...! Silahkan input lagi..");
				getchar();
				cek = 0;
				break;	//enf for
			}
		}
		if(cek = 1)
		break;	//end while
	}
	
	// Histori
	memset(hist.desimal,0,MAX);
	memset(hist.biner,0,MAX);
	memset(hist.okta,0,MAX);
	memset(hist.hexa,0,MAX);
	
	// Nilai Desimal
	strcpy(hist.desimal,input);
	
	
	BarDes();
	printf("\n\n\t\t\t\t\t\t\t Input Keyboard : %d",des);
	printf("\n\n\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	printf("\n\t					 ");
	printf("\n\t\t\t\t\t\t\t Desimal	: 	"); 			printf("%d", des);	
	printf("\n\t					 ");
	printf("\n\t\t\t\t\t\t\t Biner		:	");			DesBin(des, hist.biner);
	printf("\n\t					");		
	printf("\n\t\t\t\t\t\t\t Oktadesimal	:	");		DesOkt(des, hist.okta);
	printf("\n\t					 ");		
	printf("\n\t\t\t\t\t\t\t Hexadesimal	:	");		DesHex(des, hist.hexa);
	printf("\n\t					");	
	printf("\n\n\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");

	
	
	
	// dari Desimal
	hist.convert = '1';
	
}



void Biner()
{
	
	int des;
	char no[MAX];
	
	des = BinDes(hist.biner);

	itoa(des,no,10);
	strcpy(hist.desimal,no);


	// Biner -> Desimal
	printf("\nDesimal : ");
	printf("%d", des);
	
	// Desimal -> Hexadesimal
	printf("\nHexa Desimal : ");
	DesHex(des, hist.hexa);
	
	// Cetak nilai biner
	printf("\nBiner : ");
	DesBin(des, hist.biner);
	
	// Biner -> Oktadesimal
	printf("\nOkta Desimal : ");
	DesOkt(des, hist.okta);
	



	// Histori
	memset(hist.desimal,0,MAX);
	memset(hist.biner,0,MAX);
	memset(hist.okta,0,MAX);
	memset(hist.hexa,0,MAX);
	
	memset(no,0,MAX);
	
	// dari Biner
	hist.convert = '2';
	
}

void DesHex(int dec, char* hist)
{
	

	int i=0, j=0;
	int mod;	
	char hexa[20];
	
	// Algoritma
	memset(hexa,0,20);
	
	while(des!=0){
		if(des%16 > 9){
			switch(des%16){
				case 10:
					hexa[i] = 'A';
					i++;
					break;
				case 11:
					hexa[i] = 'B';
					i++;
					break;
				case 12:
					hexa[i] = 'C';
					i++;
					break;
				case 13:
					hexa[i] = 'D';
					i++;
					break;
				case 14:
					hexa[i] = 'E';
					i++;
					break;
				case 15:
					hexa[i] = 'F';
					i++;
					break;
			}
			des = des/16;
		} else {
			mod = des%16 + '0';
			hexa[i] = mod;
			des = des/16;
			i++;
		}
	}
	
	// Print Result
	for(j = i-1 ; j>=0 ; j--){
		printf("%c", hexa[j]);
	}
	strcpy(hist,hexa);
}




int BinDes(char* hist)
{
	char bin[100];
	int cek = 1;
	int des = 0;
	
	
	while(1)
	{
		printf("Masukan angka : ");
		getchar(); 
		scanf("%[^\n]s", &bin);
		
		
		cek = 1;
		
		
		// Validasi 
		for(i = 0 ; i < strlen(bin); i++)
		{
			if(bin[i] >= '1' || bin[i] <= '0')
			{
				
			}
			else 
			{
				printf("Invalid...! Silahkan input lagi..");
				getch();
				cek = 0;
				break;	//enf for
			}
		}
		if(cek = 1)
		break;	//end while
	}
	
	// Cetak nilai biner
//	printf("Biner : ");
//	printf("%s", bin);
	strcpy(hist,bin);
	
	// Biner -> Desimal
	for(i = 0 ; i < strlen(bin) ; i++){
		if(bin[i] == '1'){
			des = des*2 + 1;
		} else {
			des = des*2;
		} 
	}	
	
	return des;
	
}



void Okta()
{
	
	//int des;
	char no[MAX];
	
	des = OktDes(hist.okta);

	itoa(des,no,10);
	strcpy(hist.desimal,no);

	// Okta -> Desimal
	printf("\nDesimal : ");
	printf("%d", des);
	
	//Okta -> Biner
	printf("\nBiner : ");
	DesBin(des, hist.biner);
	
	// Okta -> Hexadesimal
	printf("\nHexa Desimal :");
	DesHex(des, hist.hexa);
	
	
	memset(hist.desimal,0,MAX);
	memset(hist.biner,0,MAX);
	memset(hist.okta,0,MAX);
	memset(hist.hexa,0,MAX);
	
	memset(no,0,MAX);
	
	
	// dari Oktadesimal
	hist.convert = '3';
	
}

int OktDes(char* hist)
{
	int des = 0;
	char input[100];
	int okta;
	int cek;
	
	while(1)
	{
		//printf("\nMasukan angka : ");
		getchar(); 
		scanf("%[^\n]s", &input);
		if(strcmp(input,"0") == 0)
			return 0;	// Go back to menu	
					
		cek = 1;
		okta = atoi(input);
		
	
		
		// Validasi 
		for(i = 0 ; i < strlen(input); i++)
		{
			if(input[i] >= '0' && input[i] <= '7')
			{
				
			}
			else 
			{
				printf("Invalid...! Silahkan input lagi..");
				getch();
				cek = 0;
				break;	//enf for
			}
		}
		if(cek = 1)
		break;	//end while
	}	
	
	i = 0;
	// Cetak nilai Okta Desimal 
	printf("\nOktadesimal : ");
	printf("%d", okta);
	strcpy(hist,input);
	
	// Oktadesimal -> Desimal
	while(okta != 0)
	{
		des += (okta%10) * pow(8,i);
		i++;
		okta /= 10;
	}

	
	return des;
}


void DesBin(int des, char* hist)
/* 	
	terdapat parameter (int des, char* hist).
	parameter des merupakan bilangan Desimal yang akan dikonversi ke Biner, sedangkan 
	parameter hist untuk menyimpan hasil konversi bilangan nya. */
{
	int i=0, j=0, h=0;
	int bin[100];
	

	// Algoritma
	while(des != 0)
	{
		bin[i] = des%2;
		des = (int)des/2;
		i++;
	}
	
	/* note for me :	 
	Bilangan desimal dimasukan ke dalam variabel "des" kemudian while dilakukan untuk mengkonversi bilangan desimal menjadi bilangan biner.
	Setiap iterasi nilai des dimoduluskan dengan 2, jadi sisa hasil modulo tersebut dimasukan ke dalam array bin. 
	Lalu nilai des dibagi dengan 2 dan dibulatkan ke bawah menjadi bilangan integer.
	Variabel indeks i dinaikan 1 biar bisa dimasukan nilai yang lain (selanjutnya) pada indeks berikutnya.  */
	
	// Mencetak hasil
	for (j = i-1; j>= 0; j--)
	{
		printf("%d", bin[j]);
		hist[h++] = bin[j] + '0';
	}
	
	/*  note for me :	
	Operasi for ini digunakan untuk mencetak setiap digit dari bilangan biner yang udah disimpan di array bin.
	Selain itu operasi ini juga menyimpan setiap digit bilangan biner ke hist yg bertipe struk dengan mengkonversi nilai integer ke karakter
	dengan nambahin nilai ASCII untuk karakter '0'. 
	
	Sesudah array diisi dengan nilai biner, kemudian dilakukan iterasi dari belakang (j=i-1) sampai awal (j>=0) dengan langkah mundur satu per satu 
	(j--). Jadi setiap iterasi nilai biner di indeks ke-j itu akan dicetak ( printf("%d", bin[j[) )
	
	Setiap iterasi nilai biner di indeks ke-j ditambahkan karakter 0 yang hasilnya itu akan disimpan di array hist pada indeks ke-h dengan
	(hist[h++] = bin[j + '0'). Karakter '0' ditambahkan pada nilai biner untuk mengubah nilai integer menjadi karakter ASCII yang mewakili
	nilai tersebut. 
	
	contoh : 
	nilai biner adalah 1011, maka array hist akan berisi karakter '1', '0', '1', dan '1' pada indeks ke-0, ke-1, ke-2, dan ke-3.*/
	
}



void DesOkt(int des, char* hist)
/* 	
	terdapat parameter (int des, char* hist).
	parameter int des = bilangan Desimal yang akan dikonversi ke Oktadesimal, sedangkan 
	parameter char* hist = menyimpan hasil konversi bilangan nya. */

{

	int i=0, j=0, h=0;
	int okt[30];		
	
	// Algoritma 
	while(des != 0){
		okt[i] = des%8;
		des = (int)des/8;
		i++; 
	}
	
	// Mencetak Hasil
	for(j = i-1 ; j>=0 ; j--){
		printf("%d", okt[j]);
		hist[h++] = okt[j] + '0';
	}
	
	
}


void Hexa()
{	
	int des;
	char no[MAX];
	
	des = HexDes(hist.hexa);

	itoa(des,no,10);
	strcpy(hist.desimal,no);

	// Hexa -> Desimal
	printf("\nDesimal : ");
	printf("%d", des);
	
	//Hexa -> Biner
	printf("\nBiner : ");
	DesBin(des, hist.biner);

	// Hexa -> Oktadesimal
	printf("\nOkta Desimal : ");
	DesOkt(des, hist.okta);

	// Histori
	memset(hist.desimal,0,MAX);
	memset(hist.biner,0,MAX);
	memset(hist.okta,0,MAX);
	memset(hist.hexa,0,MAX);
	
	memset(no,0,MAX);
	
	// dari Oktadesimal
	hist.convert = '4';
	
}


int HexDes(char* hist)
{
	int des = 0;
	int i = 0;
	char hex[20];
	int dasar = 0;
	int isi;
	int cek = 1;

	while(1)
	{
		printf("\n Masuk hexa angka : ");
		getchar(); 
		scanf("%[^\n]s", &hex);
		
		
		cek = 1;
		isi = strlen(hex);
		
		// Semua huruf besar karakter
		for(i = 0; i < isi ; i++){
			hex[i] = toupper(hex[i]);	// toupper = ctype.h
		}
		
		
		
		// Validasi 
		for(i = 0 ; i < isi; i++)
		{
			if(hex[i] >= '0' && hex[i] <= '9')
			{
				cek = 1;
			}
			else if (hex[i] >= 'A' && hex[i] <= 'F')
			{
				cek = 1;
			}
			else
			{
				printf("Invalid...! Silahkan input lagi..");
				getch();
				cek = 0;
				break;	//end for
			}
		}
		if(cek = 1)
		break;	//end while
	}	
	
	// Cetak nilai Hexa Desimal
	printf("Hexa Desimal : ");
	printf("%s", hex);
	strcpy(hist,hex);
	
	// Hexadecimal to Decimal Converter
	for(i = isi--; i>=0 ; i--){
		if(hex[i] >= '0' && hex[i] <= '9'){
			des += (hex[i] - 48) * dasar;
			dasar *= 16;
		}
		else if(hex[i] >= 'A' && hex[i] <= 'F'){
			des += (hex[i] - 55) * dasar;
			dasar *= 16;
		}
	}
	return des;	
	
	
}


void CalProg()
{
	main();
	
}


