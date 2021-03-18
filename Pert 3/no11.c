/*11.Menentukan  Bilangan  terbesar  dari  tiga  buah  bilangan  yang 
diinput  dari  alat  masukan  x,y dan z. Dengan asumsi x,y dan z nilainya berbeda*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int x,y,z;

    p("Masukkan angka ke-1 = ");
    s("%d",&x);
    p("Masukkan angka ke-2 = ");
    s("%d",&y);
    p("Masukkan angka ke-3 = ");
    s("%d",&z);

    p("------------------------------------------\n");
    if (x != y && y != z && x != z){
        if (x>y){
            if (x>z){
                p("Angka ke-1 (%d) adalah angka terbesar\n",x);
            } else {
                p("Angka ke-3 (%d) adalah angka terbesar\n",z);
            }
        } else {
            if (y>z){
                p("Angka ke-2 (%d) adalah angka terbesar\n",y);
            } else {
                p("Angka ke-3 (%d) adalah angka terbesar\n",z);
            }
        }

    } else {
        p("Angka tidak boleh sama\n");
    }
    p("------------------------------------------\n");

    
    return 0;
}
