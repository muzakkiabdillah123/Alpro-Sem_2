#include <stdio.h>

int tabInt[10] = {15, 18, 23, 28, 28, 34, 67, 67, 89, 98};

int main()
{
    int i, j, bil_cari, k, ketemu;
    i = 0; //batas awal
    j = 9; //batas akhir
    bil_cari = 89;
    ketemu = 0;

    while ((ketemu == 0) && (i <= j))
    {
        k = (i + j) / 2;

        if (tabInt[k] == bil_cari)
        {
            ketemu = 1;
        }
        else
        {
            if (tabInt[k] > bil_cari)
            {
                j = k - 1; //Ubah batas kanan
            }
            else
            {
                i = k + 1; //Ubah batas kiri
            }
        }
    }

    if (ketemu == 1)
    {
        printf("Data cari %d, ditemukan ada pada array index ke - %d\n", bil_cari, i);
    }
    else
    {
        printf("Data tidak ditemukan\n");
    }

    return 0;
}