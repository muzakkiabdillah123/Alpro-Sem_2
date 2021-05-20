/*7. Buatlah algoritma dalam bahasa C, yang menerima inputan derajat celcius dan 
menampilkan hasil bilangan masukan menjadi derajat fahrenhit!
(fahrenhit=>((9*celcius)/5)+32)*/

#include <stdio.h>
#define p printf
#define r return

int main(){
    float a;
    p("Masukkan angka dalam celcius = ");
    scanf("%f", &a);
    float fah = ((9*a)/5)+32;

    p("Hasil konversi dari %.0f derajat celcius ke fahrenheit hasilnya = %.2f", a, fah);

    r 0;
}