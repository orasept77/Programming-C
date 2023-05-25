#include <stdio.h> //normalna macierz

int macierzTD(int n)
{
    int i = 0,j = 0,tabm[n][n];
    //for(i = 0;i<n;i++)
    //{
    do
    {
        //printf("\n");
        for(j = 0;j<n;j++)
        {
            if(i == j || i>j)
            {
                tabm[i][j] = 10;
                //printf("%d\t", tabm[i][j]);
            }
            else
            {
                tabm[i][j] = 1;
                //printf("%d\t", tabm[i][j]);
            }
        }
        i++;
    }while(i<n);
    //}
    i = 0;
    do
    {
        printf("\n");
        for(j = 0;j<n;j++)
        {
            printf("%d\t", tabm[i][j]);
        }
        i++;
    }while(i<n);
    return 0;
}

float main()
 {
    printf("\n");
    printf("wywolanie funkcji macierzTD\n");
    macierzTD(4);
    printf("\n");
    return 0;
}
