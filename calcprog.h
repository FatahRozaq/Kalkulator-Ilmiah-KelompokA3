/*
File Name		: calcprog.h
Description		: Tugas Proyek 2 
Author			: Athalie Aurora Puspanegara
*/


/* ========== Header ========== */

#ifndef calcprog_H
#define calcprog_H

#define MAX 100

#include <stdio.h>
#include <math.h>

/* ======= End of Header ====== */

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





// ==================


void header();
void headcalprog();
void BarDes();
void athalie();
void Fullmode();

#endif