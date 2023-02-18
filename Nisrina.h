#ifndef NISRINA_H
#define NISRINA_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Nisrina.h"
#include "Aurora.h"
#include "fatah.h"
#include "jojo.h"
#include "gavrila.h"

float Penjumlahan ();

float Pangkat();

void InputBilFloat(float *bil);

void PilihMenu(int *pilih);

void InputBilInt(int *bil);

void TampilHasilFloat(float hasil, char nama[]);

void TampilHasilInt(int hasil, char nama[]);

void CalStd();

void CalStfc();

void MenuCalStfc();

void konvertWaktu();

void Trigonometri();

float RadianTrigono(char *input);

float DerajatTrigono(char *input);

float TriSin(float value);

float TriCos(float value);

float TriTan(float value);

float TriCot(float value);

float TriSec(float value);

float TriCsc(float value);

void Matriks();

void IsiMatriks(int baris, int kolom, int Hasil[100][100]);

void PenjumlahanMatriks(int baris, int kolom, int Matriks1[100][100], int Matriks2[100][100], int Hasil[100][100]);

void PenguranganMatriks(int baris, int kolom, int Matriks1[100][100], int Matriks2[100][100], int Hasil[100][100]);

void PerkalianMatriks(int baris, int kolom, int Matriks1[100][100], int Matriks2[100][100],int Hasil[100][100]);

void TransposeMatriks(int baris, int kolom,int Matriks[100][100], int Hasil[100][100]);

void HasilMatriks(int baris, int kolom, char ket[50], char ciri[10], int Hasil[100][100]);

void InputBilOrdo(int *bil, char kalimat[50]);

void konvertBerat();

void menuConvertBerat();

int deteksiLevel(char *input);

float *HitungConvertBerat(int levelAsal, int levelTujuan, int berat);

void TataCara();

void CaraCalStd();

void Credit();

#endif
