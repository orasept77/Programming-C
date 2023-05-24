#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int task4_var;
    printf("Podaj wartosc zmiennej task4_var: \n");
    scanf("%d", &task4_var);
    switch (task4_var)
    {
    case 100:
        printf("%f", task4_var * 1.1);
        break;
    case 20:
        printf("%f", task4_var * 1.2);
        break;
    case 3:
        printf("%d", task4_var*5);
        break;
    default:
        printf("%d", task4_var);
        break;
    }
    return 0;
}
