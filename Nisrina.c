
#include "Nisrina.h"
#include "Aurora.h"
#include "fatah.h"
#include "jojo.h"
#include "gavrila.h"



//linked list

addressTree AlokasiTree(infotype X)
{
	 /* Kamus Lokal */
	 addressTree P;
	 
	 /* Algoritma */
	 P = (addressTree) malloc (sizeof (Tree));
	 if (P != Nil)		/* Alokasi berhasil */
	 {
		Left(P) = Nil;
		Parent(P) = Nil;
		Info(P) = X;
		Right(P) = Nil;
	 }
	 return (P);
}

address Alokasi(infotype X)
{
	 /* Kamus Lokal */
	 address P;
	 
	 /* Algoritma */
	 P = (address) malloc (sizeof (ElmtList));
	 if (P != Nil)		/* Alokasi berhasil */
	 {
	Prev(P) = Nil;
	Info(P) = X;
	Next(P) = Nil;
	 }
	 return (P);
}

void InsVLast(address *front,address *rear, infotype X)
{
	address P;
	P = Alokasi(X);
	if (P != Nil)
	{	
	InsertLast (front,rear, P);
			}
			
}

void InsertLast (address *front,address *rear, address P)
{
	
	if(*front == Nil)
	{
		*front = P;
		*rear = P;
	}
	else
	{
		Next(*rear) = P;
		Prev(P) = *rear;
		*rear = P;
	}
}

void InsVLastChar(address *top, infotype X)
{
	address P;
	P = Alokasi(X);
	if (P != Nil)
	{	
	InsertLastChar (top, P);
			}
			
}

void InsertLastChar (address *top, address P)
{
	
	if(*top == Nil)
	{
		*top = P;
	}
	else
	{
		Next(*top) = P;
		Prev(P) = *top;
		*top = P;
	}
}

/*
addressNum AlokasiNum(double X)
{
	 
	 addressNum P;
	 
	 P = (addressNum) malloc (sizeof (TempNum));
	 if (P != Nil)		
	 {
	Prev(P) = Nil;
	Number(P) = X;
	Next(P) = Nil;
	 }
	 return (P);
}

void InsVLastNum(addressNum *top, double X)
{
	addressNum P;
	P = AlokasiNum(X);
	if (P != Nil)
	{	
	InsertLastNum (top, P);
			}
			
}

void InsertLastNum (addressNum *top, addressNum P)
{
	
	if(*top == Nil)
	{
		*top = P;
	}
	else
	{
		Next(*top) = P;
		Prev(P) = *top;
		*top = P;
	}
}*/

/*void PrintInfoASC (address data)
{
	 
	address P;
	int i;
	
	
	if (data == Nil)
	{
		 printf ("List Kosong .... \a\n");
	}
	else	
	{
		 P = data;
		 for (;;)
		 {
			if (P == Nil)
			{
				 printf("\n");
				 break;
			}
			else
			{
				 printf (" %s ", Info(P));
				 P = Next(P);
			}
		 }
	}
}*/

/*void PrintInfoNum (addressNum data)
{
	 
	addressNum P;
	int i;
	
	if (data == Nil)
	{
		 printf ("List Kosong .... \a\n");
	}
	else	
	{
		 P = data;
		 for (;;)
		 {
			if (P == Nil)
			{
				 printf("\n");
				 break;
			}
			else
			{
				 printf (" %lf ", Number(P));
				 P = Prev(P);
			}
		 }
	}
}*/

void DelVFirst (address *front,address *rear )
{
	address P;
	
	if (*front != Nil)
	{
		P = *front;
		*front = Next(P);
		Next(P) = Nil;
		if(*front == Nil)
		{
			*rear = Nil;
		}
		else
		{
			Prev(*front) = Nil;
		}
		DeAlokasi (P);
	}
		else
	{	
		printf("tidak ada yang dihapus\n");
		}
	
}


void DelAll (address *front,address *rear)
{
	 /* Kamus Lokal */
	while (*front != Nil  )
	{
		DelVFirst (front,rear);
	}
}

void DeAlokasi (address P)
{
	 if (P != Nil)
	 {
		free (P);
	 }
}

void DelVLastChar (address *top )
{
	address P;
	
	if (*top != Nil)
	{
		P = *top;
		*top = Prev(P);
		Prev(P) = Nil;
		DeAlokasi (P);
	}
	
}

/*void DelVLastNum (addressNum *top )
{
	addressNum P;
	
	if (*top != Nil)
	{
		P = *top;
		*top = Prev(P);
		Prev(P) = Nil;
		DeAlokasiNum (P);
	}
		else
	{	
		printf("tidak ada yang dihapus\n");
		}
	
}*/

/*void DeAlokasiNum (addressNum P)
{
	 if (P != Nil)
	 {
		free (P);
	 }
}*/
double Penjumlahan (double bil1, double bil2)
{
	double hasil;
	
	hasil = bil1 + bil2;
	
	return hasil;
}

double Pangkat(double bil1, double bil2)
{
	double hasil;
	
	hasil = Powku(bil1, bil2);
	
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

/*int validasiChar(address front)
{

	address P;
	char* tampung;
	int hasil=0;
	int compare;
	
	if (front == Nil)
	{
		 hasil =0;
	}
	else
	{
		 P = front;
		 for (;;)
		 {
		 	if (P == Nil)
		 	{
		 		break;
			}
			else
			{
				tampung = Info(P);
				if (isdigit (*tampung) || isOperator(*tampung) || *tampung=='|')
				{
					P = Next(P);
				}
				else if( strstr(tampung, "log") || strstr(tampung, "exp") || strstr(tampung, "ln") || strstr(tampung, "arc") ||strstr(tampung, "sin") || strstr(tampung, "cos") || strstr(tampung, "tan") || strstr(tampung, "csc") || strstr(tampung, "sec") || strstr(tampung, "cot") )
				{
						P = Next(P);
				}
				else
				{
					 hasil = 1;
					 break;
				}
			}
		 }
	}
	return hasil;
	
}*/

int validasiFormat(address front)
{

	address P;
	char* tampung;
	int hasil=0;
	int compare;
	int i;
	
	 /* Algoritma */
	if (front == Nil)
	{
		 hasil =1;
	}
	else	/* List memiliki elemen */
	{
		 P = front;
		 for (;;)
		 {
		 	if (P == Nil)
		 	{
		 		break;
			}
			else
			{
				tampung = Info(P);
				if(isOperator(*(Info(front))) && *(Info(front)) != '-' && *(Info(front)) !='(')
				{
					hasil =1;
					break;
				}
				else if (isNumber(tampung))
				{
					i =0;
					while(tampung[i] != '\0')
					{
						if( !(isOperator(tampung[i])) && !(isdigit(tampung[i])) )
						{
							if(tampung[i] == '.' && isdigit(tampung[i-1]) && isdigit(tampung[i+1]))
							{
								i++;
							}
							else
							{
								hasil = 1;
								break;
							}
						}
						else
						{
							i++;
						}
					}
					P = Next(P);
				}
				else if ( isOperator(*tampung) || *tampung=='|' || *tampung==')')
				{
					if(tampung[0] == '-' && isdigit(tampung[1]))
					{
						P = Next(P);
					}
					else if(tampung[0] == '!')
					{
						if(Prev(P) != Nil)
						{
							tampung = Info(Prev(P));
							if(!(isdigit(*tampung)))
							{
								hasil = 1;
								break;
							}
						}
						else if(Prev(P) == Nil)
						{
							hasil = 1;
							break;
						}
						
						P = Next(P);
					}
					else
					{
						P = Next(P);
						if(P != Nil)
						{
							tampung = Info(P);
							if(!(isdigit(*tampung)) && !(isOperator(*tampung)) && !(isOperator2(*tampung)))
							{
								hasil = 1;
								break;
							}
						}
						else if(*tampung=='|' || *tampung==')')
						{
							hasil = 0;
						}
						else
						{
							hasil = 1;
							break;	
						}
					}
					
				}
				else if( strstr(tampung, "log") || strstr(tampung, "exp") || strstr(tampung, "ln") || strstr(tampung, "arc") ||strstr(tampung, "sin") || strstr(tampung, "cos") || strstr(tampung, "tan") || strstr(tampung, "csc") || strstr(tampung, "sec") || strstr(tampung, "cot") )
				{
						P = Next(P);
				}
				else
				{
					 hasil = 1;
					 break;
				}
			}
		 }
	}
	return hasil;
	
}

double DerajatTrigono(char *input)
{
	double value;
	
	if(strstr(input,"arcsin"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"arcsin(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arcsin(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"arcsin(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arcsin(100)\n");
				exit(0);
			}
		}
		return hitungarcsin(value);
	}
	
	if(strstr(input,"arccos"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"arccos(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arccos(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"arccos(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arccos(100)\n");
				exit(0);
			}
		}
		return hitungarccos(value);
	}
	
	if(strstr(input,"arctan"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"arctan(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arctan(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"arctan(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arctan(100)\n");
				exit(0);
			}
		}
		return hitungarctan(value);
	}
	
	if(strstr(input,"arcsec"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"arcsec(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arcsec(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"arcsec(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arcsec(100)\n");
				exit(0);
			}
		}
//		return hitungarcsec(value);
	}
	
	if(strstr(input,"arccot"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"arccot(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arccot(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"arccot(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arccot(100)\n");
				exit(0);
			}
		}
//		return hitungarccot(value);
	}
	
	if(strstr(input,"arccsc"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"arccsc(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arccsc(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"arccsc(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah arccsc(100)\n");
				exit(0);
			}
		}
//		return hitungarccsc(value);
	}
	
	if(strstr(input,"sinh"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"sinh(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah sinh(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"sinh(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah sinh(100)\n");
				exit(0);
			}
		}
		return hitungsinh(value);
	}
	
	if(strstr(input,"cosh"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"cosh(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah cosh(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"cosh(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah cosh(100)\n");
				exit(0);
			}
		}
		return hitungcosh(value);
	}
	
	if(strstr(input,"tanh"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"tanh(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah tanh(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"tanh(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah tanh(100)\n");
				exit(0);
			}
		}
		return hitungtanh(value);
	}
	
	if(strstr(input,"sech"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"sech(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah sech(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"sech(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah sech(100)\n");
				exit(0);
			}
		}
//		return hitungsech(value);
	}
	
	if(strstr(input,"coth"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"coth(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah coth(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"coth(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah coth(100)\n");
				exit(0);
			}
		}
//		return hitungcoth(value);
	}
	
	if(strstr(input,"csch"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"csch(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah csch(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"csch(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah csch(100)\n");
				exit(0);
			}
		}
//		return hitungcsch(value);
	}
	
	if(strstr(input,"sin"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"sin(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah sin(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"sin(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah sin(100)\n");
				exit(0);
			}
		}
		return TriSin(value);
	}
	else if(strstr(input,"cos"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"cos(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah cos(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"cos(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah cos(100)\n");
				exit(0);
			}
		}
		return TriCos(value);
	}
	else if(strstr(input,"tan"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"tan(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah tan(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"tan(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah tan(100)\n");
				exit(0);
			}
		}
		return TriTan(value);
	}
	else if(strstr(input,"cot"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"cot(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah cot(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
			
		}
		else
		{
			if (sscanf(input,"cot(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah cot(100)\n");
				exit(0);
			}
		}
		return TriCot(value);
	}
	else if(strstr(input,"sec"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"sec(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah sec(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"sec(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah sec(100)\n");
				exit(0);
			}
			
		}
		return TriSec(value);
	}
	else if(strstr(input,"csc"))
	{
		if(strstr(input,"-"))
		{
			if (sscanf(input,"csc(-%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah csc(100)\n");
				exit(0);
			}
			else
			{
				value = -1*value;
			}
		}
		else
		{
			if (sscanf(input,"csc(%lf)",&value) != 1) 
			{
				printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
				printf("\nContoh penulisan trigonometri yang benar adalah csc(100)\n");
				exit(0);
			}
			
		}
		return TriCsc(value);
	}
	
}

double Sin(double value){
	double radian = value * PI / 180.0, result = 0.0;
	int i;
	
	for(i = 0; i <10; i++){
		double term = power(-1, i) * power(radian, 2 * i + 1) / factorial(2 * i + 1);;
		result += term;
	}
	return result;

}

double Cos(double value){
	
	double radian = value * PI / 180.0, result = 0.0;
	int i;
	
	 for (i = 0; i < 10; i++) {
        double term = power(-1, i) * power(radian, 2 * i) / factorial(2 * i);
        result += term;
    }
    
    return result;
}

double Tan(double value) {
    
    if(value == 90 || value == 270){
    	undefinedMode(); 
	}
    
    return Sin(value) / Cos(value);
}

double TriSin(double value)
{
	return Sin(value);
}

double TriCos(double value)
{
	
	return Cos(value);
}
double TriTan(double value)
{
	
	return Tan(value);
}

double TanCot(double value) {
    return Sin(value) / Cos(value);
}

double TriCot(double value)
{
	
	if(value == 0 || value == 180 || value == 360){
		undefinedMode();
	}
	
	return 1.0 / TanCot(value);
}
double TriSec(double value)
{
	
	if(value == 90 || value == 270){
		undefinedMode();
	}
	
	return 1.0 / Cos(value);
}

double TriCsc(double value)
{
	
	if(value == 0 || value == 180 || value == 360){
		undefinedMode(); 
	}
	
	return 1.0 / Sin(value);
}

int isEmpty(address top)
{
    return top == Nil;
}


infotype topPop(address top)
{
	infotype data;
	
	data = (infotype)malloc(5*sizeof(char));
	
	if(top != Nil)
	{
	data = Info(top);	
	}
	else
	{
		data = "p";
	}
	
    return data;
}

infotype pop(address *top)
{
	infotype data;
	
	data = (infotype)malloc(3*sizeof(char));
	
	if(*top == Nil)
	{
		printf("nil");
		data = "p";
	}
	else
	{
			data = Info(*top);
	}

    DelVLastChar (top);
    
    return data;
}

/*double popNum(addressNum *top)
{
	double data;
	
	data = Number(*top);
    DelVLastNum (top);
    
    return data;
}*/

double popRight(addressTree *parent)
{
	double data;
	infotype angka;
	angka=(char*)malloc(5*sizeof(char));
	angka = Info(Right(*parent));
	data = atof(angka);
    DeAlokasiTree (Right(*parent));
    Right(*parent) = Nil;
    
    return data;
}

double popLeft(addressTree *parent)
{
	double data;
	infotype angka;
	
	angka=(char*)malloc(5*sizeof(char));
	angka = Info(Left(*parent));
	data = atof(angka);
    DeAlokasiTree (Left(*parent));
    Left(*parent) = Nil;
    
    return data;
}

void push(double d, addressTree *parent)
{
	infotype data;
	
	data=(char*)malloc(5*sizeof(char));
	
	sprintf(data, "%lf", d);
	
    Info(*parent)= data;
}


void pushChar(infotype c, address *top)
{
	
    InsVLastChar(top, c);
}


int priority(char c)
{
    if (c=='+' || c=='-') return 1;
    else if (c=='*' || c=='/' || c =='m' ) return 2;
    else if (c=='^' || c=='$' ) return 3;
    else if (c== '!' ) return 4;
    return 0;
}

int isOperator2(char c)
{
	if(c== '|' || c== 's' || c== 'c' || c== 'a' || c== 't'  || c== 'l' || c== 'e' )
	{
		return 1;
	}
}


int isOperator(char c)
{
    if( c=='(' || c=='+' || c=='-' || c=='/' || c=='*' || c=='^' || c=='$' || c=='!' || c=='m') return 1;
    else return 0;
}


int negatifInteger(char *infix,char c,int ptr)
{
    if (ptr == 0 && c == '-' ) return 1;
    else  if((infix[ptr-1] == '!' && c == '-' ) )return 0;
    else  if((infix[ptr-1] == '|' && c == '-' ) )return 1;
    else  if((isOperator(infix[ptr-1]) && c == '-' ) )return 1;
    else return 0;
}


int isAfter(address top)
{
	infotype data;
	
	data = (infotype)malloc(3*sizeof(char));
	
	data = Info(top);
    if(data == "(" ) return 1;
    else return 0;
}


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

void infixLinkedList(char *infix, address *front, address *rear)
{
	char tempInfix[255];
    int  ptr = 0;
    infotype temp;
    infotype Chartemp;
    double value, basis;
    int mutlak;
    int compare;
    infotype tampungChar;
    address top;
    top = Nil;
    mutlak =0;
    
    while(infix[ptr] != '\0' )
    {
    	Chartemp = (infotype ) malloc(3*sizeof(char));
        Chartemp[0] = infix[ptr];
		Chartemp[1] = '\0';
        if(isOperator(infix[ptr]) && !negatifInteger(infix,infix[ptr],ptr))
        {
		    	InsVLast(front, rear, Chartemp);
                if(Chartemp[0]  == 'm')
                {
                	ptr = ptr+3;
				}
				else
				{
					ptr++;
				}
        }
        else if(infix[ptr]=='|' ||  infix[ptr]==')')
        {
            InsVLast(front, rear, Chartemp);
            ptr++;
        }
        else
        {
		    char *temp2;
		    char *temp1;
		    int i,b;
		    int panjang;

		    temp1 = (infotype ) malloc(10*sizeof(char));
		    temp1[0]= '\0';
            if(negatifInteger(infix,infix[ptr],ptr))
            {
            	temp2 = (infotype ) malloc(10*sizeof(char));
            	temp2[0]= '-';
            	temp2[1]= '\0';
                strcpy(tempInfix, infix);
                temp = strtok(tempInfix + ptr, "+*/^m$!|");
                
                if(temp[1] == '(')
				{
					
						InsVLast(front, rear, "0");
						InsVLast(front, rear, temp2);
						ptr++;
				}
                else if(isdigit(temp[1]))
				{
					
						temp = strtok(temp, "+()-*/^$!|");
		            	ptr+=strlen(temp) +1;
		            	strcat(temp2, temp);
				    	InsVLast(front, rear, temp2);
				}
				else if(strstr(temp,"log"))
				{
					temp = strtok(tempInfix + ptr, "+-*/^$!|");
					if (sscanf(temp,"log%lf(%lf)",&basis,&value) != 2) 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan logaritma yang benar adalah log10(100)\n");
						getche();
						main();
					}
					else
					{
						InsVLast(front, rear, "0");
						InsVLast(front, rear, temp2);
						InsVLast(front, rear,"log");
						ptr = ptr + 3+1;
					}
				}
				
				else if(strstr(temp,"sinh") || strstr(temp,"cosh") || strstr(temp,"tanh")|| strstr(temp,"sech") ||strstr(temp,"coth") || strstr(temp,"csch"))
				{
					InsVLast(front, rear, "0");
					InsVLast(front, rear, temp2);
					for(i=0; i<4; i++)
					{
						temp1[i] = temp[i+1];
						
					}				
					temp1[i] ='\0';
	                InsVLast(front, rear, temp1);
					ptr = ptr + 4 +1;
					if (infix[ptr] != '(') 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan trigonometri yang benar adalah %s (100)\n", temp1);
						getche();
						main();
					}
				}
				
				else if(strstr(temp,"arcsin") || strstr(temp,"arccos") || strstr(temp,"arctan")|| strstr(temp,"arcsec") ||strstr(temp,"arccot") || strstr(temp,"arccsc"))
				{
					InsVLast(front, rear, "0");
					InsVLast(front, rear, temp2);
					for(i=0; i<6; i++)
					{
						temp1[i] = temp[i+1];
						
					}				
					temp1[i] ='\0';
	                InsVLast(front, rear, temp1);
					ptr = ptr + 6 +1;
					if (infix[ptr] != '(') 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan trigonometri yang benar adalah %s(1)\n", temp1);
						getche();
						main();
					}
				}
				
                else if(strstr(temp,"sin") || strstr(temp,"cos") || strstr(temp,"tan")|| strstr(temp,"sec") ||strstr(temp,"cot") || strstr(temp,"csc"))
				{
					InsVLast(front, rear, "0");
					InsVLast(front, rear, temp2);
					for(i=0; i<3; i++)
					{
						temp1[i] = temp[i+1];
						
					}				
					temp1[i] ='\0';
					InsVLast(front, rear, temp1);
					ptr = ptr + 3 + 1;
					if (infix[ptr] != '(') 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan trigonometri yang benar adalah %s (100)\n", temp1);
						getche();
						main();
					}
				}
				else if(strstr(temp,"exp"))
				{
					InsVLast(front, rear, "0");
					InsVLast(front, rear, temp2);
					InsVLast(front, rear, "exp");
					ptr = ptr + 3 +1;
					if (infix[ptr] != '(') 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan!\n");
						printf("\nContoh penulisan eksponensial yang benar adalah exp(100)\n");
						getche();
						main();
					}
				}
				else if(strstr(temp,"ln"))
		        {
		            InsVLast(front, rear, "0");
					InsVLast(front, rear, temp2);
					InsVLast(front, rear, "ln");
					ptr = ptr + 2 +1;
					if (infix[ptr] != '(') 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan logaritma natural yang benar adalah ln(100)\n");
						getche();
						main();
					}
				}
				else
				{
					temp = strtok(tempInfix + ptr, " +*/^$!|");
					if(temp[0] == 'e' && temp[1] == '\0')
		            {
		            	temp = strtok(temp, "+()-*/^%$!|");
		            	ptr += strlen(temp) + 1;
		            	sprintf(temp,"%lf",eksponen);
					}
					else if(temp[0] == 'p' && temp[1] == 'h' && temp[2] == 'i' && temp[3] == '\0')
		            {
		            	temp = strtok(temp, "+()-*/^%$!|");
		            	ptr += strlen(temp) + 1;
		                sprintf(temp,"%lf",phi);
					}
					else
					{
						ptr+=strlen(temp);
					}
	                strcat(temp2, temp);
					InsVLast(front, rear, temp2);
				}
                
            }
            else
            {
	            strcpy(tempInfix, infix);
                temp = strtok(tempInfix + ptr, " +*/^m$!|");
                
                if(isdigit(temp[0]))
                {
					temp = strtok(temp, "+()-*/^%$!|");
		        	ptr+=strlen(temp);
				    strcat(temp1, temp);
					InsVLast(front, rear, temp1);
				}
				else if(strstr(temp,"log"))
				{
					temp = strtok(tempInfix + ptr, "+-*/^$!|");
					if (sscanf(temp,"log%lf(%lf)",&basis,&value) != 2) 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan logaritma yang benar adalah log10(100)\n");
						getche();
						main();
					}
					else
					{
						InsVLast(front, rear, "log");
						ptr = ptr + 3;
					}
				}
				else if(strstr(temp,"arcsin") || strstr(temp,"arccos") || strstr(temp,"arctan")|| strstr(temp,"arcsec") ||strstr(temp,"arccot") || strstr(temp,"arccsc"))
				{
					for(i=0; i<6; i++)
					{
						temp1[i] = temp[i];
						
					}				
					temp1[i] ='\0';
	                InsVLast(front, rear, temp1);
					ptr = ptr + 6;
					if (infix[ptr] != '(') 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan trigonometri yang benar adalah %s(1)\n", temp1);
						getche();
						main();
					}
				}
				else if(strstr(temp,"sinh") || strstr(temp,"cosh") || strstr(temp,"tanh")|| strstr(temp,"sech") ||strstr(temp,"coth") || strstr(temp,"csch"))
				{
					for(i=0; i<4; i++)
					{
						temp1[i] = temp[i];
						
					}				
					temp1[i] ='\0';
	                InsVLast(front, rear, temp1);
					ptr = ptr + 4;
					if (infix[ptr] != '(') 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan trigonometri yang benar adalah %s (100)\n", temp1);
						getche();
						main();
					}
				}
				
				else if(strstr(temp,"sin") || strstr(temp,"cos") || strstr(temp,"tan")|| strstr(temp,"sec") ||strstr(temp,"cot") || strstr(temp,"csc"))
				{
					for(i=0; i<3; i++)
					{
						temp1[i] = temp[i];
						
					}				
					temp1[i] ='\0';
	                InsVLast(front, rear, temp1);
					ptr = ptr + 3;
					if (infix[ptr] != '(') 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan trigonometri yang benar adalah %s (100)\n", temp1);
						getche();
						main();
					}
				}
				else if(strstr(temp,"exp"))
				{
	                InsVLast(front, rear, "exp");
					ptr = ptr + 3;
					if (infix[ptr] != '(') 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan!\n");
						printf("\nContoh penulisan eksponensial yang benar adalah exp(100)\n");
						getche();
						main();
					}
				}
				else if(strstr(temp,"ln"))
		        {
		            InsVLast(front, rear, "ln");
					ptr = ptr + 2;
					if (infix[ptr] != '(') 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan logaritma natural yang benar adalah ln(100)\n");
						getche();
						main();
					}
				}
	            else
				{
	            	temp = strtok(tempInfix + ptr, "+-*/^$!|");
					if(temp[0] == 'e' && temp[1] == '\0')
		            {
		            	temp = strtok(temp, "+()-*/^$!|");
		            	ptr+=strlen(temp);
		            	sprintf(temp,"%lf",eksponen);
					}
					else if(temp[0] == 'p' && temp[1] == 'h' && temp[2] == 'i' && temp[3] == '\0')
		            {
		            	temp = strtok(temp, "+()-*/^$!|");
		            	ptr+=strlen(temp);
		                sprintf(temp,"%lf",phi);
					}
					else
					{
						ptr+=strlen(temp);
					}
	                strcat(temp1, temp);
					InsVLast(front, rear, temp1);
				}
            }
            
        }
        
    }
    
}

void PrintInfoData (address data)
{
	 /* Kamus Lokal */
	address P;
	
	 /* Algoritma */
	if (data == Nil)
	{
		 printf ("List Kosong .... \a\n");
	}
	else	/* List memiliki elemen */
	{
		 P = data;
		 for (;;)
		 {
			if (P == Nil)
			{
				 printf("\n");
				 break;
			}
			else	/* Belum berada di akhir List */
			{
				 printf (" %s ", Info(P));
				 P = Next(P);
			}
		 }
	}
}

void infixToPostfix(address frontIn, address *front, address *rear)
{
	address P;
	P = Nil;
    infotype temp;
    infotype temp2;
    infotype Chartemp;
    int mutlak;
    int compare;
    infotype tampungChar;
    address top;
    top = Nil;
    mutlak =0;
    
    P = frontIn;
    while( P != Nil)
    {
    	temp = Info(P);
        if(isOperator(temp[0]) && temp[1] == '\0')
        {
        	if(isEmpty(top))
            {
            	Chartemp = (infotype ) malloc(2*sizeof(char));
            	Chartemp = Info(P);
                pushChar(Chartemp, &top);
                P = Next(P);
            }
            else if(*(Info(P)) == '(' )
            {
                Chartemp = (infotype ) malloc(2*sizeof(char));
            	Chartemp = Info(P);
                pushChar(Chartemp, &top);
                P = Next(P);
            }
            else if(isAfter(top))
            {
                Chartemp = (infotype ) malloc(2*sizeof(char));
            	Chartemp = Info(P);
                pushChar(Chartemp, &top);
                P = Next(P);
            }
            else if(priority(*(Info(P))) > priority(*(topPop(top))))
            {
                Chartemp = (infotype ) malloc(2*sizeof(char));
            	Chartemp = Info(P);
                pushChar(Chartemp, &top);
                P = Next(P);
            }
            else if(priority(*(Info(P)))==priority(*(topPop(top))))
            {
            	tampungChar = (infotype ) malloc(2*sizeof(char));
            	tampungChar= pop(&top);
		    	InsVLast(front, rear, tampungChar);
                Chartemp = (infotype ) malloc(2*sizeof(char));
            	Chartemp = Info(P);
                pushChar(Chartemp, &top);
                P = Next(P);
            }
            else if(priority(*(Info(P))) <priority(*(topPop(top))) && topPop(top) != "(" && topPop(top) != ")")
            {
                do
                {
                	
                    if( isEmpty(top) ) break;
                    if( topPop(top) == "(" ) break;
                    tampungChar = (infotype ) malloc(2*sizeof(char));
	            	tampungChar = pop(&top);
			    	InsVLast(front, rear, tampungChar);
                }while( priority(*(Info(P))) < priority(*(topPop(top))) );
            }
        }
        else if(*(Info(P))=='|' && mutlak == 0)
        {
        	Chartemp = (infotype ) malloc(2*sizeof(char));
            Chartemp = Info(P);
            pushChar(Chartemp, &top);
            P = Next(P);
        	mutlak=1;
        }
        else if(*(Info(P))=='|' && mutlak == 1)
        {
        	char tempChar2;
        	int mut;
        	mut = strcmp(topPop(top), "|");
            while(mut == 1)
            {
            	tampungChar = (infotype ) malloc(2*sizeof(char));
            	tampungChar = pop(&top);
		    	InsVLast(front, rear, tampungChar);
		    	mut = strcmp(topPop(top), "|");
            }
            tampungChar = (infotype ) malloc(2*sizeof(char));
            tampungChar= pop(&top);
		    InsVLast(front, rear, tampungChar);
            mutlak--;
            P = Next(P);
        }
        else if(*(Info(P))==')')
        {
            while(*topPop(top) != '(')
            {
                tampungChar = (infotype ) malloc(3*sizeof(char));
            	tampungChar = pop(&top);
		    	if(*(tampungChar) == 'p')
		    	{
		    		printf("\n\n\t\t\t\t\t\t\t\t\tEkspresi tidak valid\n");
		    		getche();
					main();
				}
				else
				{
					InsVLast(front, rear, tampungChar);
				}
		    	
            }
            if(*(topPop(Prev(top))) == 's' || *(topPop(Prev(top))) == 'c' || *(topPop(Prev(top))) == 'a' || *(topPop(Prev(top))) == 't' ||*(topPop(Prev(top))) == 'l' || *(topPop(Prev(top))) == 'e'  )
            {

            	tampungChar = (infotype ) malloc(5*sizeof(char));
            	tampungChar = topPop(Prev(top));
            	InsVLast(front, rear, tampungChar);
            	DelVLastChar (&top );
            	DelVLastChar (&top );
			}
			else
			{
				DelVLastChar (&top );
			}
            P = Next(P);
        }
        else if( strstr(temp, "log") || strstr(temp, "exp") || strstr(temp, "ln") || strstr(temp, "arc") ||strstr(temp, "sin") || strstr(temp, "cos") || strstr(temp, "tan") || strstr(temp, "csc") || strstr(temp, "sec") || strstr(temp, "cot") )
        {
        	Chartemp = (infotype ) malloc(2*sizeof(char));
            Chartemp = Info(P);
            pushChar(Chartemp, &top);
            P = Next(P);
		}
        else
        {
        	InsVLast(front, rear, temp);
        	P = Next(P);
        }
    }
    
    if(mutlak == 1)
    {
    	printf("Penulisan operasi mutlak tidak valid");
    	getche();
		main();
	}
    
    while(!isEmpty(top))
    {
    	tampungChar = (infotype ) malloc(2*sizeof(char));
    	tampungChar = pop(&top); 
    	if(*(tampungChar)!= '(')
    	{
    		InsVLast(front, rear, tampungChar);
		}
    	
    }
    
}
/*
*
*/

void treePostFix(addressTree *root, address rear)
{
	addressTree parent;
	addressTree Pcur;
	infotype data;
	int opr;
	
	opr =0;
	
	while(rear != Nil)
	{
		data = Info(rear);
		if(*root == Nil)
		{
			*root = AlokasiTree(data);
			parent = *root;
			Pcur = parent;
			if(!isNumber(Info(Pcur)) && Right(Pcur) == Nil)
			{
				parent = Pcur;
				if(*(Info(parent)) == '!' || *(Info(parent)) == '|' || *(Info(parent)) == 's'  ||  *(Info(parent)) == 'c' || *(Info(parent)) == 'a' || *(Info(parent)) == 't' || Info(parent)[1] == 'n' || *(Info(parent)) == 'e' )
				{
					opr =1;
				}
				else
				{
					opr = 0;
				}
			}
		}
		else
		{
			if(opr == 0)
			{
				if(Right(parent) == Nil)
				{
					Right(parent) = AlokasiTree(data);
					Pcur = Right(parent);
					Parent(Pcur) = parent;
				}
				else if(Left(parent) == Nil)
				{
					Left(parent) = AlokasiTree(data);
					Pcur = 	Left(parent);
					Parent(Pcur) = parent;
				}
				else
				{
					while(Left(parent) != Nil)
					{
						Pcur = parent;
						parent = Parent(Pcur);
					}
					
					Left(parent) = AlokasiTree(data);
					Pcur = 	Left(parent);
					Parent(Pcur) = parent;
				}
			}
			else if(opr == 1)
			{
				if(Right(parent) == Nil)
				{
					Right(parent) = AlokasiTree(data);
					Pcur = Right(parent);
					Parent(Pcur) = parent;
					Left(parent) = AlokasiTree("0");
					Parent(Left(parent)) = parent;
				}
				else
				{
					Pcur = parent;
					parent = Parent(Pcur);
					while(Left(parent) != Nil)
					{
						Pcur = parent;
						parent = Parent(Pcur);
					}
					
					Left(parent) = AlokasiTree(data);
					Pcur = 	Left(parent);
					Parent(Pcur) = parent;
				}
			}
			
			if(!isNumber(Info(Pcur)) && Right(Pcur) == Nil)
			{
				parent = Pcur;
				if(*(Info(parent)) == '!' || *(Info(parent)) == '|' || *(Info(parent)) == 's' || *(Info(parent)) == 'c' || *(Info(parent)) == 'a' || *(Info(parent)) == 't'  || Info(parent)[1] == 'n' || *(Info(parent)) == 'e' )
				{
					opr =1;
					
				}
				else
				{
					opr = 0;
				}
			}
			
		}
		rear = Prev(rear);
	}
	
}

void DeAlokasiTree (addressTree P)
{
	 if (P != Nil)
	 {
		free (P);
	 }
}

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


double hitungPostfix(addressTree *root)
{
    double a, b;
    char *token;
    double modulus, faktorial, penjumlahan, pengurangan, perkalian, pembagian, Akar, pangkat, mutlak;
	double sin, cos, tan, csc, sec, cot, sinh, cosh, tanh, csch, sech, coth, arcs,arct,arcc, arccsc, arcsec, arccot;
	double exp, log, ln;
    addressTree parent;
    addressTree Pcur;
	double result;
    
    parent = *root;
    while(!isNumber(Info(*root)))
    {
    	parent = *root;
    	if(!isNumber(Info(Right(parent))))
    	{
    		Pcur = Right(parent);
    		while(!isNumber(Info(Left(Pcur))) || !isNumber(Info(Right(Pcur))))
    		{
    			if(!isNumber(Info(Left(Pcur))))
    			{
    				Pcur = Left(Pcur);
				}
				else if(!isNumber(Info(Right(Pcur))))
				{
					Pcur = Right(Pcur);
				}
			}
			parent= Pcur;
		}
    	else if(!isNumber(Info(Left(parent))))
    	{
    		Pcur = Left(parent);
    		while(!isNumber(Info(Left(Pcur))) || !isNumber(Info(Right(Pcur))))
    		{
    			if(!isNumber(Info(Left(Pcur))))
    			{
    				Pcur = Left(Pcur);
				}
				else if(!isNumber(Info(Right(Pcur))))
				{
					Pcur = Right(Pcur);
				}
			}
			
			parent= Pcur;
		}
		
    	token = Info(parent);
        // pengecekan apakah angka, jika TRUE maka diubah menjadi float dan di PUSH ke subvar fdata dari subvar item struct Stack
        if(*token == '|')
        {
        	a = popRight(&parent);
        	mutlak = a;
        	if(a <0)
        	{
        		mutlak = -1*a;
			}
            push(mutlak, &parent);
		}
        // mengecek apakah operator, jika TRUE nilai 2 teratas akan di POP untuk dilakukan perhitungan
        // hasilnya akan di PUSH kembali ke stack
        else if(isOperator(*token))
        {
            a = popRight(&parent);
            b = popLeft(&parent);
            switch(*token)
            {
            case '+':
            	penjumlahan = Penjumlahan(b, a);
            	push(penjumlahan, &parent);
                break;
            case '-':
            	pengurangan = Pengurangan(b, a);
            	push(pengurangan, &parent);
                break;
            case '*':
            	perkalian = Perkalian(b, a);
            	push(perkalian, &parent);
                break;
            case '/':
            	if(a == 0)
            	{
            		printf("pembagian 0 tidak terdefinisi");
            		getche();
            		main();
				}
            	else
            	{
            		pembagian = Pembagian(b, a);
            	push(pembagian, &parent);
                break;
				}
            case '^':
            	pangkat = Pangkat(b, a);
            	push(pangkat, &parent);
                break;
            case '$':
            	Akar = akar(a, b);
            	push(Akar, &parent);
                break;
            case 'm':
            	modulus = Modulus(b,a);
            	push(modulus, &parent);
                break;
            case '!':
            	faktorial= hitungFaktorial(a);
        		push(faktorial, &parent);
                break;
            default:
                break;
            }
        }
        else
        {
        	a = popRight(&parent);
			b = popLeft(&parent);
			if(strstr(token, "log") )
			{
				log=HitungLogBebas(b, a);
				push(log, &parent);
			}
			else if (strstr(token, "exp") )
        	{
        		exp = eksponensial(a);
            	push(exp, &parent);
        	}
			else if (strstr(token, "ln") )
        	{
        		ln = logaritmanatural(a);
            	push(ln, &parent);
        	}
			else if (strstr(token, "arcsin") )
        	{
        		arcs = hitungarcsin(a);
            	push(arcs, &parent);
        	}
        	else if (strstr(token, "arccos") )
        	{
        		arcc = hitungarccos(a);
            	push(arcc, &parent);
        	}
        	else if (strstr(token, "arctan"))
        	{
        		arct = hitungarctan(a);
            	push(arct, &parent);
        	}
        	else if (strstr(token, "arccsc"))
        	{
        		arccsc = hitungarccsc(a);
            	push(arccsc, &parent);
        	}
        	else if (strstr(token, "arcsec"))
        	{
        		arcsec = hitungarcsec(a);
            	push(arcsec, &parent);
        	}
        	else if (strstr(token, "arccot") )
        	{
        		arccot = hitungarccot(a);
            	push(arccot, &parent);
        	}
        	else if (strstr(token, "sinh") )
        	{
        		sinh = hitungsinh(a);
            	push(sinh, &parent);
        	}
        	else if (strstr(token, "cosh"))
        	{
        		cosh = hitungcosh(a);
            	push(cosh, &parent);
        	}
        	else if (strstr(token, "tanh") )
        	{
        		tanh = hitungtanh(a);
            	push(tanh, &parent);
        	}
        	else if (strstr(token, "csch") )
        	{
        		csch = hitungcsch(a);
            	push(csch, &parent);
        	}
        	else if (strstr(token, "sech"))
        	{
        		sech = hitungsech(a);
            	push(sech, &parent);
        	}
        	else if (strstr(token, "coth") )
        	{
        		coth = hitungcoth(a);
            	push(coth, &parent);
        	}
			else if ( strstr(token, "sin"))
        	{
        		sin = TriSin(a);
            	push(sin, &parent);
        	}
        	else if (strstr(token, "cos") )
        	{
        		cos = TriCos(a);
            	push(cos, &parent);
        	}
        	else if (strstr(token, "tan") )
        	{
        		tan = TriTan(a);
            	push(tan, &parent);
        	}
        	else if (strstr(token, "csc"))
        	{
        		csc = TriCsc(a);
            	push(csc, &parent);
        	}
        	else if (strstr(token, "sec") )
        	{
        		sec = TriSec(a);
            	push(sec, &parent);
        	}
        	else if (strstr(token, "cot"))
        	{
        		cot = TriCot(a);
            	push(cot, &parent);
        	}
        	
        	
		}
    }
    
    result = atof(Info(*root));
    DeAlokasiTree (parent);
    *root = Nil;
    parent = Nil;
    Pcur = Nil;
    
    return result;
}

void CalStd()
{
	int pilih;
	char ulang;
	
	//BarMenu();
	do{	
		system("cls");
		header();
		MenuCalStd();
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
				turunan();
				break;
			case 7:
				CalProg();
				break;
			case 8:
				konvertDaya();
				break;
			case 9:
				konvertLuas();
				break;
			case 10:
				konvertSuhu();
				break;
			case 11:
				konvertPanjang();
				break;
			case 12:
				konvertBerat();
				break;
			case 13:
				konvertWaktu();
				break;
			case 14:
				konvertvolume();
				break;
		}
		
		printf("\n\n\t\t\t\t\t\t\t\t\tMasukkan inputan lagi? (Y/N) ");
        ulang = getche();
        system("CLS");
        header();
	}while(ulang == 'y' || ulang == 'Y');
	BacktoMain();
	
}

void MenuCalStd()
{
 	printf("\n\n\t\t\t\t\t\t\t\t<===============================================>\n");
	printf("\t\t\t\t\t\t\t\t|        MENU \tKALKULATOR \tSCIENTIFIC     |\n");
 	printf("\t\t\t\t\t\t\t\t<===============================================>\n");
 	printf("\t\t\t\t\t\t\t\t| 1.  Integral					|\n");
 	printf("\t\t\t\t\t\t\t\t| 2.  Matriks					|\n");
 	printf("\t\t\t\t\t\t\t\t| 3.  Statistika				|\n");
 	printf("\t\t\t\t\t\t\t\t| 4.  Deret Geometri				|\n");
 	printf("\t\t\t\t\t\t\t\t| 5.  Deret Aritmatika				|\n");
 	printf("\t\t\t\t\t\t\t\t| 6. Turunan					|\n");
 	printf("\t\t\t\t\t\t\t\t| 7. Konvert Sistem Bilangan			|\n");
 	printf("\t\t\t\t\t\t\t\t| 8. Konvert Daya				|\n");
 	printf("\t\t\t\t\t\t\t\t| 9. Konvert Luas				|\n");
 	printf("\t\t\t\t\t\t\t\t| 10. Konvert Suhu				|\n");
 	printf("\t\t\t\t\t\t\t\t| 11. Konvert Panjang				|\n");
 	printf("\t\t\t\t\t\t\t\t| 12. Konvert Berat				|\n");
 	printf("\t\t\t\t\t\t\t\t| 13. Konvert Waktu				|\n");
 	printf("\t\t\t\t\t\t\t\t| 14. Konvert Volume				|\n");
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
	printf("derajat : %g\n", derajat);
}

double RadianTrigono(char *input)
{
	double value;
	
	if(strstr(input,"sin"))
	{
		if(strstr(input,"-"))
		{
			sscanf(input,"sin-%lf",&value);
			value = -1*value;
		}
		else
		{
			sscanf(input,"sin%lf",&value);
		}
		return TriSin(value);
	}
	else if(strstr(input,"cos"))
	{
		if(strstr(input,"-"))
		{
			sscanf(input,"cos-%lf",&value);
			value = -1*value;
		}
		else
		{
			sscanf(input,"cos%lf",&value);
		}
		return TriCos(value);
	}
	else if(strstr(input,"tan"))
	{
		if(strstr(input,"-"))
		{
			sscanf(input,"tan-%lf",&value);
			value = -1*value;
		}
		else
		{
			sscanf(input,"tan%lf",&value);
		}
		return TriTan(value);
	}
	else if(strstr(input,"cot"))
	{
		if(strstr(input,"-"))
		{
			sscanf(input,"cot-%lf",&value);
			value = -1*value;
		}
		else
		{
			sscanf(input,"cot%lf",&value);
		}
		return TriCot(value);
	}
	else if(strstr(input,"sec"))
	{
		if(strstr(input,"-"))
		{
			sscanf(input,"sec-%lf",&value);
			value = -1*value;
		}
		else
		{
			sscanf(input,"sec%lf",&value);
		}
		return TriSec(value);
	}
	else if(strstr(input,"csc"))
	{
		if(strstr(input,"-"))
		{
			sscanf(input,"csc-%lf",&value);
			value = -1*value;
		}
		else
		{
			sscanf(input,"csc%lf",&value);
		}
		return TriCsc(value);
	}
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
	printf("\n\t\t\t\t\t\t\tMasukkan berat dan satuan yang akan di konvert [exp : 23 Kg] : ");
	scanf(" %[^\n]", input);
	printf("\n\t\t\t\t\t\t\tMasukkan satuan tujuan [exp : G] : ");
	scanf(" %[^\n]", konvert); // sama kaya &*input
	sscanf(input,"%d ",&berat);
	levelAsal = deteksiLevel(input);
	levelTujuan = deteksiLevel(konvert);
	hasil = HitungConvertBerat(levelAsal, levelTujuan, berat);
	if((levelAsal - levelTujuan) > 4)
	{
		printf("\n\t\t\t\t\t\t\thasil konvert : %f %s", *hasil, konvert);
	}
	else
	{
		printf("\n\t\t\t\t\t\t\thasil konvert : %g %s", *hasil, konvert);
	}
}

void menuConvertBerat()
{
	system("cls");
	printf("\n\t\t\t\t\t\t\t|==========================================================================================|");
	printf("\n\t\t\t\t\t\t\t|                                     SATUAN BERAT                                         |");
	printf("\n\t\t\t\t\t\t\t<==========================================================================================>");
	printf("\n\t\t\t\t\t\t\t|                                                                                          |");
 	printf("\n\t\t\t\t\t\t\t| 1. Kg						 5.Dg									   |");
	printf("\n\t\t\t\t\t\t\t| 2. Hg						 6.Cg									   |");
	printf("\n\t\t\t\t\t\t\t| 3. Dag					 7.Mg									   |");
	printf("\n\t\t\t\t\t\t\t| 4. G																			   	   	   |");
 	printf("\n\t\t\t\t\t\t\t<==========================================================================================>");
	printf("\n\t\t\t\t\t\t\t|                                                                                          |");
	printf("\n\t\t\t\t\t\t\t|==========================================================================================|");
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
	printf("1. Kalkulator Scientific");
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
	printf("|    '$' dan '^' untuk operasi akar  dan pangkat                                           |\n");
	printf("|    '*' dan '/' untuk operasi perkalian dan pembagian                                     |\n");
	printf("|    '+' dan '-' untuk operasi penjumlahan dan pengurangan                                 |\n");
	printf("|    '!' untuk operasi faktorial						                                   |\n");
	printf("|    '%' untuk operasi modulus							                                   |\n");
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

