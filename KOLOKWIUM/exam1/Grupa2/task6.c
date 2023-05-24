#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int task6_var;
    printf("Podaj wartosc zmiennej task6_var: \n");
    scanf("%d", &task6_var);
    int pot=0;
    while(pot<=task6_var)
    {
        printf("%d ", pot);
        if(pot)
        {
            pot*=2;
        }
        else
            pot=2;
    }
    return 0;
}
