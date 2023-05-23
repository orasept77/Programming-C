// 14. Kurs jezyka c - Funkcje 1 [https://www.youtube.com/watch?v=1p9gdwaSKxk&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=14]

#include <stdio.h>
#include <stdlib.h>

int a = 5;
int b = 10;
int c = 50;

void function(int a, int b, int c) //void nic nie zwraaca
{
    printf("%d\n", a + b + c);
}

int main()
{
    function(5,10,1);
    function(5,1,1);
    function(5,7,1);
    return 0;
}