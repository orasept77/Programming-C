// 13. Kurs jezyka c - wyswietlanie/wczytywanie [https://www.youtube.com/watch?v=1p9gdwaSKxk&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=13]

#include <stdlib.h>
#include <stdio.h>

int i=765; // %d %i
float f= 123.456; // %f
double lf= 5.22; //%f %lf
char c='C'; // %c 
char s[]="Hello!"; // %s
// %o system ósemkowy

int main()
{
    scanf("%d", &i); //musi byc &-anpersen
    printf("%d\n", i);
    
    return 0;
}
