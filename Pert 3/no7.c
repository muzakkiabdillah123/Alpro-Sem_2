/*7.Buatlah  algoritma  dalam  bahasa  C,  yang  menerima  masukan  tiga  buah  
sisi,  dimana  jika semua sisi sama maka tampilkan “Termasuk Kubus”, jika ada sisi 
yang tidak sama maka tampilkan bukan kubus*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int sisi1,sisi2,sisi3;
    
    p("Masukkan panjang sisi ke-1 = ");
    s("%d",&sisi1);
    p("Masukkan panjang sisi ke-2 = ");
    s("%d",&sisi2);
    p("Masukkan panjang sisi ke-3 = ");
    s("%d",&sisi3);
    
    p("------------------------------------\n");
    if (sisi1==sisi2 && sisi2==sisi3){
        p("Termasuk Kubus\n");
    } else {
        p("Bukan Kubus\n");
    }
    p("------------------------------------\n");

    return 0;
}