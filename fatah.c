#include "Nisrina.h"
#include "fatah.h"



//========================================================
//						Modul
//					  Perkalian
//========================================================
double Perkalian (double bil1, double bil2){
	double hasil; 
	
	hasil = bil1 * bil2;
	
	return hasil;
}

//========================================================
//						Modul
//					Konvert Panjang
//========================================================
void konvertPanjang(){ // Panggil Modul ini ke main
	int opsi;
	float nilai, nilaiTetap, nilaiAkhir;
	
	pilihanSatuan();
    opsi1 :
	printf("\n\t\t\t\t\t\t\tPilih Satuan Panjang : ");
	scanf("%d", &opsi);
	if (opsi > 7){
		printf("\n\t\t\t\t\t\t\tAnda salah memasukan angka\n");
		goto opsi1;
	}
	
	printf("\n\t\t\t\t\t\t\tMasukan nilai : ");
    scanf("%f", &nilai);


	nilaiTetap = nilaiSatuan(opsi, nilai);
    
    pilihanSatuan();
    
    opsi2:
	printf("\n\t\t\t\t\t\t\tPilih satuan tujuan : ");
	scanf("%d", &opsi);
	if (opsi > 7){
		printf("\n\t\t\t\t\t\t\tAnda salah memasukan angka\n");
		goto opsi2;
	}
    
    nilaiAkhir = convertPanjang(opsi, nilaiTetap);
    
    tampilHasilConvert(opsi, &nilaiAkhir);
}

void pilihanSatuan(){
	printf("\n\t\t\t\t\t\t\t1-) Kilometer (Km)");
    printf("\n\t\t\t\t\t\t\t2-) Hektameter (Hm)");
    printf("\n\t\t\t\t\t\t\t3-) Dekameter (Dam)");
    printf("\n\t\t\t\t\t\t\t4-) Meter (M)");
    printf("\n\t\t\t\t\t\t\t5-) Desimeter (Dm)");
    printf("\n\t\t\t\t\t\t\t6-) Centimeter (Cm)");
    printf("\n\t\t\t\t\t\t\t7-) Milimeter (Mm)");
}

float nilaiSatuan(int opsi, float nilai){
	
	float nilaiTetap;
	
	if (opsi == 1)
    {
        nilaiTetap = nilai * 1000000;
    }
    else if (opsi == 2)
    {
        nilaiTetap = nilai * 100000;
    }
    else if (opsi == 3)
    {
        nilaiTetap = nilai * 10000;
    }
    else if (opsi == 4)
    {
        nilaiTetap = nilai * 1000;
    }
    else if (opsi == 5)
    {
        nilaiTetap = nilai * 100;
    }
    else if (opsi == 6)
    {
        nilaiTetap = nilai * 10;
    }
    else if (opsi == 7)
    {
        nilaiTetap = nilai * 1;
    }
    
    return nilaiTetap;
}

float convertPanjang(int opsi, float nilaiTetap){
	float hasil;
	
	if (opsi == 1)
    {
        hasil = nilaiTetap / 1000000;
    }
    else if (opsi == 2)
    {
        hasil = nilaiTetap / 100000;
    }
    else if (opsi == 3)
    {
        hasil = nilaiTetap / 10000;
    }
    else if (opsi == 4)
    {
        hasil = nilaiTetap / 1000;
    }
    else if (opsi == 5)
    {
        hasil = nilaiTetap / 100;
    }
    else if (opsi == 6)
    {
        hasil = nilaiTetap / 10;
    }
    else if (opsi == 7)
    {
        hasil = nilaiTetap / 1;
    }
    
    return hasil;
}

void tampilHasilConvert(int opsi, float *hasil){
	
	if (opsi == 1)
    {
        printf("\n\t\t\t\t\t\t\tHASIL : %g Kilometer (Km)", *hasil);
    }
    else if (opsi == 2)
    {
        printf("\n\t\t\t\t\t\t\tHASIL : %g Hektameter (Hm)", *hasil);
    }
    else if (opsi == 3)
    {
        printf("\n\t\t\t\t\t\t\tHASIL : %g Dekameter (Dam)", *hasil);
    }
    else if (opsi == 4)
    {
        printf("\n\t\t\t\t\t\t\tHASIL : %g Meter (M)", *hasil);
    }
    else if (opsi == 5)
    {
        printf("\n\t\t\t\t\t\t\tHASIL : %g Desimeter (Dm)", *hasil);
    }
    else if (opsi == 6)
    {
        printf("\n\t\t\t\t\t\t\tHASIL : %g Centimeter (Cm)", *hasil);
    }
    else if (opsi == 7)
    {
        printf("\n\t\t\t\t\t\t\tHASIL : %g Milimeter (Mm)", *hasil);
    }
    
}

//========================================================
//						Modul
//					Deret Geometri
//========================================================
void deretGeometri(){ // Panggil Modul ini
	float sukuPertama, rasio, geometri, isiElemen;
	int jumlahElemen, j;
	
    printf("\n\t\t\t\t\t\t\tMasukan suku pertama dari deret geometri : ");
	scanf("%f",&sukuPertama);
	printf("\n\t\t\t\t\t\t\tMasukan ratio : ");
	scanf("%f",&rasio);
    printf("\n\t\t\t\t\t\t\tMasukan jumlah elemen dari deret geometri: ");
	scanf("%d",&jumlahElemen);
	
	jumlahElemen--;
	float hasil[jumlahElemen];
	
    printf("\n\t\t\t\t\t\t\tDeret Geometri : ");
 
    for(j=0;j<=jumlahElemen;j++)
	{
		hasil[j] = hasilGeometri(sukuPertama, rasio, jumlahElemen, j);
		printf("%g ", hasil[j]);
	}
	
}

float hasilGeometri(float sukuPertama2, float rasio2, int jumlahElemen2, int i){
	float geometri, isiElemen;
	
	geometri=pow(rasio2,((i+1)-1));
	isiElemen=geometri*sukuPertama2;

	return isiElemen;
}


//========================================================
//						Modul
//					 Statistika
//========================================================
void statistika(){ // panggil modul ini ke main
	int ukuran, modus;
    float median, mean;
    int i,j;

    printf("\n\t\t\t\t\t\t\Masukan jumlah elemen data : ");
    scanf("%d", &ukuran);

    ukuran --;
    int array[ukuran];

    for (i = 0; i <= ukuran; i ++) {
        printf("\n\t\t\t\t\t\t\Masukan Elemen[%d]: ", i+1);
        scanf("\n\t\t\t\t\t\t%d", &array[i]);
    }

    printf("\n\t\t\t\t\t\t\Data yang anda masukan");
	printf("\n\t\t\t\t\t\t=============================================\n");
    for (j = 0; j <= ukuran; j ++) {
        printf("\n\t\t\t\t\t\t%d ", array[j]);
    }
    printf("\n\t\t\t\t\t\t=============================================\n");
    
    
    printf("\n\t\t\t\t\t\tSetelah data disorting");
    printf("\n\t\t\t\t\t\t=============================================\n");
    array_sort(array, ukuran);
    printf("\n\t\t\t\t\t\t=============================================\n");
    
    modus = array_modus(array, ukuran);
    printf("\n\t\t\t\t\t\tModus kumpulan data ");
    printf("\n\t\t\t\t\t\t=============================================\n");
    if (modus == 1) {
    	printf("\n\t\t\t\t\t\tSemua elemen termasuk modus");
    }else{
    	printf("\n\t\t\t\t\t\t%d ", modus);
	}
    printf("\n\t\t\t\t\t\t=============================================\n");
    
    median = array_median(array, ukuran);
    
    printf("\n\t\t\t\t\t\tMedian kumpulan data ");
    printf("\n\t\t\t\t\t\t=============================================");
    printf("\n\t\t\t\t\t\t%g ", median);
    printf("\n\t\t\t\t\t\t=============================================\n");
    
    mean = array_mean(array, ukuran);
	printf("\n\t\t\t\t\t\tMean kumpulan data ");
    printf("\n\t\t\t\t\t\t=============================================");
    printf("\n\t\t\t\t\t\t%g ", mean);
    printf("\n\t\t\t\t\t\t=============================================\n");
}

int array_modus(int *array, int ukuran) {
    int modus;
    int elemen;
    int hitung;
    int max_hitung = 0;
    int i,j;

    for (i = 0; i <= ukuran; i ++) {

        hitung = 0;
        elemen = array[i];

        for (j = 0; j <= ukuran; j ++) {

            if (array[j] == elemen) {

                hitung++;
            }
        }

        if (hitung >= max_hitung) {
            max_hitung = hitung;
            modus = elemen;
        }
    }

    return modus;
}


void array_sort(int *array, int ukuran) {
	int i,j,aux3;

    for (i = 0; i <= ukuran; i ++) {

        for (j = 0; j <= ukuran; j ++) {

            if (array[j] > array[i]) {

                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (aux3 = 0; aux3 <= ukuran; aux3 ++) {

        printf("\n\t\t\t\t\t\t%d ", array[aux3]);
    }
}


float array_median(int *array, int ukuran) {

    float median;;
    ukuran ++;

    if (ukuran % 2 == 0) {

        ukuran = ukuran/2;
        float a = array[ukuran];
        float b = array[ukuran - 1];
        median = (a + b)/2.0;
    }

    else {

        median = array[ukuran/2];
    }

    return median;
}


float array_mean(int *array, float ukuran) {

    float total = 0;
    float mean;
    int i;

    for (i = 0; i <= ukuran; i ++) {

        total = total + array[i];
    }

    mean = total/(ukuran + 1.0);

    return mean;
}

//========================================================
//						Modul
//					  Integral
//========================================================
void integral(){ // panggil modul ini ke main
	
	float a, p, b, q, c, bawah, atas, hitungBawah, hitungAtas,hasil;
	
	printf("\t\t\t\t\t\t\tFormat fungsi : ax^p + bx^q + c");
	printf("\n\t\t\t\t\t\t\tMasukan angka A : ");
	scanf("%f", &a);
	printf("\t\t\t\t\t\t\tMasukan angka P : ");
	scanf("%f", &p);
	printf("\t\t\t\t\t\t\tMasukan angka B : ");
	scanf("%f", &b);
	printf("\t\t\t\t\t\t\tMasukan angka Q : ");
	scanf("%f", &q);
	printf("\t\t\t\t\t\t\tMasukan angka C : ");
	scanf("%f", &c);
	
	p = p+1;
	q = q+1;
	
	if ( a == p && b == q ){
		
		if(c == 0){
			printf("\t\t\t\t\t\t\tHasil Integral : x^%g + x^%g ", p, q);
		}else{
			printf("\t\t\t\t\t\t\tHasil Integral : x^%g + x^%g + %gx", p, q, c);
		}
		a = 1;
		b = 1;
	} 
	else if ( a == p){
		
		if(c == 0){
			printf("\t\t\t\t\t\t\tHasil Integral : x^%g + (%g/%g x^%g) ", p, b, q, q);
		}else{
			printf("\t\t\t\t\t\t\tHasil Integral : x^%g + (%g/%g x^%g) + %gx", p, b, q, q, c);
		}
		a = 1;
		b = b/q;
	} 
	else if ( b == q){
		
		if(c == 0){
			printf("\t\t\t\t\t\t\tHasil Integral : (%g/%g x^%g) + x^%g ", a, p, p, q);
		}else{
			printf("\t\t\t\t\t\t\tHasil Integral : (%g/%g x^%g) + x^%g + %gx", a, p, p, q, c);
		}
		a = a/p;
		b = 1;
	}
	else{
		
		if (c == 0){
			printf("\t\t\t\t\t\t\tHasil Integral : (%g/%g x^%g) + (%g/%g x^%g) ", a, p, p, b, q, q);
		}else{
			printf("\t\t\t\t\t\t\tHasil Integral : (%g/%g x^%g) + (%g/%g x^%g) + %gx", a, p, p, b, q, q, c);
		}
		a = a/p;
		b = b/q;
	}
	
	printf("\n\t\t\t\t\t\t\tMasukan batas bawah : ");
	scanf("%f", &bawah);
	printf("\t\t\t\t\t\t\tMasukan batas atas : ");
	scanf("%f", &atas);
	
	hasil = luasIntegral(a, b, p, q, c, bawah, atas);
	
	
	printf("\t\t\t\t\t\t\tHasil ketika dimasukan batas bawah (%g) dan batas atas (%g) : %g", bawah, atas, hasil);
}

float luasIntegral(float a, float b, float p, float q, float c, float bawah, float atas){
	float hitungBawah, hitungAtas, hasil;
	
	hitungBawah = a*pow(bawah, p) + b*pow(bawah, q) + (bawah*c);
	hitungAtas = a*pow(atas, p) + b*pow(atas, q) + (atas*c);
	hasil = hitungAtas - hitungBawah;
	
	return hasil;
}

//========================================================
//						Modul
//					Eksponensial
//========================================================
double Eksponensial(char *input){
	double hasil, value;
	hasil =0;
	

	if(strstr(input,"-"))
	{
		if (sscanf(input,"exp(-%lf)",&value) != 1) 
		{
			printf("\nInput tidak sesuai dengan format yang diharapkan!\n");
			printf("\nContoh penulisan eksponensial yang benar adalah exp(100)\n");
			exit(0);
		}
		else
		{
			value = -1*value;
			hasil = eksponensial(value);	
		}
	}
	else
	{
		if (sscanf(input,"exp(%lf)",&value) != 1) 
		{
			printf("\nInput tidak sesuai dengan format yang diharapkan!\n");
			printf("\nContoh penulisan eksponensial yang benar adalah exp(100)\n");
			exit(0);
		}
		else
		{
			hasil = eksponensial(value);
		}
	}
	
	
	return hasil;
}

double powerEksponensial(double base, int exponent) {
    double result = 1.0;
    int i;

    for(i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

double factorialEksponensial(int n) {
    double result = 1.0;
    int i;

    for(i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

double eksponensial(double x) {
    double sum = 1.0;
    double term = 1.0;
    int n = 1;

    while(term > 1e-10) {
        term *= (x / n);
        sum += term;
        n++;
    }

    return sum;
}

//========================================================
//						Modul
//					  Lowercase
//========================================================
void lowerCase(char *str) {
    while(*str != '\0') {
        *str = tolower(*str);
        (str)++;
    }
}

//========================================================
//						Modul
//					  	Help
//========================================================
void help(){

	system("cls");
	printf("\n\t\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  H  E  L  P  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	printf("\n\t\t\t\t\t\t\t\t|\t");	printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t 1. Operator pertambahan menggunakan simbol "); printf("\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____  "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|  +  | "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : 5+5 "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |"); 
	printf("\n\t\t\t\t\t\t\t\t|\t 2. Operator pengurangan menggunakan simbol "); printf("\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____  "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|  -  | "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : 5-5 "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t 3. Operator perkalian menggunakan simbol "); printf("\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____  "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|  *  | "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : 5*5 "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");		
	printf("\n\t\t\t\t\t\t\t\t|\t 4. Operator pembagian menggunakan simbol "); printf("\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____  "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|  /  | "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : 5/5 "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t|\t 5. Operator modulus menggunakan simbol "); printf("\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____  "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|  %%%  "); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : 4%%%   '2 "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t 6. Operator akar menggunakan simbol "); printf("\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____  "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|  $  |       pangkat$(angka)"); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : 2$(5) "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");		
	printf("\n\t\t\t\t\t\t\t\t|\t 7. Operator pangkat menggunakan simbol "); printf("\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____  "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|  ^  |       (angka)^pangkat"); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : (4)^5 "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t 8. Format penulisan konstanta"); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____  "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|  e  | "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : e ");	printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t 9. Format penulisan phi"); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____  "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t| phi | "); printf("\t\t\t\t\t\t    |"); 
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : phi "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t 10. Format penulisan exponent"); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____  "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t| exp |       exp(angka)"); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : exp(4) ");	printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t 11. Format penulisan tanda kurung"); printf("\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____ ____"); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|  (  |  ) |    (operasi) "); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____|____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : (5*5) "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t 12. Format penulisan faktorial"); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____ "); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|  n! |    angka! "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____|"); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : 5! ");	printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t|\t 13. Format penulisan Logaritma"); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____ "); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t| log |    logBasis(angka) "); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : log10(100) "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t|\t 14. Format penulisan Logaritma Natural"); printf("\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____ "); printf("\t\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t| ln  |    ln(angka) "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____| "); printf("\t\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : ln(4) "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t|\t 15. Format penulisan trigonometri"); printf("\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t _____ _____ _____ "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t| sin | cos | tan |    trigonometri(angka) "); printf("\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____|_____|_____| "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t| sec | csc | cot | "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|_____|_____|_____| "); printf("\t\t\t\t\t    |");		
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : sin(90) "); printf("\t\t\t\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t|\t 16. Format penulisan invers trigonometri"); printf("\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t|\t ________ ________ ________ "); printf("\t\t\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t|\t| arcsin | arccos | arctan |    inverstrigonometri(angka) "); printf("  |");
	printf("\n\t\t\t\t\t\t\t\t|\t|________|________|________| "); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t| arcsec | arccsc | arccot | "); printf("\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|________|________|________| "); printf("\t\t\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : arcsin(90) "); printf("\t\t\t\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t|\t 17. Format penulisan trigonometri hiperbolik"); printf("\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t ______ ______ ______ "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t| sinh | cosh | tanh |    trigonometrihiperbolik(angka)"); printf("\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|______|______|______| "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t| sech | csch | coth | "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t|______|______|______| ");	printf("\t\t\t\t\t    |");	 
	printf("\n\t\t\t\t\t\t\t\t|\t>> Contoh : sinh(90) "); printf("\t\t\t\t\t    |");
	printf("\n\t\t\t\t\t\t\t\t|\t"); printf("\t\t\t\t\t\t\t    |");	
	printf("\n\t\t\t\t\t\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	
};

bool cekHelp(char *str){
	if(str[0] == '-'  && str[1] == 'h' ){
		return true;
	}else{
		return false;
	}
}

