/*
7.Buatlah algoritma dalam   bahasa   C, menampilkan   jumlah   deret   bilangan   
ganjil   dari batasAwal dan batasAkhir yang diinput dari alat masukan
*/

#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int a,b,jumlah;
    
    p("Masukkan angka pertama = ");
    s("%d",&a);
    p("Masukkan angka terakhir = ");
    s("%d",&b);


    while(a<=b) {
        if (a%2 != 0) {
            p("%d ",a);
            jumlah = jumlah+a;
        }
        a++;
    }
    p("\nJumlah dari semua angka ganjil = %d",jumlah);
    
    return 0;
}