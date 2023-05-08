#ifndef NISRINA_H
#define NISRINA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include "boolean.h"
#include "Aurora.h"
#include "fatah.h"
#include "jojo.h"
#include "gavrila.h"

#define Nil NULL
#define Prev(P) (P)->prev
#define Info(P) (P)->info
#define Next(P) (P)->next
#define Left(P) (P)->leftSon
#define Right(P) (P)->rightSon
#define Parent(P) (P)->parent
#define Char(P) (P)->cData
#define Number(P) (P)->bData
#define string char*
#define eksponen 2.718281828
#define phi 3.14

typedef string infotype;
typedef struct tempChar *addressChar;
typedef struct tempChar
{
	addressChar prev;
    infotype  cData;
    addressChar next;
} TempChar;

typedef struct tempNum *addressNum;
typedef struct tempNum
{
	addressNum prev;
    double  bData;
    addressNum next;
} TempNum;

// struktur data linkedlist

typedef struct tElmtList *address;
typedef struct tElmtList {
	 address  prev;
	 infotype info;
	 address  next;
	 } ElmtList;

// struktur data tree

typedef struct tree *addressTree;
typedef struct tree {
	 addressTree  leftSon;
	 addressTree parent;
	 infotype info;
	 addressTree  rightSon;
	 } Tree;

// {membuat sendiri	 

addressTree AlokasiTree(infotype X);

address Alokasi(infotype X);

void InsVLast(address *front,address *rear, infotype X);

void InsertLast (address *front,address *rear, address P);

void PrintInfoASC (address data);

void PrintInfoChar (addressChar data);

void DelVFirst (address *front,address *rear );

void DelAll (address *front,address *rear);

void DeAlokasi (address P);

void DelVLastChar (addressChar *top );

void DeAlokasiChar (addressChar P);

void DelVLastNum (addressNum *top );

void DeAlokasiNum (addressNum P);

addressChar AlokasiChar(infotype X);

void InsVLastChar(addressChar *top, infotype X);

void InsertLastChar (addressChar *top, addressChar P);

addressNum AlokasiNum(double X);

void InsVLastNum(addressNum *top, double X);

void InsertLastNum (addressNum *top, addressNum P);

double Penjumlahan (double bil1, double bil2);

double Pangkat(double bil1, double bil2);

void InputBilFloat(float *bil);

void PilihMenu(int *pilih);

void InputBilInt(int *bil);

void TampilHasilFloat(float hasil, char nama[]);

void TampilHasilInt(int hasil, char nama[]);

void CalStd();
// }


/* {referensi github : https://github.com/MohamedFarid612/Calculator-infix-to-postfix-/blob/main/main.c 
- melakukan modifikasi dengan menggunakan function yang sudah dibuat untuk operasi tambah, kali,bagi,kurang, pangkat 
- menambahkan algoritma untuk phi, e, eksponen, logaritma, logaritma natural, trigonometri dan lain-lain
- mengubah tipe data menjadi double dari yang sebelumnya float
- mengubah struktur data karena mengubah dari array ke linkedlist
dan lain-lain */


int isEmpty(addressChar top);

infotype topPop(addressChar top);

infotype pop(addressChar *top);

double popNum(addressNum *top);

double popRight(addressTree *parent);

double popLeft(addressTree *parent);

void push(double d, addressTree *parent);

void pushChar(infotype c, addressChar *top);

int priority(char c);

int isOperator(char c);

int isOperator2(char c);

int negatifInteger(char *infix,char c,int ptr);

int isAfter(addressChar top);

char * hapusSpasi(char * infix);

void infixToPostfix(address frontIn, address *front, address *rear);

void treePostFix(addressTree *root, address rear);

void DeAlokasiTree (addressTree P);

void gantiNewLineJadiSpasi(char *s);

int isNumber(char *token);

double hitungPostfix(addressTree *root);
// }

// {membuat sendiri 

void PrintInfoData (address data);

int validasiChar(address front);

int validasiFormat(address front);

void CalStfc();

void MenuCalStd();

void konvertWaktu();

void Trigonometri();

double RadianTrigono(char *input);

double DerajatTrigono(char *input);

double TriSin(double value);

double TriCos(double value);

double TriTan(double value);

double TriCot(double value);

double TriSec(double value);

double TriCsc(double value);

double Sin(double value);

double Cos(double value);

double Tan(double value);

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
// }

#endif
