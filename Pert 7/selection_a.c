#include <stdio.h>
#include <stdlib.h>

#define max 10

int main()
{
    int array[max]={34,67,23,28,98,15,89,67,28,18};
    int i, temp, max_indeks, j;

    for(i=0; i<(max-1); i++)
    {
        max_indeks=i;
        for(j=(i+1);j<max;j++)
        {
            if(array[max_indeks]<array[j])
            {
                max_indeks=j;
            }
        }
        temp=array[i];
        array[i]=array[max_indeks];
        array[max_indeks]=temp;
    }
    
    for(i=0;i<max;i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}