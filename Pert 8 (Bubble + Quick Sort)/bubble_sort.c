#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabInt[10] = {78, 56, 34, 12, 34, 23, 89, 30, 23, 80};
    int i, temp, tukar;
    int jml_tukar = 0;

    do
    {
        tukar = 0;
        for (i = 0; i < (10 - 1); i++)
        {
            if (tabInt[i] > tabInt[i + 1])
            {
                temp = tabInt[i];
                tabInt[i] = tabInt[i + 1];
                tabInt[i + 1] = temp;
                tukar = 1;
                jml_tukar++;
            }
        }

    } while (tukar == 1);

    //Untuk Cetak
    for (i = 0; i < 10; i++)
    {
        printf("%d ", tabInt[i]);
    }
    printf("\nJumlah penukaran : %d", jml_tukar);

    return 0;
}