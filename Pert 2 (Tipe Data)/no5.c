/*5. Buatlah algoritma dalam bahasa C, menghitung kode ASCII dari karakter didalam rumus 
((‘2’*‘w’)+(‘z’+’3’)/’X’)*/

#include <stdio.h>
#define p printf
#define r return

int main(){
    char a = '2';
    char b = 'w';
    char c = 'z';
    char d = '3';
    char e = 'X';

    p("--------------------------------------\n");
    p("((%i x %i) + (%i + %i) / %i) = %i\n", a, b, c, d, e, ((a*b)+(c+d)/e));
    p("--------------------------------------\n");

    r 0;
}