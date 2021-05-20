/*
2.Buatlah prosedur  atau fungsi algoritma  dalam  bahasa  C,menampilkan bilangan  
dari batasAwal sampai dengan batasAkhir yang diinput dari alat masukan dan 
batasAwal<=batasAkhir berupa bilangan >0.
*/

#include <stdio.h>

#define p printf
#define s scanf

void bilangan(int a, int b)
{
    if (a<=b && a>0 && b>0) {
        while (a<=b) {
            p("%d ",a);
            a++;
        }
    } else {
        p("Masukkan angka dengan ketentuan a<=b , a>0 , b>0");
    }
}

int main(){
    int a,b;

    p("Masukkan angka pertama (a) = ");
    s("%d",&a);
    p("Masukkan angka terkahir (b) = ");
    s("%d",&b);

    bilangan(a,b);

    return 0;
}