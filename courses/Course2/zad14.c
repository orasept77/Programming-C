// 15. Kurs jezyka c - Funkcje 2 [https://www.youtube.com/watch?v=1p9gdwaSKxk&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=15]

#include <stdio.h>
#include <stdlib.h>

int a = 5;
int b = 10;
int c = 50;

int function(int f, int d, int t)
{
    return f + d - t; // w tym przypadku f=a b=d t=1
}

int main()
{
    printf("%d\n", function(a, b, 1));
    int wynik = function(b, c, 1);
    printf("%d\n", wynik);
    return 0;
}