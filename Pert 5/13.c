#include <stdio.h>

#define p printf
#define s scanf

void segitiga(int a, int b, int c)
{
    if (c*c>(b*b)+(a*a)){
        p("Segitiga tumpul");
    } else if (c*c==(b*b)+(a*a)){
        p("Segitiga siku-siku");
    } else if (c*c<(b*b)+(a*a)){
        p("Segitiga lancip");
    }
}

int main(){
    int a,b,c;

    p("Masukkan panjang sisi a = ");
    s("%d",&a);
    p("Masukkan panjang sisi b = ");
    s("%d",&b);
    p("Masukkan panjang sisi c = ");
    s("%d",&c);

    segitiga(a,b,c);
    
    return 0;
}