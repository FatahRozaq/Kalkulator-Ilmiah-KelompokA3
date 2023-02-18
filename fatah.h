#ifndef fatah_H
#define fatah_H

#include<stdio.h>
#include <math.h>

// Modul Perkalian
float Perkalian ();

// Modul Konvert Panjang
void pilihanSatuan(); // panggil modul ini ke main
float nilaiSatuan(int opsi, float nilai);
float convertPanjang(int opsi, float nilaiTetap);
void tampilHasilKonvert(int opsi, float *hasil);

// Modul Deret Geometri
void deretGeometri(); // panggil modul ini ke main
float hasilGeometri(float sukuPertama2, float rasio2, int jumlahElemen2, int i);

// Modul Statistika
void statistika(); // panggil modul ini ke main
int array_modus(int *array, int ukuran);
void array_sort(int *array, int ukuran);
float array_median(int *array, int ukuran);
float array_mean(int *array, float ukuran);

#endif

