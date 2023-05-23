//9. Kurs języka C - Operatory bitowe [https://www.youtube.com/watch?v=pLe-HTaePqE&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=9]

#include <stdio.h>
#include <stdlib.h>

// 000001
// 000100 -  WYNIK

int main() // <<, >> operatowy bitowe w lewo i prawo. //~1 negacja jedynki tam gdzie byly 1 bedą 0 i na odwrót.
/*2&2 
1^5
*/
{
    printf("Wynik: %d\n",1<<2); //jedyna została przesunięta 2 razy bitowo w lewo dlatego mamy 4
    return 0;
}