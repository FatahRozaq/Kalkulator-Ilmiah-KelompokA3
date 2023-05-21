#ifndef fatah_H
#define fatah_H


#define true 1
#define false 0
#define PI 3.14159265

// Modul Perkalian
/* is : fungsi untuk mencari hasil perkalian dari dua buah bilangan
	fs : menghasilkan nilai perkalian dari dua buah bilangan yang berasal dari parameter
	referensi : ChatGPT */
double Perkalian (double bil1, double bil2);

// Modul Konvert Panjang
// Referensi : https://github.com/cengizhankose/unit_converter/blob/master/main.c
void pilihanSatuan(); // panggil modul ini ke main
float nilaiSatuan(int opsi, float nilai);
float convertPanjang(int opsi, float nilaiTetap);
void tampilHasilConvert(int opsi, float *hasil);

// Modul Deret Geometri
// Referensi : https://github.com/palsiddharth091/APGPCALC/blob/master/APGP1.cpp
void deretGeometri(); // panggil modul ini ke main
float hasilGeometri(float sukuPertama2, float rasio2, int jumlahElemen2, int i);

// Modul Statistika
// Referensi : https://github.com/apieceofCAKE/array_basic_functions/blob/master/main.c
void statistika(); // panggil modul ini ke main
int array_modus(int *array, int ukuran);
void array_sort(int *array, int ukuran);
float array_median(int *array, int ukuran);
float array_mean(int *array, float ukuran);

// Modul Integral
void integral(); // panggil modul ini ke main
float luasIntegral(float a, float b, float p, float q, float c, float bawah, float atas);

// Modul Eksponensial
/* is : fungsi untuk mencari nilai exp 
	fs : menghasilkan nilai exp dari data yang dikirimkan melalui parameter
	referensi : Kalkulator Google */
double Eksponensial(char *input);
double powerEksponensial(double base, int exponent);
double factorialEksponensial(int n);
double eksponensial(double x);

// Modul Lowercase
/* is : fungsi untuk mengubah semua karakter string menjadi lowercase
	fs : menghasilkan string dimana semua karakternya sudah dalam bentuk lowercase 
	referensi : ChatGPT */
void lowerCase(char *str);

// Modul pembantu trigonometri
double factorial(int n);
double power(double base, int exponent);

// Modul Help
/* is : Prosedur untuk menampilkan tampilan help pada kalkulator
	fs : menghasilkan tampilan help yang dibantu oleh Aurora untuk memperindah tampilan
	referensi : membuat sendiri */
void help();

/* is : Fungsi untuk mengembalikan nilai boolean
	fs : menghasilkan nilai boolean dari kondisi yang didapatkan
	referensi : membuat sendiri */
bool cekHelp(char *str);

// Modul Undefined
/* is : Prosedur untuk menampilkan tampilan apabila terdapat hasil trigonometri yang tidak terdefinisi
	fs : akan menanyakan user untuk kembali masuk ke tampilan input kalkulator atau keluar dari program
	referensi : membuat sendiri */
void undefinedMode();

#endif

