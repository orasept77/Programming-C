#include<stdio.h>
float poleT();
/*int literaA()
 {
    int w, i, j;
    scanf("%d", &w);
    for(j = 1; j<=w;j++)
    {
        for(i = j; i < w; i++)
        {
            printf(" ");
        }
        for(i = 1; i<=j; i++)
        {
            if(i == 2 && j == 2 || i ==2 && j == 3 || i == 2 && j == 4 || i == 2 && j == 5)
                printf("A");
            else
                printf(" ");
        }
        for(i = 1; i <= j; i++)
        {
            if(i == j)
                printf("A");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;

 }*/
 int max()
 {
    int s = 0, N = 10, max, i, tab[N];

    for(i = 0; i<N; i++)
    {
        scanf("%d", &tab[i]);
    }
    max = tab[0];
    for(i = 0; i<N; i++)
    {
            if(tab[i] > max)
                max = tab[i];
    }
    for(i = 0;i<N;i++)
    {
        if(tab[i] == max)
        s++;

    }
    printf("max: %d\n",max);
    printf("maksymalna wartosc wystapila: %d\n", s);
    return max;

 }
float zwiekszL(int n)
{


    float tab[n],suma;
    int i;
    for(i = 0; i<n;i++)
        scanf("%f", &tab[i]);
    for(i = 0; i<n;i++)
    {
        tab[i] = tab[i] + 100;
        printf("liczba po dodaniu 100: %f\n", tab[i]);
    }
    suma = tab[0];
    for(i = 1; i<n;i++)
    {
        suma += tab[i];
    }
    return suma;
}
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
    printf("wywolanie funkcji literaA\n");
    //literaA();
    printf("\n");
    printf("wywolanie funkcji max\n");
    max();
    printf("\n");
    printf("wywolanie funkcji zwiekszL\n");
    zwiekszL(5);
    printf("\n");
    printf("wywolanie funkcji macierzTD\n");
    macierzTD(4);
    printf("\n");
    printf("wywolanie funkcji poleT\n");
    printf("pole: %f", poleT());
    return 0;
}
