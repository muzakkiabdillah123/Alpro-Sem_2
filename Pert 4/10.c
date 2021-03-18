/*
10.Buatlah algoritma dalam bahasa C,menulis konversi bilangan bulat positif 
ke angka romawi menggunakan perulangan contoh :
Contoh masukan
Masukan banyak bilangan : 5
Contoh keluaran
1 dikonversi ke angka romawi I
2 dikonversi ke angka romawi II
3 dikonversi ke angka romawi III
4 dikonversi ke angka romawi IV
5 dikonversi ke angka romawi V
*/


#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int masukan;
    int b,c,d,e;
    int i;

    p("Masukkan banyak bilangan = ");
    s("%d",&masukan);

    if (masukan>=1) {
        for (i = 1; i<=masukan ; i++) {

        p("%d dikonversi ke angka romawi = ",i);
        b = i%10;
        c = (i/10)%10;
        d = (i/100)%10;
        e = (i/1000)%10;

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
        p("\n");
        }
    } else {
        p("Masukkan angka bulat positif\n");
    }
    
    return 0;
}