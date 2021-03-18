/*13.Tulislah algoritma membaca tigabuah bilangan bulat, lalu mengurutkan tiga buah 
bilangan tersebut  dari  nilai  yang  kecil  ke  nilai  yang  besar.  Keluaran  adalah  
tiga  buah  bilangan  yang terurut.*/


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
        if (b>c){
            p("Urutan dari yang terkecil : %d %d %d\n", c, b, a);
        } else if (c>a) {
            p("Urutan dari yang terkecil : %d %d %d\n", b, a, c);
        } else if (a>c){
            p("Urutan dari yang terkecil : %d %d %d\n", b, c, a);
        }
    } else if (b>a) {
        if (a>c){
            p("Urutan dari yang terkecil : %d %d %d\n", c, a, b);
        } else if (c>b) {
            p("Urutan dari yang terkecil : %d %d %d\n", a, b, c);
        } else if (b>c){
            p("Urutan dari yang terkecil : %d %d %d\n",a, c, b);
        }
    }


    p("------------------------------------------\n");
    
    return 0;
}