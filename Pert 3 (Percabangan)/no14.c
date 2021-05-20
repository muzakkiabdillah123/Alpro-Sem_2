/*14.Tulislah algoritma yang membaca panjang (integer) tiga buah sisi sebuah segitiga, a, b, dan c,  
yang  dalam  hal  ini  a  <=  b  <=  c,  lalu  menentukan  apakah  ketiga  sisi  tersebut  membentuk 
segitiga   siku –siku,   segitiga   lancip,   atau   segitiga   tumpul   (Petunjuk   gunakan   
hukum Phytagoras).
*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int a,b,c;

    p("Masukkan panjang sisi a = ");
    s("%d",&a);
    p("Masukkan panjang sisi b = ");
    s("%d",&b);
    p("Masukkan panjang sisi c = ");
    s("%d",&c);

    if (c*c>(b*b)+(a*a)){
        p("Segitiga tumpul");
    } else if (c*c==(b*b)+(a*a)){
        p("Segitiga siku-siku");
    }
    else if (c*c<(b*b)+(a*a)){
        p("Segitiga lancip");
    }
    return 0;
}