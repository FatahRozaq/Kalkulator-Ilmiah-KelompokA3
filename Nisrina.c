#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Nisrina.h"
#include "Aurora.h"
#include "fatah.h"
#include "jojo.h"
#include "gavrila.h"

float Penjumlahan ()
{
	float hasil, bil1, bil2;
	
	InputBilFloat(&bil1);
	InputBilFloat(&bil2);
	hasil = bil1 + bil2;
	
	return hasil;
}

float Pangkat()
{
	float hasil, bil;
	int pangkat;
	
	InputBilFloat(&bil);
	InputBilInt(&pangkat);
	hasil = bil;
	while(pangkat != 1)
	{
		hasil = hasil*bil;
		pangkat--;	
	}
	
	return hasil;
}

void InputBilFloat(float *bil)
{
	printf("\nMasukkan Bilangan:");
	scanf("%f", &*bil);
}

void PilihMenu(int *pilih)
{
	printf("\n\n\t\t\t\t\t\t\tPilih Menu :");
	scanf("%d", &*pilih);
}

void InputBilInt(int *bil)
{
	printf("\nMasukkan Bilangan:");
	scanf("%d", &*bil);
}

void TampilHasilFloat(float hasil, char nama[])
{
	printf("\n%s : %g", nama,hasil);
}

void TampilHasilInt(int hasil, char nama[])
{
	printf("\n%s : %d", nama,hasil);
}

void CalStd()
{
	system("cls");
	printf("calculator standar");
}

void CalStfc()
{
	int pilih;
	
	header();
	//BarMenu();
	MenuCalStfc();
	PilihMenu(&pilih);
	switch(pilih)
	{
		case 1:
			integral();
			break;
		case 2:
			Matriks();
			break;
		case 3:
			statistika();
			break;
		case 4:
			deretGeometri();
			break;
		case 5:
			deretAritmatika();
			break;
		case 6:
			eksponen();
			break;
		case 7:
			Trigonometri();
			break;
		case 8:
			panggilLogaritma();
			break;
		case 9:
			logaritmanatural();
			break;
		case 10:
			turunan();
			break;
		case 11:
			panggilModulus();
			break;
		case 12:
			faktorial();
			break;
		case 13:
			CalProg();
			break;
		case 14:
			convertdaya();
			break;
		case 15:
			konvertLuas();
			break;
		case 16:
			konvertSuhu();
			break;
		case 17:
			konvertPanjang();
			break;
		case 18:
			konvertBerat();
			break;
		case 19:
			konvertWaktu();
			break;
	}
}

void MenuCalStfc()
{
 	printf("\n\n\t\t\t\t\t\t\t\t<===============================================>\n");
	printf("\t\t\t\t\t\t\t\t|        MENU \tKALKULATOR \tSCIENTIFIC     |\n");
 	printf("\t\t\t\t\t\t\t\t<===============================================>\n");
 	printf("\t\t\t\t\t\t\t\t| 1.  Integral					|\n");
 	printf("\t\t\t\t\t\t\t\t| 2.  Matriks					|\n");
 	printf("\t\t\t\t\t\t\t\t| 3.  Statistika				|\n");
 	printf("\t\t\t\t\t\t\t\t| 4.  Deret Geometri				|\n");
 	printf("\t\t\t\t\t\t\t\t| 5.  Deret Aritmatika				|\n");
 	printf("\t\t\t\t\t\t\t\t| 6.  Eksponen					|\n");
 	printf("\t\t\t\t\t\t\t\t| 7.  Trigonometri				|\n");
 	printf("\t\t\t\t\t\t\t\t| 8.  Logaritma					|\n");
 	printf("\t\t\t\t\t\t\t\t| 9.  Logaritma Natural				|\n");
 	printf("\t\t\t\t\t\t\t\t| 10. Turunan					|\n");
 	printf("\t\t\t\t\t\t\t\t| 11. Modulus					|\n");
 	printf("\t\t\t\t\t\t\t\t| 12. Faktorial					|\n");
 	printf("\t\t\t\t\t\t\t\t| 13. Konvert Sistem Bilangan			|\n");
 	printf("\t\t\t\t\t\t\t\t| 14. Konvert Daya				|\n");
 	printf("\t\t\t\t\t\t\t\t| 15. Konvert Luas				|\n");
 	printf("\t\t\t\t\t\t\t\t| 16. Konvert Suhu				|\n");
 	printf("\t\t\t\t\t\t\t\t| 17. Konvert Panjang				|\n");
 	printf("\t\t\t\t\t\t\t\t| 18. Konvert Berat				|\n");
 	printf("\t\t\t\t\t\t\t\t| 19. Konvert Waktu				|\n");
 	printf("\t\t\t\t\t\t\t\t<===============================================>\n");
	printf("\t\t\t\t\t\t\t\t|                                               |\n");
	printf("\t\t\t\t\t\t\t\t|================================================>\n");
}

void konvertWaktu()
{
	int input;
	int jam, menit,detik;
	
	jam =0;
	menit = 0;
	detik=0;
	
	printf("Masukkan inputan :");
	scanf("%d", &input);
	
	jam = input/3600;
	menit = (input%3600)/60;
	detik = (input%3600)%60;
	
	if(jam!=0)
	{
		printf("%d jam ", jam);
	}
	if(menit!=0)
	{
		printf("%d menit ", menit);
	}
	if(detik!=0)
	{
		printf("%d detik ", detik);
	}
}


void Trigonometri()
{
	char *input;
	float radian;
	float derajat;
	float value;
	
	input = (char *)malloc( 10* sizeof(char));
	
	printf("Masukkan Inputan (exp : sin( 30)) :");
	scanf(" %s", input);
	radian = RadianTrigono(input);
	printf("radian : %f\n", radian);
	derajat = DerajatTrigono(input);
	printf("derajat : %f\n", derajat);
}

float RadianTrigono(char *input)
{
	float value;
	
	if(strstr(input,"sin"))
	{
		sscanf(input,"sin(%f)",&value);
		return TriSin(value);
	}
	else if(strstr(input,"cos"))
	{
		sscanf(input,"cos(%f)",&value);
		return TriCos(value);
	}
	else if(strstr(input,"tan"))
	{
		sscanf(input,"tan(%f)",&value);
		return TriTan(value);
	}
	else if(strstr(input,"cot"))
	{
		sscanf(input,"cot(%f)",&value);
		return TriCot(value);
	}
	else if(strstr(input,"sec"))
	{
		sscanf(input,"sec(%f)",&value);
		return TriSec(value);
	}
	else if(strstr(input,"csc"))
	{
		sscanf(input,"csc(%f)",&value);
		return TriCsc(value);
	}
}

float DerajatTrigono(char *input)
{
	float value;
	
	if(strstr(input,"sin"))
	{
		sscanf(input,"sin(%f)",&value);
		return TriSin(value*3.14159 /180);
	}
	else if(strstr(input,"cos"))
	{
		sscanf(input,"cos(%f)",&value);
		return TriCos(value*3.14159 /180);
	}
	else if(strstr(input,"tan"))
	{
		sscanf(input,"tan(%f)",&value);
		return TriTan(value*3.14159 /180);
	}
	else if(strstr(input,"cot"))
	{
		sscanf(input,"cot(%f)",&value);
		return TriCot(value*3.14159 /180);
	}
	else if(strstr(input,"sec"))
	{
		sscanf(input,"sec(%f)",&value);
		return TriSec(value*3.14159 /180);
	}
	else if(strstr(input,"csc"))
	{
		sscanf(input,"csc(%f)",&value);
		return TriCsc(value*3.14159 /180);
	}
}

float TriSin(float value)
{
	
	return sin(value);
}

float TriCos(float value)
{
	
	return cos(value);
}
float TriTan(float value)
{
	
	return tan(value);
}
float TriCot(float value)
{
	float cos, sin;
	
	cos = TriCos(value);
	sin = TriSin(value);
	
	return (cos/sin);
}
float TriSec(float value)
{
	float cos;
	
	cos = TriCos(value);
	
	return (1/cos);
}
float TriCsc(float value)
{
	float sin;
	
	sin = TriSin(value);
	
	return (1/sin);
}

void Matriks()
{
	int pilih,baris,kolom;
	int Matriks1[100][100], Matriks2[100][100], Hasil[100][100];
	
	system("cls");
	printf("|==========================================================================================|\n");
	printf("|                                     MENU MATRIKS                                         |\n");
	printf("<==========================================================================================>\n");
	printf("|                                                                                          |\n");
 	printf("| 1. Penjumlahan																		   |\n");
	printf("| 2. Pengurangan																		   |\n");
	printf("| 3. Perkalian																			   |\n");
	printf("| 4. Transpose																			   |\n");
 	printf("<==========================================================================================>\n");
	printf("|                                                                                          |\n");
	printf("|==========================================================================================|\n");
	PilihMenu(&pilih);
	switch(pilih)
	{
		case 1:
			InputBilOrdo(&baris, "Masukkan baris yang diinginkan : ");
			InputBilOrdo(&kolom, "Masukkan kolom yang diinginkan : ");
			IsiMatriks(baris, kolom, Matriks1);
			IsiMatriks(baris, kolom, Matriks2);
			PenjumlahanMatriks(baris, kolom, Matriks1, Matriks2,Hasil);
			HasilMatriks(baris,kolom,"Hasil penjumlahan matriks :","tambah", Hasil);
			break;
			
		case 2:
			InputBilOrdo(&baris, "Masukkan baris yang diinginkan : ");
			InputBilOrdo(&kolom, "Masukkan kolom yang diinginkan : ");
			IsiMatriks(baris, kolom, Matriks1);
			IsiMatriks(baris, kolom, Matriks2);
			PenguranganMatriks(baris, kolom, Matriks1, Matriks2,Hasil);
			HasilMatriks(baris,kolom,"Hasil pengurangan matriks :","kurang", Hasil);
			break;
			
		case 3:
			InputBilOrdo(&baris, "Masukkan baris yang diinginkan : ");
			InputBilOrdo(&kolom, "Masukkan kolom yang diinginkan : ");
			IsiMatriks(baris, kolom, Matriks1);
			IsiMatriks(kolom, baris, Matriks2);
			PerkalianMatriks(baris, kolom, Matriks1, Matriks2,Hasil);
			HasilMatriks(baris,baris,"Hasil perkalian matriks :","kali", Hasil);
			//PerkalianMatriks();
			break;
			
		case 4:
			InputBilOrdo(&baris, "Masukkan baris yang diinginkan : ");
			InputBilOrdo(&kolom, "Masukkan kolom yang diinginkan : ");
			IsiMatriks(baris, kolom, Matriks1);
			TransposeMatriks(baris, kolom, Matriks1,Hasil);
			HasilMatriks(baris,kolom,"Hasil transpose matriks :","transpose", Hasil);
			break;
	}
}

void IsiMatriks(int baris, int kolom, int Hasil[100][100])
{
	int b, k;
	
	printf("Isi elemen matriks sebanyak %d baris dan %d kolom :\n", baris, kolom);
	
	for(b=0;b<baris;b++)
	{
		for(k=0;k<kolom;k++)
		{
			Hasil[b][k] = getche() - '0';
			printf("\t");
		}
		printf("\n");
	}
}

void PenjumlahanMatriks(int baris, int kolom, int Matriks1[100][100], int Matriks2[100][100], int Hasil[100][100])
{
	int b, k;
	for(b=0;b<baris;b++)
	{
		for(k=0;k<kolom;k++)
		{
			Hasil[b][k]=Matriks1[b][k]+Matriks2[b][k];
		}
	}
}

void PenguranganMatriks(int baris, int kolom, int Matriks1[100][100], int Matriks2[100][100], int Hasil[100][100])
{
	int b, k;
	for(b=0;b<baris;b++)
	{
		for(k=0;k<kolom;k++)
		{
			Hasil[b][k]=Matriks1[b][k]-Matriks2[b][k];
		}
	}
}

void PerkalianMatriks(int baris, int kolom, int Matriks1[100][100], int Matriks2[100][100],int Hasil[100][100])
{
	int jumlah;
	int b,k,j;
	
	for(b = 0; b < baris; b++)
	{
	 	for(j = 0; j < baris; j++)
		{
        	for(k = 0; k < kolom; k++)
			{
          		jumlah = jumlah + Matriks1[b][k] * Matriks2[k][j];
       		}
        	Hasil[b][j] = jumlah;
        	jumlah = 0;
      	}
		printf("\n");
    }
}

void TransposeMatriks(int baris, int kolom,int Matriks[100][100], int Hasil[100][100])
{
	int b,k;
	for (k=0;k<kolom;k++)
	{
		for (b=0;b<baris;b++)
		{
			Hasil[k][b]=Matriks[b][k];
		}
		printf("\n");
	}
}

void HasilMatriks(int baris, int kolom, char ket[50], char ciri[10], int Hasil[100][100])
{
	int b,k;
	
	printf("%s \n", ket);
	
	if(ciri == "transpose")
	{
		for (k=0;k<kolom;k++)
		{
			for (b=0;b<baris;b++)
			{
				printf("%d\t",Hasil[k][b]);
			}
			printf("\n");
		}
	}
	else if(ciri=="kali")
	{
		int jumlah;
		int b,j;
		
		for(b = 0; b < baris; b++)
		{
		 	for(j = 0; j < baris; j++)
			{
	        	printf("%d \t",Hasil[b][j]);
	      	}
			printf("\n");
	    }
	}
	else
	{
		for(b=0;b<baris;b++)
		{
			for(k=0;k<kolom;k++)
			{
				printf("%d\t",Hasil[b][k]);
			}
			printf("\n");
		}
	}
}

void InputBilOrdo(int *bil, char kalimat[50])
{
	printf("%s", kalimat);
	scanf("%d", &*bil);
}

void konvertBerat()
{
	char *input;
	char *konvert;
	int berat;
	int levelAsal, levelTujuan;
	float *hasil;
	
	hasil = (float *)malloc(sizeof(float) *10);
	input = (char *)malloc( 10* sizeof(char));
	konvert = (char *)malloc( 10* sizeof(char));
	
	menuConvertBerat();
	printf("Masukkan berat dan satuan yang akan di konvert (exp : 23 Kg)");
	scanf(" %[^\n]", input);
	printf("Masukkan satuan tujuan (exp : G)");
	scanf(" %[^\n]", konvert); // sama kaya &*input
	sscanf(input,"%d ",&berat);
	levelAsal = deteksiLevel(input);
	levelTujuan = deteksiLevel(konvert);
	printf("%d", levelAsal);
	printf("%d", levelTujuan);
	printf("%d", berat);
	hasil = HitungConvertBerat(levelAsal, levelTujuan, berat);
	if((levelAsal - levelTujuan) > 4)
	{
		printf("hasil konvert : %f %s", *hasil, konvert);
	}
	else
	{
		printf("hasil konvert : %g %s", *hasil, konvert);
	}
}

void menuConvertBerat()
{
	system("cls");
	printf("|==========================================================================================|\n");
	printf("|                                     SATUAN BERAT                                         |\n");
	printf("<==========================================================================================>\n");
	printf("|                                                                                          |\n");
 	printf("| 1. Kg										   	   5.Dg									   |\n");
	printf("| 2. Hg										   	   6.Cg									   |\n");
	printf("| 3. Dag									   	   7.Mg									   |\n");
	printf("| 4. G																			   	   	   |\n");
 	printf("<==========================================================================================>\n");
	printf("|                                                                                          |\n");
	printf("|==========================================================================================|\n");
}

int deteksiLevel(char *input)
{
	if(strstr(input,"Kg"))
	{
		return 1;
	}
	else if(strstr(input,"Hg"))
	{
		return 2;
	}
	else if(strstr(input,"Dag"))
	{
		return 3;
	}
	else if(strstr(input,"G"))
	{
		return 4;
	}
	else if(strstr(input,"Dg"))
	{
		return 5;
	}
	else if(strstr(input,"Cg"))
	{
		return 6;
	}
	else if(strstr(input,"Mg"))
	{
		return 7;
	}
}

float *HitungConvertBerat(int levelAsal, int levelTujuan, int berat)
{
	float *hasil;
	
	hasil = (float *)malloc(sizeof(float) *10);
	
	*hasil = berat;
	if(levelAsal > levelTujuan)
	{
		while(levelAsal > levelTujuan)
		{
			*hasil = *hasil / 10;
			levelAsal--;
		}
	}
	else if(levelAsal < levelTujuan)
	{
		while(levelAsal < levelTujuan)
		{
			*hasil = *hasil *10;
			levelAsal++;
		}	
	}
	
	return hasil;
}

void TataCara()
{
	int pilih;
	
	system("cls");
	printf("SOON");
	/* printf("1. Kalkulator Standar");
	PilihMenu(&pilih);
	switch(pilih)
	{
		case 1:
			CaraCalStd();
			break;
	} */
}

void CaraCalStd()
{
	system("cls");
	printf("|==========================================================================================|\n");
	printf("|                              TATA CARA KALKULATOR STANDAR                                |\n");
	printf("<==========================================================================================>\n");
 	printf("| Ikuti peraturan dibawah ini, jika tidak maka ekspresi akan dianggap tidak VALID!         |\n");
	printf("|                                                                                          |\n");
	printf("| 1. Berikut adalah karakter yang VALID untuk membuat ekspresi :                           |\n");
	printf("|    '(' dan ')' untuk memberikan tanda kurung pada operasi                                |\n");
	printf("|    '$' dan '^' untuk operasi akar kuadrat dan pangkat                                    |\n");
	printf("|    '*' dan '/' untuk operasi perkalian dan pembagian                                     |\n");
	printf("|    '+' dan '-' untuk operasi penjumlahan dan pengurangan                                 |\n");
	printf("|    '.' untuk menandakan desimal.                                                         |\n");
 	printf("<==========================================================================================>\n");
	printf("|                                                                                          |\n");
	printf("|==========================================================================================|\n");
}

void Credit()
{
	system("cls");
	printf("\n\n\n\n\n\t\t\t\t\t\t\t|============================================================|\n");
	printf("\t\t\t\t\t\t\t|                   CREDIT KALKULATOR KEL 3                  |\n");
	printf("\t\t\t\t\t\t\t<============================================================>\n");
	printf("\t\t\t\t\t\t\t|                                                            |\n");
	printf("\t\t\t\t\t\t\t|                          AUTHOR                            |\n");
    printf("\t\t\t\t\t\t\t|             Athalie Aurora Puspanegara (221511003)         |\n");
	printf("\t\t\t\t\t\t\t|             Gavrila Hana Simanjuntak   (221511011)         |\n");
	printf("\t\t\t\t\t\t\t|             Jonanda Pantas Aghita      (221511015)         |\n");
	printf("\t\t\t\t\t\t\t|             Muhamad Fatah Rozaq        (221511018)         |\n");
	printf("\t\t\t\t\t\t\t|             Nisrina Wafa Zakiya        (221511025)         |\n");
	printf("\t\t\t\t\t\t\t|                                                            |\n");
	printf("\t\t\t\t\t\t\t|          JURUSAN TEKNIK KOMPUTER DAN INFORMATIKA           |\n");
 	printf("\t\t\t\t\t\t\t|                PRODI D-III TEKNIK INFORMATIKA              |\n");
	printf("\t\t\t\t\t\t\t|                  POLITEKNIK NEGERI BANDUNG                 |\n");
	printf("\t\t\t\t\t\t\t|                           2023                             |\n");
 	printf("\t\t\t\t\t\t\t<============================================================>\n");
	printf("\t\t\t\t\t\t\t|          Copyright(c)2023 Kel.3 rights reserved.           |\n");
	printf("\t\t\t\t\t\t\t|============================================================|\n");
	BacktoMain();
}

