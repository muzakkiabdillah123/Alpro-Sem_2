/*8.Buatlah   algoritma dalam   bahasa   C, yang   menerima   tiga   buah   
angka   masukan   dan menampilkan nilai yang paling besar dari ketiga masukan.*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int a,b,c;

    p("Masukkan angka ke-1 = ");
    s("%d",&a);
    p("Masukkan angka ke-2 = ");
    s("%d",&b);
    p("Masukkan angka ke-3 = ");
    s("%d",&c);

    p("------------------------------------------\n");
    if (a>b){
        if (a>c){
            p("Angka (%d) adalah angka terbesar\n",a);
        } else {
            p("Angka (%d) adalah angka terbesar\n",c);
        }
    } else {
        if (b>c){
            p("Angka (%d) adalah angka terbesar\n",b);
        } else {
            p("Angka (%d) adalah angka terbesar\n",c);
        }
    }
    p("------------------------------------------\n");

    return 0;
}
