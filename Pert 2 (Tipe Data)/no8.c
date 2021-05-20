/*8. Buatlah algoritma dalam bahasa C, yang menerima inputan derajat celcius dan 
menampilkan hasil bilangan masukan menjadi derajat reamur!( reamur =>(4*celcius)/5))*/

#include <stdio.h>
#define p printf
#define r return

int main(){
    float a;
    p("Masukkan angka dalam celcius = ");
    scanf("%f", &a);
    float rea = (4*a)/5;

    p("Hasil konversi dari %.0f derajat celcius ke reamur hasilnya = %.2f", a, rea);

    r 0;
}