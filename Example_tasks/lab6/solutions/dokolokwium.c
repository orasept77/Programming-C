#include <limits.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Ilosc bitow w bajcie: %i\n",CHAR_BIT);
    double a = 10.543;
    printf("Ilosc bajtow jaka zajmuje zmienna a = %d\n", sizeof(a));

    printf("Ilosc bajtow jakie zajmuje typ char = %d\n", sizeof(char));


    signed char b = 127;
    b++;
    printf("%i",b);
    b++;
    printf("%i",b);
    b++;
    printf("%i",b);
    return 0;
}
