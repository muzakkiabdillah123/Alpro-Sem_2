/*14. Bu Raisa bersepeda dari rumah ke pasar dengan kecepatan 130 meter/menit. Ia 
tiba di pasar dalam waktu 15 menit. Berapa meter jarak rumah Bu Raisa dari pasar?
Contoh Masukan
Waktu (menit) = 15
kecepatan (meter/menit) = 130
Contoh Keluaran
Jarak (meter) = 1950
*/

#include <stdio.h>
#define p printf
#define r return
#define s scanf

int main(){
    int wak;
    int kec;
    
    p("Waktu (Menit) = ");
    s("%d", &wak);
    p("Kecepatan (Meter/Menit) = ");
    s("%d", &kec);

    int jar = wak*kec;

    p("---------------------------\n");
    p("Jarak (meter) = %d\n", jar);
    p("---------------------------\n");
    
    r 0;
}