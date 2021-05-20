/*22.Tuliskan algoritma yang membaca:
a)Bilangan  bulat  positif  dalam  rentang  1  sd  10.  
Lalu  konversikan  kedalam  angkaromawai.
b)Kembangan  algoritma  diatas  (a)  di  atas  sehingga  
dapat  mengkonversi  bilangan bulat positif ke dalam angka romawi*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int a,b,c,d,e;

    p("Masukkan sebuah angka = ");
    s("%d", &a);

    b = a%10;
    c = (a/10)%10;
    d = (a/100)%10;
    e = (a/1000)%10;

    switch (e) {
        case 1 : p("M");break;
        case 2 : p("MM");break;
        case 3 : p("MMM");break;
    }

    if (d>5 && d<9) {
        p("D");
    }

    switch (d) {
        case 1 : case 6 : p("C");break;
        case 2 : case 7 : p("CC");break;
        case 3 : case 8 : p("CCC");break;
        case 4 : p("CD");break;
        case 5 : p("D");break;
        case 9 : p("CM");break;
    }

    if (c>5 && c<9) {
        p("L");
    }

    switch (c) {
        case 1 : case 6 : p("X");break;
        case 2 : case 7 : p("XX");break;
        case 3 : case 8 : p("XXX");break;
        case 4 : p("XL");break;
        case 5 : p("L");break;
        case 9 : p("XC");break;
    }

    if (b>5 && b<9) {
        p("V");
    }

    switch (b) {
        case 1 : case 6 : p("I");break;
        case 2 : case 7 : p("II");break;
        case 3 : case 8 : p("III");break;
        case 4 : p("IV");break;
        case 5 : p("V");break;
        case 9 : p("IX");break;
    }
    
    return 0;
}