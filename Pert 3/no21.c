/*21.Tulislah algoritma yang membaca sebuah karakter digit (‘0’ .. ’9’) lalu mengkonversinya 
menjadi nilai integer (0 .. 9). Misalnya, jika dibaca karakter ‘5’ maka nilaikonversinya  ke 
integer adalah 5. Buatlah masing –masing algoritma untuk dua keadaan berikut :
a)Karakter digit  yang dibaca diasumsikan sudah benar terletak dalam rentang ‘0’ ... ‘9’
b)Karakter yang dibaca mungkin bukan digit ‘0’ ... ‘9’ . Jika karakter yang dibaca bukan 
karakter digit, maka konversinya diasumsikan bernilai -99 
*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    char a;

    p("Masukkan karakter digit (0 s/d 9) = ");
    s("%c",&a);

    int convert;
    switch (a){
        case '0' : 
        case '1' : 
        case '2' : 
        case '3' : 
        case '4' : 
        case '5' : 
        case '6' : 
        case '7' : 
        case '8' : 
        case '9' : convert = a - '0';break;

        default : convert = -99;break;
    }
    p("Hasil konversi = %d",convert);
    
    return 0;
}