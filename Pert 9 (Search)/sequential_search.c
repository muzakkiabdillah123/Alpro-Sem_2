#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nim[50];
    char nama[50];
    float nilai;
} nilaiMatkulMhs;

nilaiMatkulMhs tabelNilaiMatkulMhs[5];

void isiDataNilaiMhs(int i, char nim[], char nama[], float nilai)
{
    strcpy(tabelNilaiMatkulMhs[i].nim, nim);
    strcpy(tabelNilaiMatkulMhs[i].nama, nama);
    tabelNilaiMatkulMhs[i].nilai = nilai;
}

int main()
{
    char nim_cari[50];
    int i, ketemu;

    isiDataNilaiMhs(0, "1900676", "Asep", 64.75);
    isiDataNilaiMhs(1, "1901321", "Jaenudin", 76.11);
    isiDataNilaiMhs(2, "1902120", "Rahmat", 84.63);
    isiDataNilaiMhs(3, "1904341", "Engkus", 77.07);
    isiDataNilaiMhs(4, "1904397", "Edi", 66.70);

    strcpy(nim_cari, "1900676");
    ketemu = 0;
    i = 0;

    while ((i < 5) && (ketemu == 0))
    {
        if (strcmp(tabelNilaiMatkulMhs[i].nim, nim_cari) == 0)
        {
            ketemu = 1;
        }
        else
        {
            i = i + 1;
        }
    }

    if (ketemu == 1)
    {
        printf("NIM : %s\n", tabelNilaiMatkulMhs[i].nim);
        printf("Nama : %s\n", tabelNilaiMatkulMhs[i].nama);
        printf("Nilai : %0.2f\n", tabelNilaiMatkulMhs[i].nilai);
    }
    else
    {
        printf("Data mahasiswa yang dicari tidak ditemukan\n");
    }

    return 0;
}