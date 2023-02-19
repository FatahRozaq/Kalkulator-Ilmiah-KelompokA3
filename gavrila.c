#include <stdio.h>
#include "gavrila.h"
#include "Nisrina.h"

//operasi pengurangan
float Pengurangan(float bil1, float bil2){
	float hasil;
	
	hasil = (bil1-bil2);
	return hasil;
}

//operasi logaritma natural

void LogNatural()
{
	double x, result;
	
	printf("Masukkan sebuah bilangan: ");
	scanf("%lf", &x);
	result = logaritmanatural(x);
	printf("Logaritma natural dari %lf = %lf", x, result);
}

double logaritmanatural(double x){
	
	return log(x);
}

//operasi faktorial

void Faktorial()
{
	int angka, hasil, i;
	
	printf("Input angka: ");
	scanf("%d", &angka);
	hasil = hitungFaktorial(angka);
	printf("faktorial dari %d adalah %d", angka, hasil);
}

int hitungFaktorial(int angka){
	
	int hasil;
	int i;
	
	hasil = 1;
	for(i = 1; i<=angka; i++){
		hasil = hasil * i;
	}
	
	return hasil;
}

//operasi turunan

int turunan(){
	int pilih;
	int b;
	
	printf("Masukan banyak variabel X = ");
	scanf("%d", &pilih);
	
	int n[pilih], pangkat[pilih];
	
	printf("Y = ");
	for(b=0; b<pilih; b++){
		printf("n.X^p ");
		if((pilih-b)!=1)
		{
		printf("+ ");}
	}
	
	for(b=0; b<pilih; b++){
		printf("\nMasukan nilai n ke-%d =",b+1);
		scanf("%d",&n[b]);
		printf("Masukan nilai p ke-%d =",b+1);
		scanf("%d",&pangkat[b]);		
	}
	
	printf("nY  = ");
	for(b=0; b<pilih; b++){
		printf ("%d x^ %d", n[b], pangkat[b]);
		if((pilih-b)!=1)
		{
		printf("+ ");}
	}
	
	for(b=0; b<pilih; b++){
		n[b] = n[b] * pangkat[b];
		pangkat[b] = pangkat[b] - 1;
	}
	
	printf("\nnY' = ");
	for(b=0; b<pilih; b++){
		printf("%d X^ %d", n[b], pangkat[b]);
		if((pilih-b)!=1)
		{
		printf("+ ");}
	}

    return 0;
}

//operasi convert daya

void konvertDaya()
{
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
	
	hasilconvert =Hitungdaya(satuan1, satuan2, daya); 
	printf("Hasil convert adalah %f", hasilconvert);
}

double Hitungdaya(int satuan1, int satuan2, double daya){
   
   double hasilconvert;
 
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
        
        return hasilconvert;
    }
    
