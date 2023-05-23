#include <stdio.h>
#include <stdlib.h>

char imie[]="dawid"; //c to jedena litera a s=string to caly char

int temp[] = {22, 24, 26}; //[0],[1],[2]
int i = 3;

/*int temp1=22;
int temp2=22;
int temp3=23;*/

int main()
{

    while (i--)
    {
        printf("%d\n", temp[i]);
    }

    printf("%s\n", imie);
    return 0;
}
