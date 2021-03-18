/*3.
Buatlah algoritma dalam bahasa C, menerima masukan berupa sebuah bilangan ril, 
periksa apakah angka didepan koma dan angka dibelakang koma adalah kelipatan 
3 (angka dibelakang koma pasti 2 angka).
*/
//coba 3

#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int a;
    int depan,belakang;

    p("Masukkan sebuah bilangan ril : ");
    s("%f",&a);

    depan = a;
    belakang = (a-depan)*100;

    p("a = %f\n",a);
    p("dep = %d\n",depan);
    p("bel = %d\n",belakang);

    int sisaDepan = depan%3;
    int sisaBelakang = belakang%3;

    p("---------------------------------------------------\n");
    if (sisaDepan == 0 && depan != 0){
        p("Angka didepan koma (%d) merupakan kelipatan 3\n",depan);
    }
    else {
        p("Angka didepan koma (%d) BUKAN kelipatan 3\n",depan);
    }

    if (sisaBelakang == 0 && belakang != 0){
        p("Angka dibelakang koma (%d) merupakan kelipatan 3\n",belakang);
    }
    else {
        p("Angka dibelakang koma (%d) BUKAN kelipatan 3\n",belakang);
    }
    p("---------------------------------------------------\n");
    
    return 0;
}