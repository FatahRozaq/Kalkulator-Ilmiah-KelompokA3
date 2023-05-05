
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
	int isChar, isHelp,notValid;
	
	address front,rear;
	addressTree root;
	
	root = Nil;
	
	
	Fullmode();
	
    do
    {	
    	char *infixExpr;
    	infixExpr=malloc(266*sizeof(char));
        char*x;
        
        system("cls");
		header();
    	Calculator();
    	front = Nil;
		rear = Nil;
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
			notValid = validasiFormat(x);
			if (notValid == 1)
	  		{
	  			printf("\n\n\t\t\t\t\t\t\t\t\tEkspresi tidak valid\n");
			}
			else
			{
				infixToPostfix(x, &front, &rear);
		  		isChar = validasiChar(front);
		  		if (isChar == 1)
		  		{
		  			printf("\n\n\t\t\t\t\t\t\t\t\tEkspresi tidak valid\n");
				}
				else if(isChar == 0)
				{
					treePostFix(&root, rear);
					printf("\n\n\t\t\t\t\t\t\t\t\tPosfix 		 : ");
					PrintInfoASC (front);
					printf("\n");
					hasil = hitungPostfix(&root);
		        	printf("\n\n\t\t\t\t\t\t\t\t\tHasil perhitungan : %g\n\n", hasil);	
				}
			}
			printf("\t 														 \n");
			printf("\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		    
		}
		
		printf("\n\n\t\t\t\t\t\t\t\t\tMasukkan inputan lagi? (Y/N) ");
        pilih = getche();
        DelAll (&front,&rear);
    	
	}while(pilih == 'y' || pilih == 'Y');
	/*header();
	BarmenuUtama();
	
	
//	printf("\n\n\t\t\t\t\t\t\t======================= SCIENTIFIC CALCULATOR =========================");
	printf("\n \n");
	printf("\t\t\t\t\t\t\t\t [1]. Kalkulator Scientific    \n\n");
	printf("\t\t\t\t\t\t\t\t [2]. Extra Fitur \n\n");
	printf("\t\t\t\t\t\t\t\t [3]. Tata Cara Penggunaan  \n\n");
	printf("\t\t\t\t\t\t\t\t [4]. Credit   		   \n\n");	
	printf("\t\t\t\t\t\t\t\t [0]. Keluar                \n");
	printf("\n\n\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	
	PilihMenu(&pilih);
	getchar();
	switch (pilih)
	{
		case 1:
			CalStfc();
			break;
		
		case 2:
			CalStd();
			break;
			
		case 3:
			TataCara();
			break;
			
		case 4:
			Credit();
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Inputan tidak valid");
	}
	*/
	
	return 0;
}
