#include <stdio.h>

#define p printf
#define s scanf

void faktorial(int a)
{
    int i, jumlah;

    i = 1;
    jumlah = 1;
    
    if (a>=1) {
        p("%d! = ",a);

        while(a>=i+1) {     //i+1 karena angka terakhir tidak ada tanda *
            p("%d * ",a);
            jumlah = jumlah*a;
            a--;
        }
        
        p("%d = %d",a,jumlah);  //a terakhir di print disini agar tidak ada tanda *

    } else if (a == 0) {
        p("%d! = 1\n",a);

    } else {
        p("Masukkan angka >= 0\n");
    }
}

int main(){
    int a;
    
    p("Masukkan angka untuk difaktorialkan = ");
    s("%d", &a);

    faktorial(a);

    return 0;
}