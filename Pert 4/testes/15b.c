#include <stdio.h>

int main()
{
    // Kamus
    int n, i, j;

    // Program
    printf("Masukkan Angka: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--) {
            printf("  ");
        }
        printf("*\n");    
    }

    return 0;
}
