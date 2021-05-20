/*3. Buatlah algoritma dalam bahasa C, menjumlahkan kode ASCII dari karakter ‘1’ dan karakter ‘2’!*/

#include <stdio.h>
#define r return
#define p printf

int main(){
    char a= '1';
    char b= '2';

    p("--------------------------------------------------------\n");
    p("Hasil penjumlahan karakter %i (Kode ASCII '%c') dengan %i (Kode ASCII '%c') adalah %i\n", a, a, b, b, a+b);
    p("--------------------------------------------------------\n");
    r 0;
}