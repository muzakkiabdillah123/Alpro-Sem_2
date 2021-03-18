/*
12.Buatlah  algoritma  dalam  bahasa  C,  menghitung  Pembagi  Bersama  Terbesar  
dari  dua  buah bilangan a dan b yang diinputdari alat masukan*/

#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int a,b;
    int sisa;

    p("Masukkan angka pertama : ");
    s("%d",&a);  //misal 12
    p("Masukkan angka kedua : ");
    s("%d",&b);  //misal 16
    
    while((sisa = a % b) != 0) { //12%16 >> 16%12 >> 12%4 = 0 >> end while
        a = b;  //a jadi 16 >> a jadi 12
        b = sisa; // b jadi 12 >> b jadi 4
    }
    
    p("Hasil %d", b);  //b = 4

    return 0;
}