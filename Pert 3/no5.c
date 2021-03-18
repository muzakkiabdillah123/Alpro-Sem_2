/*5.
Buatlah algoritma yang membaca sebuah bilangan bulat positif lalu menentukan 
apakah bilangan tersebut merupakan kelipatan 4.
*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int a;

    p("Masukkan sebuah angka = ");
    s("%d",&a);

    if (a%4==0 && a>0){
        p("Angka %d merupakan kelipatan 4\n",a);
    } else {
        p("Angka %d bukan keliapatan 4",a);
    }
    
    return 0;
}