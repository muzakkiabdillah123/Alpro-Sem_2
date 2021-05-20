/*9. Buatlah algoritma dalam bahasa C, untuk menghitung luas lingkaran dengan 
inputan jari-jari yang diinput dari keyboard 
(dan nilai π dibuatkan konstanta dengan nilai 3,14)*/

#include <stdio.h>
#include <math.h>

#define p printf
#define pi 3.14 

int main(){
    int r;
    p("Masukkan panjang jari- jari dalam cm = ");
    scanf("%d", &r);
    int k = pow(r,2);
    float luas = pi*k;

    p("Luas lingkaran dengan jari- jari %d adalah %f cm^2", r, luas);

    return 0;
}