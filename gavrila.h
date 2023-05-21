#ifndef GAVRILA_H
#define GAVRILA_H
#define e 2.7182818284

//spesifikasi

double Pengurangan(double bil1, double bil2);
//IS: untuk melakukan pengurangan
//FS: hasil dari operasi pengurangan
//referensi: -

void LogNatural();
//IS: untuk menginput angka untuk operasi logaritma natural 
//FS: hasil dari operasi logaritma natural
//referensi: -

double logaritmanatural(double x);
//IS: melakukan penghitungan logaritma natural
//FS: hasil dari operasi logaritma natural
//referensi: -

double ln(double x);
//fungsi: melakukan penghitungan logaritma natural
//hasil: hasil dari operasi logaritma natural
//referensi: -

void Faktorial();
//fungsi: untuk menyimpan inputan angka dan menampilkan hasil
//hasil: menampilkan hasil dari operasi faktorial
//referensi: -

double hitungFaktorial(double bil);
//fungsi: melakukan penghitungan faktorial
//hasil: hasil dari operasi faktorial
//referensi: -

void turunan();
//fungsi: untuk melakukan operasi turunan
//hasil: menampilkan hasil dari operasi turunan
//kontribusi: Gavrila 
//referensi: https://www.diffa.my.id/2020/07/Program-Turunan-Cpp.html

void konvertDaya();
//fungsi: melakukan konvert daya
//hasil: hasil dari konvert daya
//referensi: -

double Hitungdaya(int satuan1, int satuan2, double daya);
//fungsi: melakukan konvert daya
//hasil: hasil dari konvert daya
//referensi: -

//void arcsin();

double hitungarcsin(double x);
//fungsi: melakukan operasi arcsin
//hasil: hasil operasi arcsin
//referensi: -

//void arccos();

double hitungarccos(double x);
//fungsi: melakukan operasi arccos
//hasil: hasil operasi arccos
//referensi: -

//void arctan();

double hitungarctan(double x);
//fungsi: melakukan operasi arctan
//hasil: hasil operasi arctan
//referensi: -

double hitungarccsc(double x);
//fungsi: melakukan operasi arccsc
//hasil: hasil operasi arccsc
//referensi: -

double hitungarcsec(double x);
//fungsi: melakukan operasi arcsec
//hasil: hasil operasi arcsec
//referensi: -

double hitungarccot(double x);
//fungsi: melakukan operasi arccot
//hasil: hasil operasi arccot
//referensi: -

double toRadians(double degree);
//fungsi: mengganti derajat menjadi radian
//hasil: derajat menjadi radian
//referensi: -

double hitungsinh(double x);
//fungsi: melakukan operasi sinh
//hasil: hasil operasi sinh
//referensi: https://p2k.stekom.ac.id/ensiklopedia/Fungsi_hiperbolik

double hitungcosh(double x);
//fungsi: melakukan operasi cosh
//hasil: hasil operasi cosh
//referensi: https://p2k.stekom.ac.id/ensiklopedia/Fungsi_hiperbolik

double hitungtanh(double x);
//fungsi: melakukan operasi tanh
//hasil: hasil operasi tanh
//referensi: https://p2k.stekom.ac.id/ensiklopedia/Fungsi_hiperbolik

double hitungsech(double x);
//fungsi: melakukan operasi sech
//hasil: hasil operasi sech
//referensi: https://p2k.stekom.ac.id/ensiklopedia/Fungsi_hiperbolik

double hitungcsch(double x);
//fungsi: melakukan operasi csch
//hasil: hasil operasi csch
//referensi: https://p2k.stekom.ac.id/ensiklopedia/Fungsi_hiperbolik

double hitungcoth(double x);
//fungsi: melakukan operasi coth
//hasil: hasil operasi coth
//referensi: https://p2k.stekom.ac.id/ensiklopedia/Fungsi_hiperbolik

#endif
