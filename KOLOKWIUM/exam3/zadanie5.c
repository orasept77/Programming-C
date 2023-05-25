#include <stdio.h>

//Zadanie 5

int potega(int m, int n)
{
    int temp = 1;
    int i;

    for(i = 1; i <= n; i++)
    {
        temp *= m;
    }

    return temp;
}
//**************************************************************************************
int main()
{
    printf("%d\n", potega(10,4));    

    return 0;
}
