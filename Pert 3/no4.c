/*4.
Buatlah algoritma dalam bahasa C, yang menerima masukan berupa 2 buah 
bilangan integer, jika kedua masukan adalah bilangan genap maka tampilkan 
hasil penjumlahan keduanya, jika keduanya bilangan ganjil maka tampilkan 
perkalian keduanya.
*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int a,b;

    p("Masukkan angka ke-1 = ");
    s("%d", &a);
    p("Masukkan angka ke-2 = ");
    s("%d", &b);

    p("--------------------------------------------\n");
    if (a%2==0 && b%2==0){
        int jml = a+b;
        p("Hasil penjumlahan dari %d + %d adalah %d\n", a,b,jml);
    } else if(a%2 != 0 && b%2 != 0) {
        int kal = a*b;
        p("Hasil perkalian dari %d x %d adalah %d\n", a,b,kal);
    } else {
        p("Angka tersebut bukan genap keduanya dan bukan ganjil keduanya\n");
    }
    p("--------------------------------------------\n");
    
    return 0;
}