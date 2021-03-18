/*13. Pak Yaya membeli buah mangga dari petani sebesar Rp10.000 per kg. Kemudian mangga
tersebut dijual lagi dengan harga Rp15.000. Berapa persen laba atau untung yang diperoleh
Pak Yaya
Contoh Masukan
Harga beli (Rp) = 10000
Harga jual (Rp) = 15000
Contoh Keluaran
Persen laba (%) = 50
*/

#include <stdio.h>
#define p printf
#define r return
#define s scanf

int main(){
    float beli;
    float jual;
    p("Harga Beli (Rp) = ");
    s("%f",&beli);
    p("Harga Jual (Rp) = ");
    s("%f",&jual);

    float laba = ((jual-beli)/beli)*100;

    p("Persen Laba (%%) = %.0f %%",laba);
    
    r 0;
}