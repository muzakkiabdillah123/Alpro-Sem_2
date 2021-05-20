#include <stdio.h>

#define p printf
#define s scanf

//fungsi
int fpb(int a, int b)
{
    int sisa;

    while((sisa = a % b) != 0) { //12%16 >> 16%12 >> 12%4 = 0 >> end while
        a = b;  //a jadi 16 >> a jadi 12
        b = sisa; // b jadi 12 >> b jadi 4
    }
    return(b);  //b = 4
}

int main(){
    int a,b,hasil;

    p("Masukkan angka pertama : ");
    s("%d",&a);  //misal 12
    p("Masukkan angka kedua : ");
    s("%d",&b);  //misal 16

    hasil = fpb(a,b);
    p("Hasilnya adalah %d",hasil);
    
    return 0;
}