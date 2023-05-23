//7. Kurs języka C - Operatory porownania[https://www.youtube.com/watch?v=pLe-HTaePqE&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=7]

#include <stdio.h>
#include <stdlib.h>

int a = 5;
int b = 5;

int main()
{
    if (a < b)
    {
        printf("%d<%d\n", a, b);
    }
    else if(a==b)
    {
        printf("%d=%d",a,b);
    }
    else
    {
        printf("falsz\n");
    }

    return 0;
}
