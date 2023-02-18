#ifndef NISRINA_H
#define NISRINA_H

float Penjumlahan ();

float Pangkat();

void InputBil(float *bil1, float *bil2);

void TampilHasilFloat(float hasil, char nama[]);

void TampilHasilInt(int hasil, char nama[]);

void CalStfc();

void MenuCalStfc();

void CalStd();

void TataCara();

void CaraCalStd();

void Credit();

float *HitungConvertBerat(int levelAsal, int levelTujuan, int berat);

float deteksiTrigono(char *input);

float TriSin(float value);

float TriCos(float value);

float TriTan(float value);

float TriCot(float value);

float TriSec(float value);

float TriCsc(float value);

#endif
