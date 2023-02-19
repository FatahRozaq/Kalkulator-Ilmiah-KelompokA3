#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Nisrina.h"
#include "Aurora.h"
#include "fatah.h"
#include "jojo.h"
#include "gavrila.h"

float Penjumlahan (float bil1, float bil2)
{
	float hasil;
	
	hasil = bil1 + bil2;
	
	return hasil;
}

float Pangkat(float bil1, float bil2)
{
	float hasil;
	
	hasil = pow(bil1, bil2);
	
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
	char *infixExpr;
    infixExpr=malloc(266*sizeof(char));
	char pilih;
	float hasil;
	
    do
    {
    	char postfixExpr[256] = "";
        char*x;
        
        system("cls");
    	printf("Masukkan inputan : ");
        scanf(" %[^\n]", infixExpr);
        gantiNewLineJadiSpasi(infixExpr);
        x=hapusSpasi(infixExpr);
        printf("Postfix : %s\n",infixToPostfix(x, postfixExpr));
        hasil = hitungPostfix(postfixExpr);
        printf("Hasil perhitungan: %g\n\n", hasil);
        
        printf("masukkan iputan lagi?");
        pilih = getche();
        
	}while(pilih == 'y' || pilih == 'Y');
	BacktoMain();
}

Stack* inisialisasi()
{
    Stack *s = malloc(sizeof(Stack));
    s->top=-1;
    return s;
}
/*
*
*/
int isEmpty(Stack *s)
{
    return s->top == -1;
}
/*
*
*/
Item top(Stack *s)
{
    return s->item[s->top];
}
/*
*
*/
Item pop(Stack *s)
{
    return s->item[s->top--];
}
/*
*
*/
void push(Stack *s, float val)
{
    s->item[++s->top].fData = val;
}
/*
*
*/
void pushChar(Stack *s, char c)
{
    s->item[++s->top].cData = c;
}
/*
*
*/
int isFull(Stack *s)
{
    return s->top==255;
}
/*
*
*/
int prioritas(char c)
{
    if (c=='+' || c=='-') return 1;
    else if (c=='*' || c=='/') return 2;
    else if (c=='^') return 3 ;
    return 0;
}
/*
*
*/
int isOperator(char c)
{
    if( c=='(' || c=='+' || c=='-' || c=='/' || c=='*' || c=='^') return 1;
    else return 0;
}
/*
*
*/
int negatifInteger(char *infix,char c,int ptr)
{
    if (ptr == 0 && c == '-' ) return 1;
    else  if((isOperator(infix[ptr-1]) && c == '-' ) )return 1;
    else return 0;
}
/*
*
*/
int isAfter(Stack *s)
{
    if(s->item[s->top].cData == '(' ) return 1;
    else return 0;
}
/*
*
*/

char * hapusSpasi(char * infix)
{

    char* x=malloc(266*sizeof(char));
    int i,j;
    for(i=0,j=0; infix[i]!='\0'; i++,j++)
    {

        while(infix[j]==' ')
            j++;
        x[i]=infix[j];
    }
    x[i]='\0';
    return x;
}
char *infixToPostfix(char *infix,char *postfix)
{
    char oneSpace[] = " ", tempInfix[256];
    int  ptr = 0;
    char *temp;
    
    
    Stack *s = inisialisasi();

    while(infix[ptr] != '\0' )
    {

        if(isOperator(infix[ptr]) && !negatifInteger(infix,infix[ptr],ptr))
        {
            if(infix[ptr] == '(' )
            {
                pushChar(s,infix[ptr]); //(1+
                ptr++;
            }
            else if(isAfter(s))
            {
                pushChar(s,infix[ptr]);
                ptr++;
            }
            else if(prioritas(infix[ptr]) > prioritas(top(s).cData) || isEmpty(s))
            {
                pushChar(s,infix[ptr]);
                ptr++;
            }
            else if(prioritas(infix[ptr])==prioritas(top(s).cData))
            {
                char tempchar=pop(s).cData;
                strncat(postfix,&tempchar,1);
                pushChar(s,infix[ptr]);
                ptr++;
                strcat(postfix,oneSpace);
            }
            else if(prioritas(infix[ptr]) <prioritas(top(s).cData) && top(s).cData != '(' && top(s).cData != ')')
            {
                while(1)
                {
                    char tempChar;
                    if( isEmpty(s) ) break;
                    if( top(s).cData == '(' ) break;
                    tempChar = pop(s).cData;
                    strncat(postfix, &tempChar, 1);
                    strcat(postfix, oneSpace);
                }
            }
        }
        else if(infix[ptr]==')')
        {
            while(top(s).cData!='(')
            {
                char tempChar2;
                tempChar2 = pop(s).cData;
                strncat(postfix, &tempChar2, 1);
                strcat(postfix, oneSpace);
            }
            pop(s);
            ptr++;
        }
        else
        {
            if(negatifInteger(infix,infix[ptr],ptr))
            {
                char temp2[256] = "";
                char tempChar3 = '-';
                strncat(temp2, &tempChar3, 1);
                strcpy(tempInfix, infix);
                temp = strtok(tempInfix + ptr, " +-)(*/^");
                ptr += strlen(temp) + 1;
                strcat(temp2, temp);
                strcat(postfix, temp2);
                strcat(postfix, oneSpace);
            }
            else
            {
                strcpy(tempInfix,infix);
                temp = strtok(tempInfix + ptr, " +-)(*/^");
                ptr+=strlen(temp);
                strcat(postfix, temp);
                strcat(postfix, oneSpace);
            }
        }
    }
    while(!isEmpty(s))
    {
        char tempChar6 = pop(s).cData;
        strncat(postfix, &tempChar6, 1);
        strcat(postfix,oneSpace);
    }
    return postfix;
}
/*
*
*/
void gantiNewLineJadiSpasi(char *s)
{
    char *s1 = s;
    while((s1 = strstr(s1, "\n")) != NULL)
        *s1 = ' ';
}
/*
*
*/
/// mengecek apakah nilai berupa angka (positif atau negatif)
int isNumber(char *token)
{
    return isdigit(*token) || ( *token == '-' && isdigit(token[1]) );
}
/*
*
*/
/// fungsi untuk mengecek postfix dan melakukan perhitungan
float hitungPostfix(char postFix[])
{
    float a, b;
    Stack *stack = inisialisasi();
    char *token = strtok(postFix," ");
    float hasil;

    while(token != NULL)
    {
        // pengecekan apakah angka, jika TRUE maka diubah menjadi float dan di PUSH ke subvar fdata dari subvar item struct Stack
        if(isNumber(token))
        {
            push(stack, atof(token));
        }
        // mengecek apakah operator, jika TRUE nilai 2 teratas akan di POP untuk dilakukan perhitungan
        // hasilnya akan di PUSH kembali ke stack
        else if(isOperator(*token))
        {
            a = pop(stack).fData;
            b = pop(stack).fData;
            switch(*token)
            {
            case '+':
            	hasil= Penjumlahan(b,a);
                push(stack, hasil );
                break;
            case '-':
            	hasil= Pengurangan(b,a);
                push(stack, hasil );
                break;
            case '*':
            	hasil= Perkalian(b,a);
                push(stack, hasil );
                break;
            case '/':
            	hasil= Pembagian(b,a);
                push(stack, hasil);
                break;
            case '^':
            	hasil= Pangkat(b,a);
                push(stack, hasil );
                break;
            default:
                break;
            }
        }
        token = strtok(NULL, " "); // proses pemisahan
    }
    return pop(stack).fData;
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
			LogNatural();
			break;
		case 10:
			turunan();
			break;
		case 11:
			panggilModulus();
			break;
		case 12:
			Faktorial();
			break;
		case 13:
			CalProg();
			break;
		case 14:
			konvertDaya();
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
		case 20:
			konvertvolume();
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
 	printf("\t\t\t\t\t\t\t\t| 20. Konvert Volume				|\n");
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
	
	system("cls");
	
	printf("Masukkan Inputan [exp : sin(30)]:");
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
	printf("Masukkan berat dan satuan yang akan di konvert [exp : 23 Kg] : ");
	scanf(" %[^\n]", input);
	printf("Masukkan satuan tujuan [exp : G] : ");
	scanf(" %[^\n]", konvert); // sama kaya &*input
	sscanf(input,"%d ",&berat);
	levelAsal = deteksiLevel(input);
	levelTujuan = deteksiLevel(konvert);
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

