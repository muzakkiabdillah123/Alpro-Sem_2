#include <stdio.h>

#define p printf
#define s scanf

void bilangan(int n)
{
    int a;
    int total = 0;
    for (a=1; a<=n-1 ; a++) { //n-1 karena %d terakhir, tanda (+) diganti (=)
        p("%d + ",a);
        total = total + a;
    }
    p("%d = %d",a,total+a);  //%d terakhir tanpa tanda (+) tapi (=)
}

int main(){
    int n;

    p("Masukkan jumlah deret = ");
    s("%d",&n);

    bilangan(n);
    
    return 0;
}