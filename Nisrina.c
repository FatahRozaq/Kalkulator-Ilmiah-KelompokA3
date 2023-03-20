#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Nisrina.h"
#include "Aurora.h"
#include "fatah.h"
#include "jojo.h"
#include "gavrila.h"
#define eksponen 2.718281828
#define phi 3.14

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

int validasiChar(char postfix[256])
{
	int length;
	int i=0;
	int asci;
	int hasil = 0;
	
	length = strlen(postfix);
	while(i < length)
	{
		asci = (int)postfix[i];
		if((asci >=97 && asci <=122) || (asci >=65 && asci <=90) || postfix[i] =='(' )
		{
			hasil = 1;
			break;
		}
		i++;
	}
	return hasil;
	
}
void CalStfc()
{
	char *infixExpr;
    infixExpr=malloc(266*sizeof(char));
	char pilih;
	double hasil;
	int isChar;
	
	header();
	
	
    do
    {	
    	
    	char postfixExpr[256] = "";
        char*x;
    	Calculator();
		printf("\n\n\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		//printf("\n\t=============================================================== \n");	
  		//printf("\n\n\t\t\t\t\t\t\t\t\tPosfix : %s\n ",infixToPostfix(x, postfixExpr));
  	    //hasil = hitungPostfix(postfixExpr);
        //printf("\n\n\t\t\t\t\t\t\t\t\tHasil perhitungan: %g\n\n", hasil);	
		printf("\t 														 \n");
		printf("\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	    printf("\n\n\t\t\t\t\t\t\t\t\tMasukkan inputan : ");
		scanf(" %[^\n]", infixExpr);	
        gantiNewLineJadiSpasi(infixExpr);
        x=hapusSpasi(infixExpr);
        header();
        Calculator();
        lowerCase(x);
    	printf("\n\n\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		//printf("\n\t=============================================================== \n");	
		infixToPostfix(x, postfixExpr);
  		isChar = validasiChar(postfixExpr);
  		if (isChar == 1)
  		{
  			printf("\n\n\t\t\t\t\t\t\t\t\tTidak valid ada char\n");
		}
		else if(isChar == 0)
		{
			printf("\n\n\t\t\t\t\t\t\t\t\tPosfix 		 : %s\n ",postfixExpr);
			hasil = hitungPostfix(postfixExpr);
        	printf("\n\n\t\t\t\t\t\t\t\t\tHasil perhitungan : %g\n\n", hasil);	
		}
		printf("\t 														 \n");
		printf("\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	   
        printf("\n\n\t\t\t\t\t\t\t\t\tMasukkan inputan lagi? (Y/N) ");
        pilih = getche();
        system("CLS");
        header();
        
	}while(pilih == 'y' || pilih == 'Y');
	BacktoMain();
}

double DerajatTrigono(char *input)
{
	double value;
	
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
				printf("\nContoh penulisan eksponensial yang benar adalah sin(100)\n");
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
				printf("\nContoh penulisan eksponensial yang benar adalah cos(100)\n");
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

	double sign=1, res=0, term;
	int k =1;
	
	if (value<0){
	
		sign=-1.0;
		
		value=-value;
	
	}
	
	if (value > 360) {
   		value -= (int)(value / 360) * 360;
	}
	
	value*=3.14/180.0;
	
	term=value;
	
	while (res+term!=res){
	
		res+=term;
		
		k+=2;
		
		term*=-value*value/k/(k-1);
	
	}
	
	res = sign*res;
	
	return res;

}

double Cos(double value){

	double res=0, term=1;
	int k=0;
	
	if (value<0) value=-value;
	
	if (value > 360) {
   		value -= (int)(value / 360) * 360;
	}
	
	value*=3.14/180.0;
	
	while (res+term!=res){
	
	res+=term;
	
	k+=2;
	
	term*=-value*value/k/(k-1);
	
	}
	
	return res;

}

double Tan(double value) {
    double res = Sin(value) / Cos(value);
    
    return res;
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
double TriCot(double value)
{
	double cos, sin;
	
	cos = TriCos(value);
	sin = TriSin(value);
	
	return (cos/sin);
}
double TriSec(double value)
{
	double cos;
	
	cos = TriCos(value);
	
	return (1/cos);
}
double TriCsc(double value)
{
	double sin;
	
	sin = TriSin(value);
	
	return (1/sin);
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
void push(Stack *s, double val)
{
    s->item[++s->top].bData = val;
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
int priority(char c)
{
    if (c=='+' || c=='-') return 1;
    else if (c=='*' || c=='/' || c =='%' ) return 2;
    else if (c=='^' || c=='$' ) return 3;
    else if (c== '!' ) return 4;
    return 0;
}
/*
*
*/
int isOperator(char c)
{
    if( c=='(' || c=='+' || c=='-' || c=='/' || c=='*' || c=='^' || c=='$' || c=='%' || c=='!' ) return 1;
    else return 0;
}
/*
*
*/
int negatifInteger(char *infix,char c,int ptr)
{
    if (ptr == 0 && c == '-' ) return 1;
    else  if((infix[ptr-1] == '!' && c == '-' ) )return 0;
    else  if((infix[ptr-1] == '|' && c == '-' ) )return 1;
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
    double trigono, lon, log, eksponensial;
    double value, basis;
    int mutlak;
    
    mutlak =0;
    

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
            else if(priority(infix[ptr]) > priority(top(s).cData) || isEmpty(s))
            {
                pushChar(s,infix[ptr]);
                ptr++;
            }
            else if(priority(infix[ptr])==priority(top(s).cData))
            {
                char tempchar=pop(s).cData;
                strncat(postfix,&tempchar,1);
                pushChar(s,infix[ptr]);
                ptr++;
                strcat(postfix,oneSpace);
            }
            else if(priority(infix[ptr]) <priority(top(s).cData) && top(s).cData != '(' && top(s).cData != ')')
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
        else if(infix[ptr]=='|' && mutlak == 0)
        {
        	pushChar(s,infix[ptr]);
            ptr++;
        	mutlak=1;
        }
        else if(infix[ptr]=='|' && mutlak == 1)
        {
        	char tempChar2;
            while(top(s).cData!='|')
            {
                
                tempChar2 = pop(s).cData;
                strncat(postfix, &tempChar2, 1);
                strcat(postfix, oneSpace);
            }
            tempChar2 = pop(s).cData;
            strncat(postfix, &tempChar2, 1);
        	strcat(postfix, oneSpace);
            mutlak--;
            ptr++;
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
        	char temp3[256] = "";
		    char temp4[256] = "";
		    char *temp5;
		    char temp2[256] = "";
		    char tempChar3 = '-';
		    int i,b;
		    int panjang;
            if(negatifInteger(infix,infix[ptr],ptr))
            {
                strncat(temp2, &tempChar3, 1);
                strcpy(tempInfix, infix);
                temp = strtok(tempInfix + ptr, "+*/^%$!|");
                
                if(isdigit(temp[1]))
				{
						temp = strtok(temp, "+()-*/^%$!|");
		            	ptr+=strlen(temp) +1;
		            	strcat(temp2, temp);
		                strcat(postfix, temp2);
		                strcat(postfix, oneSpace);
				}
				else if(strstr(temp,"log"))
				{
					temp = strtok(tempInfix + ptr, "+-*/^%$!|");
					if (sscanf(temp,"log%lf(%lf)",&basis,&value) != 2) 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan logaritma yang benar adalah 10log(100)\n");
						exit(0);
					}
					else
					{
						i=0;
						while(!strstr(temp4,")"))
						{
							strncat(temp4,&temp[i],1);
							i++;
						}
						ptr += strlen(temp4) +1;
						log = HitungLogBebas(basis, value);
						sprintf(temp,"%lf",log);
						strcat(temp2, temp);
		                strcat(postfix, temp2);
		                strcat(postfix, oneSpace);	
					}
				}
                else if(strstr(temp,"sin") || strstr(temp,"cos") || strstr(temp,"tan")|| strstr(temp,"sec") ||strstr(temp,"cot") || strstr(temp,"csc"))
				{
					i=1;
					while(!isdigit(temp[i]))
					{
						strncat(temp3,&temp[i],1);
						i++;
					}
					
					temp5 = strtok(temp + strlen(temp3) +1, "+(-*/^%$!|");
					strcat(temp3,temp5);
					if(strstr(temp3,"(") && strstr(temp3,")") )
					{
							i=0;
							while(!strstr(temp4,")"))
							{
								strncat(temp4,&temp3[i],1);
								i++;
							}
							ptr += strlen(temp4) +1;
					}
					else if(strstr(temp3,"("))
					{
							printf("\nInput tidak sesuai dengan format yang diharapkan, anda kurang menuliskan ')' !\n");
							exit(0);
					}
					else
					{
						strcpy(temp4, temp3);
					}
					trigono = DerajatTrigono(temp4);
					if(trigono < 0)
					{
						trigono = -1 * trigono;
						sprintf(temp,"%lf",trigono);
						strcat(postfix, temp);
	                	strcat(postfix, oneSpace);
					}
					else
					{
						sprintf(temp,"%lf",trigono);
						strcat(temp2, temp);
						strcat(postfix, temp2);
		                strcat(postfix, oneSpace);
					}
				}
				else if(strstr(temp,"exp"))
				{
					i=1;
					while(!isdigit(temp[i]))
					{
						strncat(temp3,&temp[i],1);
						i++;
					}
					temp5 = strtok(temp + strlen(temp3) +1, "+(-*/^%$!|");
					strcat(temp3,temp5);
					if(strstr(temp3,"("))
					{
						i=0;
						while(!strstr(temp4,")"))
						{
							strncat(temp4,&temp3[i],1);
							i++;
						}
						ptr += strlen(temp4) +1;
					}
					else
					{
						strcpy(temp4, temp3);
					}
					eksponensial = Eksponensial(temp4);
					if(eksponensial < 0)
					{
						eksponensial = -1 * eksponensial;
						sprintf(temp,"%lf",eksponensial);
						strcat(postfix, temp);
	                	strcat(postfix, oneSpace);
					}
					else
					{
						sprintf(temp,"%lf",eksponensial);
						strcat(temp2, temp);
						strcat(postfix, temp2);
		                strcat(postfix, oneSpace);
					}
				}
				else
				{
					temp = strtok(tempInfix + ptr, " +*/^%$!|");
					if(strstr(temp,"e"))
		            {
		            	temp = strtok(temp, "+()-*/^%$!|");
		            	ptr += strlen(temp) + 1;
		            	sprintf(temp,"%lf",eksponen);
					}
					else if(strstr(temp,"phi"))
		            {
		            	temp = strtok(temp, "+()-*/^%$!|");
		            	ptr += strlen(temp) + 1;
		                sprintf(temp,"%lf",phi);
					}
					else if(strstr(temp,"ln"))
		            {
		            	if (sscanf(temp,"-ln(%lf)",&value) != 1) 
						{
						    printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						    printf("\nContoh penulisan logaritma natural yang benar adalah ln(100)\n");
						    exit(0);
						}
						else
						{
							i=1;
							while(!strstr(temp4,")"))
							{
								strncat(temp4,&temp[i],1);
								i++;
							}
							printf("test %s",temp4);
							ptr += strlen(temp4) +1;
							lon = logaritmanatural(value);
							sprintf(temp,"%lf",lon);
						}
					}
					else
					{
						ptr+=strlen(temp);
					}
	                strcat(temp2, temp);
	                strcat(postfix, temp2);
	                strcat(postfix, oneSpace);
				}
                
            }
            else
            {
	            strcpy(tempInfix, infix);
                temp = strtok(tempInfix + ptr, " +*/^%$!|");
                
                if(isdigit(temp[0]))
                {
					temp = strtok(temp, "+()-*/^%$!|");
		        	ptr+=strlen(temp);
		        	strcat(postfix, temp);
	            	strcat(postfix, oneSpace);
				}
				else if(strstr(temp,"log"))
				{
					temp = strtok(tempInfix + ptr, "+-*/^%$!|");
					if (sscanf(temp,"log%lf(%lf)",&basis,&value) != 2) 
					{
						printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						printf("\nContoh penulisan logaritma yang benar adalah 10log(100)\n");
						exit(0);
					}
					else
					{
						i=0;
						while(!strstr(temp4,")"))
						{
							strncat(temp4,&temp[i],1);
							i++;
						}
						ptr += strlen(temp4);
						log = HitungLogBebas(basis, value);
						sprintf(temp,"%lf",log);
						strcat(postfix, temp);
	            		strcat(postfix, oneSpace);	
					}
				}
				else if(strstr(temp,"sin") || strstr(temp,"cos") || strstr(temp,"tan")|| strstr(temp,"sec") ||strstr(temp,"cot") || strstr(temp,"csc"))
				{
					i=0;
					while(!isdigit(temp[i]))
					{
						strncat(temp3,&temp[i],1);
						i++;
					}
					temp5 = strtok(temp + strlen(temp3), "+(-*/^%$!|");
					strcat(temp3,temp5);
					if(strstr(temp3,"(") && strstr(temp3,")"))
					{
						i=0;
						while(!strstr(temp4,")"))
						{
							strncat(temp4,&temp3[i],1);
							i++;
						}
						ptr += strlen(temp4);
					}
					else if(strstr(temp3,"("))
					{
							printf("\nInput tidak sesuai dengan format yang diharapkan, anda kurang menuliskan ')' !\n");
							exit(0);
					}
					else
					{
						strcpy(temp4, temp3);
					}
					trigono = DerajatTrigono(temp4);
					sprintf(temp,"%lf",trigono);
					strcat(postfix, temp);
	                strcat(postfix, oneSpace);
				}
				else if(strstr(temp,"exp"))
				{
					i=0;
					while(!isdigit(temp[i]))
					{
						strncat(temp3,&temp[i],1);
						i++;
					}
					temp5 = strtok(temp + strlen(temp3), "+(-*/^%$!|");
					strcat(temp3,temp5);
					if(strstr(temp3,"("))
					{
						i=0;
						while(!strstr(temp4,")"))
						{
							strncat(temp4,&temp3[i],1);
							i++;
						}
						ptr += strlen(temp4);
					}
					else
					{
						strcpy(temp4, temp3);
					}
					eksponensial = Eksponensial(temp4);
					sprintf(temp,"%lf",eksponensial);
					strcat(postfix, temp);
	                strcat(postfix, oneSpace);
				}
	            else
				{
	            	temp = strtok(tempInfix + ptr, "+-*/^%$!|");
					if(strstr(temp,"e"))
		            {
		            	temp = strtok(temp, "+()-*/^%$!|");
		            	ptr+=strlen(temp);
		            	sprintf(temp,"%lf",eksponen);
					}
					else if(strstr(temp,"phi"))
		            {
		            	temp = strtok(temp, "+()-*/^%$!|");
		            	ptr+=strlen(temp);
		                sprintf(temp,"%lf",phi);
					}
					else if(strstr(temp,"ln"))
		            {
		            	printf("masuk");
		            	printf("test %s", temp);
		            	if (sscanf(temp,"ln(%lf)",&value) != 1) 
						{
						    printf("\nInput tidak sesuai dengan format yang diharapkan,!\n");
						    printf("\nContoh penulisan logaritma natural yang benar adalah ln(100)\n");
						    exit(0);
						}
						else
						{
							i=0;
							while(!strstr(temp4,")")) 
							{
								strncat(temp4,&temp[i],1);
								i++;
							}
							ptr+=strlen(temp4);
							lon = logaritmanatural(value);
							sprintf(temp,"%lf",lon);
						}
					}
					else
					{
						ptr+=strlen(temp);
					}
	                strcat(postfix, temp);
	            	strcat(postfix, oneSpace);
				}
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
double hitungPostfix(char postFix[])
{
    double a, b;
    Stack *stack = inisialisasi();
    char *token = strtok(postFix," ");
    double modulus, faktorial, penjumlahan, pengurangan, perkalian, pembagian, Akar, pangkat, mutlak;

    while(token != NULL)
    {
        // pengecekan apakah angka, jika TRUE maka diubah menjadi float dan di PUSH ke subvar fdata dari subvar item struct Stack
        if(isNumber(token))
        {
            push(stack, strtod(token,NULL));
        }
        
        else if(isOperator(*token) && *token == '!')
        {
        	a = pop(stack).bData;
        	faktorial= hitungFaktorial(a);
            push(stack, faktorial );
		}
		else if(*token == '|')
        {
        	a = pop(stack).bData;
        	mutlak = a;
        	if(a <0)
        	{
        		mutlak = -1*a;
			}
            push(stack, mutlak );
		}
        // mengecek apakah operator, jika TRUE nilai 2 teratas akan di POP untuk dilakukan perhitungan
        // hasilnya akan di PUSH kembali ke stack
        else if(isOperator(*token))
        {
            a = pop(stack).bData;
            b = pop(stack).bData;
            switch(*token)
            {
            case '+':
            	penjumlahan = Penjumlahan(b, a);
                push(stack, penjumlahan );
                break;
            case '-':
            	pengurangan = Pengurangan(b, a);
                push(stack, pengurangan );
                break;
            case '*':
            	perkalian = Perkalian(b, a);
                push(stack, perkalian );
                break;
            case '/':
            	pembagian = Pembagian(b, a);
                push(stack, pembagian );
                break;
            case '^':
            	pangkat = Pangkat(b, a);
                push(stack, pangkat );
                break;
            case '$':
            	Akar = akar(a, b);
                push(stack, Akar );
                break;
            case '%':
            	modulus = Modulus(b,a);
                push(stack, modulus );
                break;
            default:
                break;
            }
        }
        token = strtok(NULL, " "); // proses pemisahan
    }
    return pop(stack).bData;
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

