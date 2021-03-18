/*1.
Buatlah algoritma dalam bahasa C, yang menerima inputan tiga buah karakter,
 periksa apakah karakter memiliki urutan konsonan-vokal-konsonan 
 (masukan adalah sebuah huruf dan merupakan huruf kecil).
*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    char h1, h2, h3;
    char A,I,U,E,O;

    p("Masukan 3 huruf yang dipisahkan oleh sebuah spasi ");
	s("%c %c %c", &h1, &h2, &h3);

    A = 'a';
    I = 'i';
    U = 'u';
    E = 'e';
    O = 'o';

    if ((h1 != A && h1 != I && h1 != U && h1 != E && h1 != O) && 
    (h2 == A || h2 == I || h2 == U || h2 == E || h2 == O) && 
    (h3 != A && h3 != I && h3 != U && h3 != E && h3 != O)){
	p("Konsonan-vokal-konsonan");
    }
    else
	p("Bukan Konsonan-vokal-konsonan");
    return 0;
}