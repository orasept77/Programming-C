#include <stdio.h>

int main(int argc, char const *argv[])
{
    int task3_var;
    printf("Podaj wartosc zmiennej task3_var: \n");
    scanf("%d", &task3_var);
    if(task3_var<30)
    {
        printf("task3_var jest mniejsza od 30\n");
    }
    else if(task3_var>30)
    {
        printf("task3_var jest wieksza od 30\n");
    }
    else if(task3_var=30)
    {
        printf("task3_var jest rowne 30\n");
    }
    return 0;
}
