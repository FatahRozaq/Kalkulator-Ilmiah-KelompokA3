#include <stdio.h>
#include <stdlib.h>
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
	printf("\nMasukkan menu yang anda pilih :");
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
	
	system("cls");
	MenuCalStfc();
	PilihMenu(&pilih);
	switch(pilih)
	{
		case 1:
			CaraCalStd();
			break;
		case 2:
			Matriks();
			break;
		case 3:
			CaraCalStd();
			break;
		case 4:
			CaraCalStd();
			break;
		case 5:
			CaraCalStd();
			break;
		case 6:
			CaraCalStd();
			break;
		case 7:
			CaraCalStd();
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
			convertdaya();
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
			CaraCalStd();
			break;
		case 18:
			CaraCalStd();
			break;
		case 19:
			CaraCalStd();
			break;
	}
}

void MenuCalStfc()
{
	printf("|==========================================================================================|\n");
	printf("|                              MENU KALKULATOR SCIENTIFIC                                  |\n");
	printf("<==========================================================================================>\n");
 	printf("| 1.  Integral                 									                           |\n");
 	printf("| 2.  Matriks                 									                           |\n");
 	printf("| 3.  Statistika                 								                           |\n");
 	printf("| 4.  Deret Geometri                 							                           |\n");
 	printf("| 5.  Deret Aritmatika                 							                           |\n");
 	printf("| 6.  Eksponen                 									                           |\n");
 	printf("| 7.  Trigonometri                 								                           |\n");
 	printf("| 8.  Logaritma                 								                           |\n");
 	printf("| 9.  Logaritma Natural                 						                           |\n");
 	printf("| 10. Turunan                 									                           |\n");
 	printf("| 11. Modulus                 									                           |\n");
 	printf("| 12. Faktorial                 									                       |\n");
 	printf("| 13. Konvert Sistem Bilangan                 					                           |\n");
 	printf("| 14. Konvert Daya                 								                           |\n");
 	printf("| 15. Konvert Luas                 								                           |\n");
 	printf("| 16. Konvert Suhu                 								                           |\n");
 	printf("| 17. Konvert Panjang                 							                           |\n");
 	printf("| 18. Konvert Berat                 							                           |\n");
 	printf("<==========================================================================================>\n");
	printf("|                                                                                          |\n");
	printf("|==========================================================================================|\n");
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
			InputBilOrdo(&baris, "Masukkan ordo baris yang diinginkan : ");
			InputBilOrdo(&kolom, "Masukkan ordo kolom yang diinginkan : ");
			IsiMatriks(baris, kolom, Matriks1);
			IsiMatriks(baris, kolom, Matriks2);
			PenjumlahanMatriks(baris, kolom, Matriks1, Matriks2,Hasil);
			HasilMatriks(baris,kolom,"Hasil penjumlahan matriks","tambah", Hasil);
			break;
			
		case 2:
			InputBilOrdo(&baris, "Masukkan ordo baris yang diinginkan : ");
			InputBilOrdo(&kolom, "Masukkan ordo kolom yang diinginkan : ");
			IsiMatriks(baris, kolom, Matriks1);
			IsiMatriks(baris, kolom, Matriks2);
			PenguranganMatriks(baris, kolom, Matriks1, Matriks2,Hasil);
			HasilMatriks(baris,kolom,"Hasil pengurangan matriks","kurang", Hasil);
			break;
			
		case 3:
			//PerkalianMatriks();
			break;
			
		case 4:
			InputBilOrdo(&baris, "Masukkan ordo baris yang diinginkan : ");
			InputBilOrdo(&kolom, "Masukkan ordo kolom yang diinginkan : ");
			IsiMatriks(baris, kolom, Matriks1);
			TransposeMatriks(baris, kolom, Matriks1,Hasil);
			HasilMatriks(baris,kolom,"Hasil transpose matriks","transpose", Hasil);
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
void TataCara()
{
	int pilih;
	
	system("cls");
	printf("1. Kalkulator Standar");
	PilihMenu(&pilih);
	switch(pilih)
	{
		case 1:
			CaraCalStd();
			break;
	}
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
	printf("|============================================================|\n");
	printf("|                   CREDIT KALKULATOR KEL 3                  |\n");
	printf("<============================================================>\n");
	printf("|                                                            |\n");
	printf("|                          AUTHOR                            |\n");
    printf("|             Athalie Aurora Puspanegara (221511003)         |\n");
	printf("|             Gavrila Hana Simanjuntak   (221511011)         |\n");
	printf("|             Jonanda Pantas Aghita      (221511015)         |\n");
	printf("|             Muhamad Fatah Rozaq        (221511018)         |\n");
	printf("|             Nisrina Wafa Zakiya        (221511025)         |\n");
	printf("|                                                            |\n");
	printf("|          JURUSAN TEKNIK KOMPUTER DAN INFORMATIKA           |\n");
 	printf("|                PRODI D-III TEKNIK INFORMATIKA              |\n");
	printf("|                  POLITEKNIK NEGERI BANDUNG                 |\n");
	printf("|                           2023                             |\n");
 	printf("<============================================================>\n");
	printf("|          Copyright(c)2023 Kel.3 rights reserved.           |\n");
	printf("|============================================================|\n");
}
