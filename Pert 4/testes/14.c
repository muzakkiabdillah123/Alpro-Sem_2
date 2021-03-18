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
        for (int j = 1; j <= n; j++) {
            if (n == 2 && (i == n && j == n)) {
                printf("*");
            } else if (i == 1 || i == n || j == 1 || j == n) {
                printf("o ");
            } else {
                printf("* ");
            }
        }
        printf("\n");    
    }

    return 0;
}
