/*15.
Suatu pekerjaan bisa diselesaikan oleh 8 pekerja dalam waktu 20 hari. Jika diasumsikan 
kecepatan setiap pekerja sama, maka 5 orang pekerja bisa menyelesaikan pekerjaan tersebut 
dalam waktu
Contoh Masukan
Pekerja lama (orang) = 8
Pekerja baru (orang) = 5
Waktu (hari) = 20
Contoh Keluaran
Waktu penyelesaian pekerjaan (hari) = 32
*/

#include <stdio.h>
#define p printf
#define r return
#define s scanf

int main(){
    int lama, baru, wLama;

    p("Pekerja lama (orang) = ");
    s("%d", &lama);
    p("Pekerja baru (orang) = ");
    s("%d", &baru);
    p("Waktu (hari) = ");
    s("%d", &wLama);

    int wBaru = lama*wLama/baru;

    p("---------------------------------------------------\n");
    p("Waktu penyelesaian pekerjaan (hari) = %d\n", wBaru);
    p("---------------------------------------------------\n");
    
    r 0;
}