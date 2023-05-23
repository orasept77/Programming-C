//8. Kurs języka C - Operatory logiczne [https://www.youtube.com/watch?v=pLe-HTaePqE&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=8]

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

int main() // && to takie jakby mnożenie i ma pierwszeństwo nad || ! ! ! W A Ż N E
{
    if (true || true && false) //! true negacja do prawdy, || alternatyka falsz jest tylko wtedy jak jest dwa razy falsz, &&=koniunkcja jest prawda tylko wtedy jak jest prawda
    {
        printf("PRAWDA\n");
    }
    else
    {
        printf("FALSZ\n");
    }
    return 0;
}
