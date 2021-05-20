/*6.
Pasar swalayan x memberikan diskon harga bagi pembeli yang nilai total 
belanjanya lebih dari Rp 100.000. Tulislah algoritma untuk menentukan 
harga belanja setelah dikurangi diskon. Data masukan adalah nilai total 
belanja pembeli, sedangkan keluarannya adalah diskon harga dan nilai belanja 
setelah dikurangi diskon.
*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int belanja;

    p("Masukkan total belanja dari pembeli = ");
    s("%d",&belanja);

    p("-------------------------------------\n");
    if (belanja>=100000){
        int diskon = 10*belanja/100;
        p("Dapat diskon %d\n", diskon);
        int total = belanja-diskon;
        p("Total belanja setelah diskon = %d\n", total);
    } else {
        p("Total belanja adalah %d\n",belanja);
        p("Tanpa diskon\n");
    }
    p("-------------------------------------\n");
    
    return 0;
}