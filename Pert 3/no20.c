/*20.Menentukan Kalimat dari bilangan 1-99 yang diinput*/


#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int a;

    p("Masukkan angka = ");
    s("%d",&a);

    if (a<20){
        switch (a){
            case 1 : p("SATU\n");break;
            case 2 : case 12 : p("DUA");break;
            case 3 : case 13 : p("TIGA");break;
            case 4 : case 14 : p("EMPAT");break;
            case 5 : case 15 : p("LIMA");break;
            case 6 : case 16 : p("ENAM");break;
            case 7 : case 17 : p("TUJUH");break;
            case 8 : case 18 : p("DELAPAN");break;
            case 9 : case 19 : p("SEMBILAN");break;
            case 10: p("SEPULUH");break;
            case 11: p("SEBELAS");break;
        }
        if (a<20 && a>11){
            p(" BELAS\n");
        }
    } else if (a>=20 && a<=99){
        switch (a) {
            case 20 ... 29 : p("DUA PULUH");break;
            case 30 ... 39 : p("TIGA PULUH");break;
            case 40 ... 49 : p("EMPAT PULUH");break;
            case 50 ... 59 : p("LIMA PULUH");break;
            case 60 ... 69 : p("ENAM PULUH");break;
            case 70 ... 79 : p("TUJUH PULUH");break;
            case 80 ... 89 : p("DELAPAN PULUH");break;
            case 90 ... 99 : p("SEMBILAN PULUH");break;
        }
        int puluhan = a%10;
        if (puluhan != 0){
            switch (puluhan) {
                case 1 : p(" SATU\n");break;
                case 2 : p(" DUA\n");break;
                case 3 : p(" TIGA\n");break;
                case 4 : p(" EMPAT\n");break;
                case 5 : p(" LIMA\n");break;
                case 6 : p(" ENAM\n");break;
                case 7 : p(" TUJUH\n");break;
                case 8 : p(" DELAPAN\n");break;
                case 9 : p(" SEMBILAN\n");break;
            }
        }
    } else {
        p("Lebih dari 99\n");
    }
    return 0;
}