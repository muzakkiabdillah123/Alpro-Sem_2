/*4. Buatlah algoritma dalam bahasa C, mengkalikan kode ASCII dari karakter âAâ dan karakter âBâ!*/

#include <stdio.h>
#define p printf
#define r return

int main(){
    char a = 'A';
    char b = 'B';

    p("--------------------------------------------------------\n");
    p("Hasil perkalian dari %i (Kode ASCII 'A') dengan %i (Kode ASCII 'B') adalah %i\n", a, b, a*b);
    p("--------------------------------------------------------\n");
    r 0;
}