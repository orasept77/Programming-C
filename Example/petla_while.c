#include <stdio.h>


int pomiar[3][4][2];
// %p%o szczestkowy osemkowy

int main()
{
    int i=0;
    int j=0;
    int k=0;
    while(k<2)
    {
        while(i<3)
        {
            while(j<4)
            {
                pomiar[i][j][k]=1;
                j++;
            }
            i++;
        }
        k++;
    }

    i=0;
    j=0;
    k=0;

    while(k<2)
    {
        printf("\n");
        while(i<3)
        {
            printf("\n");
            while(j<4)
            {
                printf("\n");
                printf("%d\t", pomiar[i][j][k]);
                j++;
            }
            i++;
        }
        k++;
    }
    return 0;
}