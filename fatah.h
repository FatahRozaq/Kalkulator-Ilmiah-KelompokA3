#ifndef fatah_H
#define fatah_H

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

// Modul Perkalian
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
double Eksponensial(char *input);

// Modul Lowercase
void lowerCase(char** str);

#endif

