
#include "Nisrina.h"
#include "Aurora.h"
#include "fatah.h"
#include "jojo.h"
#include "gavrila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	
	char pilih;
	double hasil;
	int isChar, isHelp,isValid;
	
	address front,rear;
	address frontIn,rearIn;
	addressTree root;
	
	root = Nil;
	
	
	Fullmode();
	
    do
    {	
    	infotype infixExpr;
    	infixExpr=malloc(266*sizeof(char));
        infotype x;
        
        system("cls");
		header();
    	Calculator();
    	front = Nil;
		rear = Nil;
		frontIn = Nil;
		rearIn = Nil;
		printf("\n\n\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		printf("\t 														 \n");
		printf("\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	    printf("\n\n\t\t\t\t\t\t\t\t\tMasukkan inputan : ");
		scanf(" %[^\n]", infixExpr);	
        gantiNewLineJadiSpasi(infixExpr);
        x=hapusSpasi(infixExpr);
        header();
        Calculator();
        lowerCase(x);
        isHelp = cekHelp(x);
        if(isHelp == 1){
        	help();
		}else{
			printf("\n\n\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
			//printf("\n\t=============================================================== \n");
			printf("\n\n\t\t\t\t\t\t\t\t\tInputan 	: %s\n",infixExpr );
			infixLinkedList(x, &frontIn, &rearIn);	
			//PrintInfoData (frontIn);
			//getche();
			isValid = validasiFormat(frontIn);
			if (isValid == 1)
	  		{
	  			printf("\n\n\t\t\t\t\t\t\t\t\tEkspresi tidak valid\n");
			}
			else
			{
					infixToPostfix(frontIn, &front, &rear);
		  			treePostFix(&root, rear);
					printf("\n\n\t\t\t\t\t\t\t\t\tPosfix 		 : ");
					PrintInfoData (front);
					printf("\n");
					hasil = hitungPostfix(&root);
		        	printf("\n\n\t\t\t\t\t\t\t\t\tHasil perhitungan : %g\n\n", hasil);
			}
			printf("\t 														 \n");
			printf("\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		    
		}
		
		printf("\n\n\t\t\t\t\t\t\t\t\tMasukkan inputan lagi? (Y/N) ");
        pilih = getche();
        DelAll (&frontIn,&rearIn);
        DelAll (&front,&rear);
    	
	}while(pilih == 'y' || pilih == 'Y');
	
	return 0;
}
