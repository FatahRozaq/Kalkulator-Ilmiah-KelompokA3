#include <stdio.h>
#include "gavrila.h"
#include "Nisrina.h"

//operasi pengurangan
double Pengurangan(double bil1, double bil2)
{
	double hasil;
	
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

double logaritmanatural(double x)
{
	
	return ln(x);
}

double ln(double x) {
	int i;
	
    if (x <= 0) {
        return 0.0;  // Return an error value
    }

    double result = 0.0;
    double term = (x - 1) / x;  // First term of the series

    for (i = 1; i < 1000; i++) {  // Use 1000 terms for accuracy
        result += term;
        term *= (x - 1) * i / (double)(i + 1) / x;
    }

    return result;
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

double hitungFaktorial(double bil)
{
	
	double hasil;
	int i;
	
	hasil = 1;
	for(i = 1; i<=bil; i++)
	{
		hasil = hasil * i;
	}
	
	return hasil;
}

//operasi turunan

void turunan()
{
	int pilih;
	int b;
	
	printf("\n\t\t\t\t\t\t\tMasukan banyak variabel X = ");
	scanf("%d", &pilih);
	
	int n[pilih], pangkat[pilih];
	
	printf("\n\t\t\t\t\t\t\tY = ");
	for(b=0; b<pilih; b++)
	{
		printf("n.X^p ");
		if((pilih-b)!=1)
		{
		printf("+ ");
		}
	}
	
	for(b=0; b<pilih; b++){
		printf("\n\t\t\t\t\t\t\tMasukan nilai n ke-%d =",b+1);
		scanf("%d",&n[b]);
		printf("\n\t\t\t\t\t\t\tMasukan nilai p ke-%d =",b+1);
		scanf("%d",&pangkat[b]);		
	}
	
	printf("\n\t\t\t\t\t\t\tnY  = ");
	for(b=0; b<pilih; b++)
	{
		printf ("%d x^ %d", n[b], pangkat[b]);
		if((pilih-b)!=1)
		{
		printf("+ ");
		}
	}
	
	for(b=0; b<pilih; b++){
		n[b] = n[b] * pangkat[b];
		pangkat[b] = pangkat[b] - 1;
	}
	
	printf("\n\t\t\t\t\t\t\tnY' = ");
	for(b=0; b<pilih; b++)
	{
		printf("%d X^ %d", n[b], pangkat[b]);
		if((pilih-b)!=1)
		{
		printf("+ ");
		}
	}

}

//operasi convert daya

void konvertDaya()
{
	int satuan1, satuan2;
   double daya;
   double hasilconvert;
   
   printf("\n\t\t\t\t\t\t\t1. Watt (W)");
   printf("\n\t\t\t\t\t\t\t2. Kilowatt (kW)");
   printf("\n\t\t\t\t\t\t\t3. kilokalori/detik (kcal/s)");
   printf("\n\t\t\t\t\t\t\t4. Newton-meter/detik (N.m/s)");
   printf("\n\t\t\t\t\t\t\t5. Joule/detik (J/s)");
   printf("\n\t\t\t\t\t\t\t6. Kilogram-meter/detik (kg.m/s)");
   printf("\n\t\t\t\t\t\t\tPilih satuan awal daya= ");
   scanf("%d", &satuan1);
   while (satuan1 < 0 || satuan1 > 6) 
   {
       printf("\n\t\t\t\t\t\t\tPilihan invalid, ketik ulang: ");
       scanf("%d", &satuan1);
   }
   
   printf("\n\t\t\t\t\t\t\t1. Watt (W)");
   printf("\n\t\t\t\t\t\t\t2. Kilowatt (kW)");
   printf("\n\t\t\t\t\t\t\t3. kilokalori/detik (kcal/s)");
   printf("\n\t\t\t\t\t\t\t4. Newton-meter/detik (N.m/s)");
   printf("\n\t\t\t\t\t\t\t5. Joule/detik (J/s)");
   printf("\n\t\t\t\t\t\t\t6. Kilogram-meter/detik (kg.m/s)");
   printf("\n\t\t\t\t\t\t\tPilih satuan akhir daya= ");
   scanf("%d", &satuan2);
   while (satuan2 < 0 || satuan2 > 6) 
   {
       printf("\n\t\t\t\t\t\t\tPilihan invalid, ketik ulang: ");
       scanf("%d", &satuan2);
   }
   	
   printf("\n\t\t\t\t\t\t\tMasukkan daya dalam satuan %d: ", satuan1);
   scanf("%lf", &daya);
	
	hasilconvert =Hitungdaya(satuan1, satuan2, daya); 
	printf("\n\t\t\t\t\t\t\tHasil convert adalah %f", hasilconvert);
}

double Hitungdaya(int satuan1, int satuan2, double daya){
   
   double hasilconvert;
 
	switch (satuan1) 
	{
        case 1:
        	switch (satuan2)
			{
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
        	switch (satuan2)
			{
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
        	switch (satuan2)
			{
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
        	switch(satuan2)
			{
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
        	switch (satuan2)
			{
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
        	switch (satuan2)
			{
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
    
//void arcsin(){
//	double x, result;
//	
//	printf("Masukkan bilangan (1<=x<=-1)");
//	scanf("%lf", &x);
//	if (x>1 || x<-1)){
//		printf("Invalid input (Masukkan bilangan 1<=x<=-1)")
//	}
//	result = hitungarcsin(x);
//	printf("arcsin dari %lf adalah %lf derajat", x, result);
//}

double hitungarcsin(double x){
	double rad, hasil;
	
	if (x>1 || x<-1){
		printf("Invalid ArcSin salah (Masukkan bilangan 1<=x<=-1)");
	}
	else{
		rad = asin(x); //menghitung nilai inverse sinus dalam radian
    	hasil = rad * 180 / M_PI; //mengonversi ke derajat
    	return hasil;
	}
	
}

//void arccos(){
//	double x, result;
//	
//	printf("Masukkan bilangan (1<=x<=-1)");
//	scanf("%lf", &x);
//	if (x>1 || x<-1)){
//		printf("Invalid input (Masukkan bilangan 1<=x<=-1)")
//	}
//	result = hitungarccos(x);
//	printf("arcsin dari %lf adalah %lf derajat", x, result);
//}

double hitungarccos(double x){
	double rad, hasil;
	
	if (x>1 || x<-1){
		printf("Input ArcCos salah (Masukkan bilangan 1<=x<=-1)");
	}else{
		rad = acos(x); //menghitung nilai inverse sinus dalam radian
    	hasil = rad * 180 / M_PI; //mengonversi ke derajat
    	return hasil;
	}

}

//void arctan(){
//	double x, result;
//	
//	printf("Masukkan bilangan: ");
//	scanf("%lf", &x);
//	result = hitungaarctan(x);
//	printf("arcsin dari %lf adalah %lf derajat", x, result);
//}

double hitungarctan(double x){
	double rad, hasil;
	rad = atan(x); //menghitung nilai inverse sinus dalam radian
    hasil = rad * 180 / M_PI; //mengonversi ke derajat
    return hasil;
}

double toRadians(double degree) {
    return degree * (3.14159265359 / 180.0);
}

double hitungsinh(double x){
	x = toRadians(x);
	result = (1 - pow(e, -2 * x)) / (2 * pow(e, -x));
	return result;
	
}

double hitungcosh(double x){
	x = toRadians(x);
	result = (1 + pow(e, -2 * x)) / (2 * pow(e, -x));
	return result;
}

double hitungtanh(double x){
	x = toRadians(x);
	result = (pow(e, 2 * x)-1) / (pow(e, 2*x)+1);
	return result;
}