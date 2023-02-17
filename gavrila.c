#include <stdio.h>
#include "gavrila.h"
#include "Nisrina.h"

//operasi pengurangan
float Pengurangan(){
	float pengurangan, bil1, bil2;
	InputBilFloat(&bil1,&bil2);
	
	pengurangan = (bil1-bil2);
	return pengurangan;
}

//operasi logaritma natural
int logaritmanatural(){
	double x, result;
	
	printf("Masukkan sebuah bilangan: ");
	scanf("%lf", &x);
	result = log(x);
	
	printf("Logaritma natural dari %lf = %lf", x, result);
	return 0;
}

//operasi faktorial
int faktorial(){
	int angka, hasil, i;
	printf("Input angka: ");
	scanf("%d", &angka);
	
	hasil = 1;
	for(i = 1; i<=angka; i++){
		hasil = hasil * i;
	}
	printf("faktorial dari %d adalah %d", angka, hasil);
	return 0;
}

//operasi turunan
int turunan(){
	int pilih;
	
	printf("Masukan banyak variabel X = ");
	scanf("%d", &pilih);
	
	int n[pilih], pangkat[pilih];
	
	printf("Y = ");
	for(int b=0; b<pilih; b++){
		printf("n.X^p ");
		if((pilih-b)!=1)
		{
		printf("+ ");}
	}
	
	for(int b=0; b<pilih; b++){
		printf("\nMasukan nilai n ke-%d =",b+1);
		scanf("%d",&n[b]);
		printf("Masukan nilai p ke-%d =",b+1);
		scanf("%d",&pangkat[b]);		
	}
	
	printf("nY  = ");
	for(int b=0; b<pilih; b++){
		printf ("%d x^ %d", n[b], pangkat[b]);
		if((pilih-b)!=1)
		{
		printf("+ ");}
	}
	
	for(int b=0; b<pilih; b++){
		n[b] = n[b] * pangkat[b];
		pangkat[b] = pangkat[b] - 1;
	}
	
	printf("\nnY' = ");
	for(int b=0; b<pilih; b++){
		printf("%d X^ %d", n[b], pangkat[b]);
		if((pilih-b)!=1)
		{
		printf("+ ");}
	}

    return 0;
}

//operasi convert daya
float convertdaya(){
   int satuan1, satuan2;
   double daya;
   double hasilconvert;
   
   printf("1. Watt (W)");
   printf("\n2. Kilowatt (kW)");
   printf("\n3. kilokalori/detik (kcal/s)");
   printf("\n4. Newton-meter/detik (N.m/s)");
   printf("\n5. Joule/detik (J/s)");
   printf("\n6. Kilogram-meter/detik (kg.m/s)");
   printf("\n\tPilih satuan awal daya= ");
   scanf("%d", &satuan1);
   while (satuan1 < 0 || satuan1 > 6) {
       printf("\nPilihan invalid, ketik ulang: ");
       scanf("%d", &satuan1);
   }
   
   printf("\n1. Watt (W)");
   printf("\n2. Kilowatt (kW)");
   printf("\n3. kilokalori/detik (kcal/s)");
   printf("\n4. Newton-meter/detik (N.m/s)");
   printf("\n5. Joule/detik (J/s)");
   printf("\n6. Kilogram-meter/detik (kg.m/s)");
   printf("\n\tPilih satuan akhir daya= ");
   scanf("%d", &satuan2);
   while (satuan2 < 0 || satuan2 > 6) {
       printf("\nPilihan invalid, ketik ulang: ");
       scanf("%d", &satuan2);
   }
   	
   printf("\nMasukkan daya dalam satuan %d: ", satuan1);
   scanf("%lf", &daya);
 
	switch (satuan1) {
        case 1:
        	switch (satuan2){
        		case 1: 
        			hasilconvert=daya;
        			break;
        		case 2:
        			hasilconvert=(daya*0.001);
        			break;
        		case 3:
        			hasilconvert=(daya*0.000239);
        			break;
        		case 4:
        			hasilconvert=daya;
        			break;
        		case 5:
        			hasilconvert=daya;
        			break;
        		case 6:
        			hasilconvert=daya;
        			break;
			}
			break;
        case 2:
        	switch (satuan2){
        		case 1:
        			hasilconvert=(daya*1000);
        			break;
        		case 2: 
        			hasilconvert=daya;
        			break;
        		case 3:
        			hasilconvert=(daya*0.239);
        			break;
        		case 4:
        			hasilconvert=(daya*1000);
        			break;
        		case 5:
        			hasilconvert=(daya*1000);
        			break;
        		case 6:
        			hasilconvert=(daya*101.9716213);
        			break;
        		}
        		break;
        case 3:
        	switch (satuan2){
        		case 1:
        			hasilconvert=(daya*4184.100418410041841);
        			break;
        		case 2:
        			hasilconvert=(daya*4.184100418410041841);
        			break;
        		case 3:
        			hasilconvert=daya;
        			break;
        		case 4:
        			hasilconvert=(daya*4184.100418410041841);
        			break;
        		case 5:
        			hasilconvert=(daya*4184.100418410041841);
        			break;
        		case 6:
        			hasilconvert=(daya*426.6595033472803347276068133);
        		}
        		break;
        case 4:
        	switch(satuan2){
        		case 1:
        			hasilconvert=daya;
        			break;
        		case 2:
        			hasilconvert=(daya*0.001);
        			break;
        		case 3:
        			hasilconvert=(daya*0.000239);
        			break;
        		case 4:
        			hasilconvert=daya;
        			break;
        		case 5:
        			hasilconvert=daya;
        			break;
        		case 6:
        			hasilconvert=(daya*0.1019716213);
        			break;
        		}
        		break;
        case 5:
        	switch (satuan2){
        		case 1:
        			hasilconvert=daya;
        			break;
        		case 2:
        			hasilconvert=(daya*0.001);
        			break;
        		case 3:
        			hasilconvert=(daya*0.000239);
        			break;
        		case 4:
        			hasilconvert=daya;
        			break;
        		case 5:
        			hasilconvert=daya;
        			break;
        		case 6:
        			hasilconvert=(daya*0.1019716213);
        			break;
        		}
        		break;
        case 6:
        	switch (satuan2){
        		case 1:
        			hasilconvert=(daya*9.806649999787735);
        			break;
        		case 2:
        			hasilconvert=(daya*0.009806649999787735);
        			break;
        		case 3:
        			hasilconvert=(daya*0.002343789349949268665);
        			break;
        		case 4:
        			hasilconvert=(daya*9.806649999787735);
        			break;
        		case 5:
        			hasilconvert=(daya*9.806649999787735);
        			break;
        		case 6:
        			hasilconvert=daya;
        			break;
        		}
        		break;
        	}
        printf("Hasil convert adalah %f", hasilconvert);
        return 0;
    }
    
