#include <stdio.h>

int main()
{
    // Kamus
    int n, i, j;

    // Program
    printf("Masukkan Angka: ");
    scanf("%d", &n);

    if (n%2 != 0) {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++) {
                if (i == j || i + j == n + 1) {
                    printf("*");
                } else {
                    printf("  ");
                }            
            }
            printf("\n");    
        }
    }

    return 0;
}
