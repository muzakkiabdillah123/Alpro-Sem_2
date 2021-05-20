/*
6.Buatlah algoritma dalam bahasa C, menampilkan banyaknya bilangan ganjil dari batasAwal dan 
batasAkhir yang diinput dari alat masukan.
*/

#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int a,b,total;
    
    p("Masukkan angka pertama = ");
    s("%d",&a);
    p("Masukkan angka terakhir = ");
    s("%d",&b);


    while(a<=b) {
        if (a%2 != 0) {
            p("%d ",a);
            total = total+1;
        }
        a++;
    }
    p("\nBanyaknya angka ganjil ada %d",total);
    
    return 0;
}