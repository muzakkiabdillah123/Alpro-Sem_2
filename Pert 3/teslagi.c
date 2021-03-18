/*
x,y

kuadran mana

3,5 ada dimana?
*/


#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int x,y;
    int koordinat;

    p("Masukkan koordinat titik = ");
    s("%d,%d",&x, &y);

    if (x>=0) {
        if (y>=0) {
            koordinat = 1;
        } else {
            koordinat = 4;
        }
    } else {
        if (y>=0) {
            koordinat = 2;
        } else {
            koordinat = 3;
        }
    }

    p("Titik tersebut ada di kuadran %d", koordinat);
    
    return 0;
}