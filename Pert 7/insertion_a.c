#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10]={34,67,23,28,98,15,89,67,28,18};
    int i,data_sisip,j;
    
    for(i=1;i<10;i++)
    {
        data_sisip = array[i];
        j=i-1;
        
        while((data_sisip<array[j]) && (j>=0))
        {
            array[j+1]=array[j];
            j=j-1;
        }
        
        array[j+1]=data_sisip;
    }
    
    for(i=0;i<10;i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}