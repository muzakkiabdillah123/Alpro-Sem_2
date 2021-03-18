#include <stdio.h>

int main()
{
    // Kamus
    int n, i, j;

    // Program
    printf("Masukkan Angka: ");
    scanf("%d", &n);

    if (n%2 != 0 && n>=5) {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++) {
                if (i==(n+1)/2 || j==(n+1)/2 || (j==1 && i<=(n+1)/2) || (j==n && i>=(n+1)/2) || (i==n && j<=(n+1)/2) || (i==1 && j>=(n+1)/2)) {
                    printf("* ");
                } else {
                    printf("  ");
                }
                
            }
            printf("\n");    
        }
    }

    return 0;
}
