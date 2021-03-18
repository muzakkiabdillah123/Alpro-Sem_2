#include <stdio.h>

int main()
{
    // Kamus
    int n, i, j;

    // Program
    printf("Masukkan Angka: ");
    scanf("%d", &n);    //misal 5

    if (n%2 != 0 && n>=5) {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++) {
                if (i==(n+1)/2 || j==(n+1)/2 || (j==1 && i>=(n+1)/2) || (j==n && i<=(n+1)/2) || (i==n && j>=(n+1)/2) || (i==1 && j<=(n+1)/2)) {
                    printf("*  ");
                } else {                    // 1 : vertikal 3
                    printf("   ");          // 2 : horizontal 3
                }                           // 3 : (3-5) vertikal 1
                                            // 4 : (1-3) vertikal 5
            }                               // 5 : (2-5) horizontal 5
            printf("\n");                   // 6 : (1-3) horizontal 1
        }
    }

    return 0;
}
