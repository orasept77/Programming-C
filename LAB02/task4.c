#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba = 0;
    int max;
    printf("podaj liczbe maksymalna: ");
    scanf("%d",&max);
    while(1)
    {
        if(liczba%3==0)
        {
            liczba++;
            continue;
        }
        if(liczba<=max)
        {
            printf("%d\n",liczba);
            liczba++;
            continue;
        }
        break;
    }
    return 0;
}
