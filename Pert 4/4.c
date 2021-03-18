/*
4.Buatlah algoritma dalam bahasa C,tulislah program untuk menampilkan anak ayam 
contoh inputkan anak ayam misalkan 10, 
maka output
Anak ayam turun 10; Mati 1 tinggal 9.
Anak ayam turun 9; Mati 1 tinggal 8. ...
Anak ayam turun 1; Mati 1 tinggal induknya
*/

#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int ayam,a;

    p("Masukkan jumlah ayam = ");
    s("%d", &ayam);

    for (a=ayam; a>=1; a--) {
        p("Anak ayam turun %d , Mati 1 tinggal ",a);
        if (a==1) {
            p("induknya\n");
        } else {
            p("%d\n",a-1);
        }
    }
    
    return 0;
}