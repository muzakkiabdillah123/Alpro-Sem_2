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

    switch (d) {
        case 1 : p("C");break;
        case 2 : p("CC");break;
        case 3 : p("CCC");break;
        case 4 : p("CD");break;
        case 5 : p("D");break;
        case 6 : p("DC");break;
        case 7 : p("DCC");break;
        case 8 : p("DCCC");break;
        case 9 : p("CM");break;
    }

    switch (c) {
        case 1 : p("X");break;
        case 2 : p("XX");break;
        case 3 : p("XXX");break;
        case 4 : p("XL");break;
        case 5 : p("L");break;
        case 6 : p("LX");break;
        case 7 : p("LXX");break;
        case 8 : p("LXXX");break;
        case 9 : p("XC");break;
    }

    switch (b) {
        case 1 : p("I");break;
        case 2 : p("II");break;
        case 3 : p("III");break;
        case 4 : p("IV");break;
        case 5 : p("V");break;
        case 6 : p("VI");break;
        case 7 : p("VII");break;
        case 8 : p("VIII");break;
        case 9 : p("IX");break;
        case 10: p("X");break;
    }
    
    return 0;
}