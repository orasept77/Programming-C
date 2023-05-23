//Kurs C od podstaw #18 - Preprosesor [https://www.youtube.com/watch?v=YaRPGzOy_WY&list=PL0oxIZsFGA4EAxDvx1PNzNAlr8g4xi3XP&index=19]


#include <stdio.h>
#include "funkcje.h" //preprocesor

#define NAPIS "Hello world\n"

#define pf(a) printf(a)
#define PI 3.14159
#define dodaj(a,b) (a + b)
#undef PI //oddefiniowanie PI

#define A 5
//#ifndef A - to zdefiniowano A a jeśli usuniemy A 5 to wyżej to bedzie ze nie zdefiniowano.
#if a < 10
#warning "zla definicja A!" //##error nie pokazuje reszty jak jest coś źle.
#endif

int main()
{
    pf(NAPIS);
    //printf("%f\n", PI);
    printf("%d\n", dodaj(5,7));
    //#line 0 zeruje nam definiowanie linii poprzez to można na 100 linii wpisac sobie np.1

    return 0;
}

/*#define PI 3.14159
  printf("%f", PI);*/