/*6. Buatlah algoritma dalam bahasa C, mengkonversi dari mil ke kilometer dengan penetapan 
nilai mil ke kilometer (1.609 ditetapkan dalam konstanta)*/

#include <stdio.h>
#define mil 1.609
#define p printf
#define r return

int main(){
    int a;
    p("Masukkan angka dalam mil = ");
    scanf("%d", &a);

    p("-------------------------------------\n");
    p("%d mil sama dengan %f kilometer\n", a, a*mil);
    p("-------------------------------------\n");

    r 0;
}