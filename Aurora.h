// Header Aurora

#ifndef Aurora_H
#define Aurora_H
#define MAX 100

#include <stdio.h>
#include <math.h>

void CalProg();

typedef struct {
	char tanggal[20];
	char waktu[12];
	
	char desimal[MAX];
	char biner[MAX];
	char okta[MAX];
	char hexa[MAX];
	char convert;
}Histori;

void Desimal();
void DesBin(int des, char* hist);
void DesOkt(int des, char* hist);
void DesHex(int dec, char* hist);

void Biner();
int BinDes(char* hist);

void Okta();
int OktDes(char* hist);

void Hexa();
int HexDes(char* hist);

float Pembagian(float bil1, float bil2);


void eksponen();
void deretAritmatika();

// Divider
void header();
void headcalprog();

void BarDes();
void BarBin();
void BarOkta();
void BarHexa();

void BarMenu();
void BarmenuUtama();

void BacktoMain();

void athalie();
void Fullmode();


#endif
