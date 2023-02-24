#ifndef NISRINA_H
#define NISRINA_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include "Nisrina.h"
#include "Aurora.h"
#include "fatah.h"
#include "jojo.h"
#include "gavrila.h"

typedef union
{
    double bData;
    char  cData;
} Item;

typedef struct
{
    Item item[256];
    int top;
} Stack;

double Penjumlahan (double bil1, double bil2);

double Pangkat(double bil1, double bil2);

void InputBilFloat(float *bil);

void PilihMenu(int *pilih);

void InputBilInt(int *bil);

void TampilHasilFloat(float hasil, char nama[]);

void TampilHasilInt(int hasil, char nama[]);

void CalStd();

Stack* inisialisasi();

int isEmpty(Stack *s);

Item top(Stack *s);

Item pop(Stack *s);

void push(Stack *s, double val);

void pushChar(Stack *s, char c);

int isFull(Stack *s);

int prioritas(char c);

int isOperator(char c);

int negatifInteger(char *infix,char c,int ptr);

int isAfter(Stack *s);

char * hapusSpasi(char * infix);

char *infixToPostfix(char *infix,char *postfix);

void gantiNewLineJadiSpasi(char *s);

int isNumber(char *token);

double hitungPostfix(char postFix[]);

void CalStfc();

void MenuCalStfc();

void konvertWaktu();

void Trigonometri();

float RadianTrigono(char *input);

double DerajatTrigono(char *input);

double TriSin(double value);

double TriCos(double value);

double TriTan(double value);

double TriCot(double value);

double TriSec(double value);

double TriCsc(double value);

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
