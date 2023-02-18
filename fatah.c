#include "fatah.h"
#include "Nisrina.h"


//========================================================
//						Modul
//					  Perkalian
//========================================================
float Perkalian (){
	float total, bil1, bil2;
	
	InputBilFloat(&bil1,&bil2);
	total = bil1 * bil2;
	
	return total;
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
	printf("Pilih Satuan Panjang : ");
	scanf("%d", &opsi);
	if (opsi > 7){
		printf("Anda salah memasukan angka\n");
		goto opsi1;
	}
	
	printf("Masukan nilai : ");
    scanf("%f", &nilai);


	nilaiTetap = nilaiSatuan(opsi, nilai);
    
    pilihanSatuan();
    
    opsi2:
	printf("Pilih satuan tujuan : ");
	scanf("%d", &opsi);
	if (opsi > 7){
		printf("Anda salah memasukan angka\n");
		goto opsi2;
	}
    
    nilaiAkhir = convertPanjang(opsi, nilaiTetap);
    
    tampilHasilConvert(opsi, &nilaiAkhir);
}

void pilihanSatuan(){
	printf("1-) Kilometer (Km)\n");
    printf("2-) Hektameter (Hm)\n");
    printf("3-) Dekameter (Dam)\n");
    printf("4-) Meter (M)\n");
    printf("5-) Desimeter (Dm)\n");
    printf("6-) Centimeter (Cm)\n");
    printf("7-) Milimeter (Mm)\n");
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
        printf("HASIL : %g Kilometer (Km)\n", *hasil);
    }
    else if (opsi == 2)
    {
        printf("HASIL : %g Hektameter (Hm)\n", *hasil);
    }
    else if (opsi == 3)
    {
        printf("HASIL : %g Dekameter (Dam)\n", *hasil);
    }
    else if (opsi == 4)
    {
        printf("HASIL : %g Meter (M)\n", *hasil);
    }
    else if (opsi == 5)
    {
        printf("HASIL : %g Desimeter (Dm)\n", *hasil);
    }
    else if (opsi == 6)
    {
        printf("HASIL : %g Centimeter (Cm)\n", *hasil);
    }
    else if (opsi == 7)
    {
        printf("HASIL : %g Milimeter (Mm)\n", *hasil);
    }
    
}

//========================================================
//						Modul
//					Deret Geometri
//========================================================
void deretGeometri(){ // Panggil Modul ini
	float sukuPertama, rasio, geometri, isiElemen;
	int jumlahElemen, j;
	
    printf("\nMasukan suku pertama dari deret geometri : ");
	scanf("%f",&sukuPertama);
	printf("\nMasukan ratio : ");
	scanf("%f",&rasio);
    printf("\nMasukan jumlah elemen dari deret geometri: ");
	scanf("%d",&jumlahElemen);
	
	jumlahElemen--;
	float hasil[jumlahElemen];
	
    printf("\nDeret Geometri : ");
 
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

    printf("Masukan jumlah elemen data : ");
    scanf("%d", &ukuran);

    ukuran --;
    int array[ukuran];

    for (i = 0; i <= ukuran; i ++) {
        printf("Masukan Elemen[%d]: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\n\nData yang anda masukan \n");
	printf("=============================================\n");
    for (j = 0; j <= ukuran; j ++) {
        printf(" %d ", array[j]);
    }
    printf("\n=============================================\n");
    
    
    printf("\nSetelah data disorting");
    printf("\n=============================================\n");
    array_sort(array, ukuran);
    printf("\n=============================================\n");
    
    modus = array_modus(array, ukuran);
    printf("\nModus kumpulan data ");
    printf("\n=============================================\n");
    if (modus == 1) {
    	printf("\nSemua elemen termasuk modus\n");
    }else{
    	printf(" %d ", modus);
	}
    printf("\n=============================================\n");
    
    median = array_median(array, ukuran);
    
    printf("\nMedian kumpulan data ");
    printf("\n=============================================\n");
    printf(" %g ", median);
    printf("\n=============================================\n");
    
    mean = array_mean(array, ukuran);
	printf("\nMean kumpulan data ");
    printf("\n=============================================\n");
    printf(" %g ", mean);
    printf("\n=============================================\n");
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

        printf(" %d ", array[aux3]);
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
	
	printf("Format fungsi : ax^p + bx^q + c");
	printf("\nMasukan angka A : ");
	scanf("%f", &a);
	printf("Masukan angka P : ");
	scanf("%f", &p);
	printf("Masukan angka B : ");
	scanf("%f", &b);
	printf("Masukan angka Q : ");
	scanf("%f", &q);
	printf("Masukan angka C : ");
	scanf("%f", &c);
	
	p = p+1;
	q = q+1;
	
	if ( a == p && b == q ){
		
		if(c == 0){
			printf("Hasil Integral : x^%g + x^%g ", p, q);
		}else{
			printf("Hasil Integral : x^%g + x^%g + %gx", p, q, c);
		}
		a = 1;
		b = 1;
	} 
	else if ( a == p){
		
		if(c == 0){
			printf("Hasil Integral : x^%g + (%g/%g x^%g) ", p, b, q, q);
		}else{
			printf("Hasil Integral : x^%g + (%g/%g x^%g) + %gx", p, b, q, q, c);
		}
		a = 1;
		b = b/q;
	} 
	else if ( b == q){
		
		if(c == 0){
			printf("Hasil Integral : (%g/%g x^%g) + x^%g ", a, p, p, q);
		}else{
			printf("Hasil Integral : (%g/%g x^%g) + x^%g + %gx", a, p, p, q, c);
		}
		a = a/p;
		b = 1;
	}
	else{
		
		if (c == 0){
			printf("Hasil Integral : (%g/%g x^%g) + (%g/%g x^%g) ", a, p, p, b, q, q);
		}else{
			printf("Hasil Integral : (%g/%g x^%g) + (%g/%g x^%g) + %gx", a, p, p, b, q, q, c);
		}
		a = a/p;
		b = b/q;
	}
	
	printf("\nMasukan batas bawah : ");
	scanf("%f", &bawah);
	printf("Masukan batas atas : ");
	scanf("%f", &atas);
	
	hasil = luasIntegral(a, b, p, q, c, bawah, atas);
	
	
	printf("Hasil ketika dimasukan batas bawah (%g) dan batas atas (%g) : %g", bawah, atas, hasil);
}

float luasIntegral(float a, float b, float p, float q, float c, float bawah, float atas){
	float hitungBawah, hitungAtas, hasil;
	
	hitungBawah = a*pow(bawah, p) + b*pow(bawah, q) + (bawah*c);
	hitungAtas = a*pow(atas, p) + b*pow(atas, q) + (atas*c);
	hasil = hitungAtas - hitungBawah;
	
	return hasil;
}
