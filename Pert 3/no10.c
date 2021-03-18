/*10.Menentukan nilai  indeks  akhir  mahasiswa  A,B,C,D  atau  E  berdasarkan  
Nilai  Akhir  (NA) dari perihitungan komponen nilai UTS,UAS dan Tugas, dengan 
bobot nilai berturut-turut adalah 35%,45% dan 20%. Dengan ketentuan sebagai berikut:
A Jika 80<=NA<=100
B Jika 70<=NA<80
C Jika 50<=NA<70
D Jika 40<=NA<50
E Jika NA<40
*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    float uts,uas,tugas;

    p("Masukkan nilai uts = ");
    s("%f",&uts);
    p("Masukkan nilai uas = ");
    s("%f",&uas);
    p("Masukkan nilai tugas = ");
    s("%f",&tugas);

    float nilai_uts = 0.35*uts;
    float nilai_uas = 0.45*uas;
    float nilai_tugas = 0.2*tugas;

    p("Nilai setelah pembobotan = %.2f %.2f %.2f\n",nilai_uts, nilai_uas, nilai_tugas);

    float NA = nilai_uts + nilai_uas + nilai_tugas;

    p("Jumlah nilai : %f\n",NA);

    if (NA>=80 && NA<=100){
        p("Anda dapat nilai A\n");
    } else if (NA>=70 && NA<80){
        p("Anda dapat nilai B\n");
    } else if (NA>=50 && NA<70){
        p("Anda dapat nilai C\n");
    } else if (NA>=40 && NA<50){
        p("Anda dapat nilai D\n");
    } else if (NA<40){
        p("Anda dapat nilai E\n");
    }

    return 0;
}