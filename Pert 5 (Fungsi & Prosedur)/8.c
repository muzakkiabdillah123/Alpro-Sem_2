#include <stdio.h>

#define p printf
#define s scanf

void kubus(int a, int b, int c)
{
    p("------------------------------------\n");
    if (a==b && b==c){
        p("Termasuk Kubus\n");
    } else {
        p("Bukan Kubus\n");
    }
    p("------------------------------------\n");
}

int main(){
    int sisi1,sisi2,sisi3;

    p("Masukkan panjang sisi ke-1 = ");
    s("%d",&sisi1);
    p("Masukkan panjang sisi ke-2 = ");
    s("%d",&sisi2);
    p("Masukkan panjang sisi ke-3 = ");
    s("%d",&sisi3);

    kubus(sisi1,sisi2,sisi3);
    
    return 0;
}