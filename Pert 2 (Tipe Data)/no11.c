/*11. Buatlah algoritma dalam bahasa C, saya akan diberi hadiah jika rangking 1 di kelas, 
dan naik kelas*/

#include <stdio.h>
#define p printf
#define r return
#define s scanf

int main (){
    int naikKelas;
    int ranking1;

    p("Apakah kamu naik kelas? (Ya = 1, Tidak = 0)\nJawabanmu : ");
    s("%i", &naikKelas);

    p("Apakah kamu ranking 1? (Ya = 1, Tidak = 0)\nJawabanmu : ");
    s("%i", &ranking1);

    p("Saya akan diberi hadiah = (%d)\n", naikKelas && ranking1);
    p("Ket. 1 = \"Ya\", 0 = \"Tidak\"\n");
        
    r 0;
}

