// Header Aurora

#ifndef Aurora_H
#define Aurora_H
#define MAX 100

#include <stdio.h>


void CalProg();

double Pembagian(double bil1, double bil2);

double akar(double bil, double pangkat);

double Fabs(double num);

double Powku(double x, double y);

double fabs(double x);
double floor(double x);
double fmod(double x, double y);



void deretAritmatika();

void konvertvolume();

double hitungVolume(double value, int menu);


// Divider
void header();
void headcalprog();

void BarDes();
void BarBin();
void BarOkta();
void BarHexa();

void Barwal();

void BarMenu();
void BarmenuUtama();

void BacktoMain();

void athalie();
void Fullmode();









































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





#endif
