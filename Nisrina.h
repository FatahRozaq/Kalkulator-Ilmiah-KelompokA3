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
#define string char*
#define eksponen 2.718281828
#define phi 3.14

typedef string infotype;

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

//membuat tree

/* is : fungsi untuk membuat node pada binary tree
	fs : menghasilkan node yang bertipe 'tree' 
	referensi : pembuatan node pada mata kuliah SDA */
addressTree AlokasiTree(infotype X);

//node linkedlist info bertipe infotype

/* is : fungsi untuk membuat node yang bertipe 'tElmtList' 
	fs : menghasilkan node yang bertipe 'tElmtList' 
	referensi : pembuatan node pada mata kuliah SDA */
address Alokasi(infotype X);

/* is : prosedur untuk membuat linkedlist dengan menambahkan node baru pada rear
	fs : menghasilkan linkedlist dengan node yang bertipe 'tElmtList' 
	referensi : pembuatan linkedlist pada mata kuliah SDA */
void InsVLast(address *front,address *rear, infotype X);

void InsertLast (address *front,address *rear, address P);

/* is : prosedur untuk membuat linkedlist dengan metode stack
	fs : menghasilkan linkedlist stack dengan node yang bertipe 'tElmtList' 
	referensi : pembuatan linkedlist stack pada mata kuliah SDA */
void InsVLastChar(address *top, infotype X);

void InsertLastChar (address *top, address P);

/* is : prosedur untuk menghapus semua node bertipe 'tElmtList' pada linkedlist
	fs : menghasilkan linkedlist kosong atau pointer front dan rear menunjuk NULL 
	referensi : menghapus node linkedlist pada mata kuliah SDA */
void DelVFirst (address *front,address *rear );

void DelAll (address *front,address *rear);

void DeAlokasi (address P);

/* is : prosedur untuk menghapus node bertipe 'tElmtList' pada linkedlist dengan metode stack
	fs : node yang diinginkan terhapus dengan node yang diinginkan terhapus
	referensi : menghapus node linkedlist pada mata kuliah SDA */
void DelVLastChar (address *top );

/* is : prosedur untuk menampilkan nilai pada subvar info node bertipe 'tElmtList' pada linkedlist
	fs : tampilan kumpulan nilai nilai pada subvar info
	referensi : menampilkan nilai node linkedlist pada mata kuliah SDA */
void PrintInfoData (address data);

// perhitungan

/* is : fungsi untuk menghitung penjumlahan
	fs : menghasilkan nilai bertipe double hasil dari penjumlahan 2 bilangan
	referensi :membuat sendiri */
double Penjumlahan (double bil1, double bil2);

/* is : fungsi untuk menghitung perpangkatan
	fs : menghasilkan nilai bertipe double hasil dari perpangkatan 2 bilangan dengan memanggil modul powku milik aurora
	referensi :membuat sendiri */
double Pangkat(double bil1, double bil2);

// validasi format

/* is : fungsi untuk melakukan pengecekan format dari expresi yang diinputkan
	fs : menghasilkan nilai 1 untuk expresi tidak valid dan 0 untuk expresi valid
	referensi :membuat sendiri */
int validasiFormat(address front);


/* {referensi github : https://github.com/MohamedFarid612/Calculator-infix-to-postfix-/blob/main/main.c 
- melakukan modifikasi dengan menggunakan function yang sudah dibuat untuk operasi tambah, kali,bagi,kurang, pangkat 
- menambahkan algoritma untuk phi, e, eksponen, logaritma, logaritma natural, trigonometri dan lain-lain
- mengubah tipe data menjadi double dari yang sebelumnya float
- mengubah struktur data karena mengubah dari array ke linkedlist
dan lain-lain */

/* is : fungsi untuk melakukan pengecekan apakah linkedlist kosong atau tidak
	fs : menghasilkan nilai 1 jika kosong dan 0 jika tidak kosong */
int isEmpty(address top);

/* is : fungsi untuk mengembalikan nilai dari node bertipe 'tElmtList' yang paling atas dari linkedlist sebagai penyimpanan sementara operator
	fs : mengembalikan operator yang paling atas pada linkedlist */
infotype topPop(address top);

/* is : fungsi untuk mengembalikan nilai dan menghapus node bertipe 'tElmtList' yang paling atas dari linkedlist sebagai penyimpanan sementara operator
	fs : mengembalikan nilai operator yang paling atas pada linkedlist dan pointer menunjuk node sebelumnya */
infotype pop(address *top);

/* is : fungsi menentuka nilai prioritas dari suatu operator
	fs : mengembalikan nilai yang merupakan urutan prioritas dari operator */
int priority(char c);

/* is : fungsi mengecek apakah termasuk kumpulan operator atau bukan
	fs : mengembalikan nilai 1 jika merupakan operator */
int isOperator(char c);

/* is : fungsi mengecek apakah termasuk kumpulan operator2 atau bukan
	fs : mengembalikan nilai 1 jika merupakan operator2 */
int isOperator2(char c);

/* is : fungsi mengecek apakah termasuk bilangan(angka) atau bukan
	fs : mengembalikan nilai 1 jika merupakan bilangan(angka) */
int isNumber(char *token);

/* is : fungsi mengecek apakah termasuk bilangan negatif atau bukan
	fs : mengembalikan nilai 1 jika merupakan bilangan negatif */
int negatifInteger(char *infix,char c,int ptr);

/* is : fungsi mengecek apakah berada di dalam operasi tanda kurung
	fs : mengembalikan nilai 1 jika top menunjuk node dengan nilai "(" */
int isAfter(address top);

/* is : fungsi menghapus spasi pada string yang berisi ekspresi perhitungan
	fs : mengembalikan string atau kumpulan char berisi ekspresi perhitungan tanpa spasi */
char * hapusSpasi(char * infix);

/* is : prosedur untuk membuat linkedlist dari ekspresi yang diinputkan
	fs : linkedlist yang berisi node dengan nilai operator dan operand yang sudah terpisah */
void infixLinkedList(char *infix, address *front, address *rear);

/* is : prosedur untuk membuat linkedlist dari ekspresi yang diinputkan dalam bentuk postfix
	fs : linkedlist yang berisi node dengan nilai operator dan operand yang sudah terpisah dengan bentuk postfix */
void infixToPostfix(address frontIn, address *front, address *rear);

/* is : prosedur untuk mengubah'\n' menjadi spasi dari string yang berisi ekspresi perhitungan
	fs : mengembalikan string atau kumpulan char berisi ekspresi perhitungan tanpa \n */
void gantiNewLineJadiSpasi(char *s);

/* is : fungsi menghitung ekspresi matematika dari binary tree
	fs : mengembalikan nilai hasil dari perhitungan atau nilai pada root binarytree */
double hitungPostfix(addressTree *root);

//}

/* is : prosedur untuk membuat binary tree dari linkedlist postfix
	fs : binary tree dengan kumpulan operator dan operand
	referensi : membuat sendiri */
void treePostFix(addressTree *root, address rear);

/* is : prosedur untuk menghapus node bertipe 'tree'  pada binary tree
	fs : menghasilkan binarytree dengan node yang diinginkan terhapus
	referensi : menghapus node pada mata kuliah SDA */
void DeAlokasiTree (addressTree P);

/* is : fungsi untuk mengembalikan nilai dan menghapus node bertipe 'tree' yang merupakan anak kanan sebuah node pada binary tree
	fs : mengembalikan nilai pada node tersebut dan pointer anak kanan dari parent node tersebut menunjuk null 
	referensi : membuat sendiri*/
double popRight(addressTree *parent);

/* is : fungsi untuk mengembalikan nilai dan menghapus node bertipe 'tree' yang merupakan anak kiri sebuah node pada binary tree
	fs : mengembalikan nilai pada node tersebut dan pointer anak kiri dari parent node tersebut menunjuk null 
	referensi : membuat sendiri*/
double popLeft(addressTree *parent);

/* is : prosedur untuk mengganti nilai dari node yang dinginkan
	fs : nilai dari node yang diinginkan (parent) sebelumnya berisi operator berubah menjadi hasil dari perhitungan anak kiri dan anak kanan
	referensi : membuat sendiri*/
void push(double d, addressTree *parent);

/* is : prosedur untuk menambah node bertipe 'tElmtList' dari linkedlist dengan metode stack sebagai penyimpanan sementara operator
	fs : linkedlist yang ditambah node tersebut dengan node tersebut ditunjuk oleh pointer top 
	referensi : membuat sendiri*/
void pushChar(infotype c, address *top);


// tambahan (digunakan untuk fitur lain-lain)
void InputBilFloat(float *bil);

void PilihMenu(int *pilih);

void InputBilInt(int *bil);

void TampilHasilFloat(float hasil, char nama[]);

void TampilHasilInt(int hasil, char nama[]);

void CalStd();

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

//node linkedlist info bertipe double

/* is : fungsi untuk membuat node yang bertipe 'tempNum'
	fs : menghasilkan node yang bertipe 'tempNum'  
	referensi : pembuatan node pada mata kuliah SDA */
//addressNum AlokasiNum(double X);

/* is : fungsi untuk membuat linkedlist dengan menambahkan node baru pada rear
	fs : menghasilkan linkedlist dengan node yang bertipe 'tempNum' 
	referensi : pembuatan linkedlist pada mata kuliah SDA */
//void InsVLastNum(addressNum *top, double X);

//void InsertLastNum (addressNum *top, addressNum P);

/* is : fungsi untuk menghapus node bertipe 'tempNum'  pada linkedlist
	fs : menghasilkan linkedlist dengan node yang diinginkan terhapus
	referensi : menghapus node linkedlist pada mata kuliah SDA */
//void DelVLastNum (addressNum *top );

//void DeAlokasiNum (addressNum P);

/* is : fungsi untuk mengembalikan nilai dan menghapus node bertipe 'tempNum' yang paling atas dari linkedlist sebagai penyimpanan sementara operand
	fs : mengembalikan nilai operand yang paling atas pada linkedlist dan pointer menunjuk node sebelumnya  */
//double popNum(addressNum *top);

#endif
