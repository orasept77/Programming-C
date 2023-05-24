#include <stdio.h>

int main(int argc, char const *argv[])
{
    int liczba, sum =0;
    printf("enter value: \n");
    scanf("%d", &liczba);
    while(liczba != 0)
    {
        sum+=liczba;
        printf("enter value: \n");
        scanf("%d", &liczba);
    }
    printf("sum = %d\n", sum);
    return 0;
}
