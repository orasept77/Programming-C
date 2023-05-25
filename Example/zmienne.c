#include <limits.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Ilosc bitow w bajcie: %i\n",CHAR_BIT);
    double a = 10.543;
    printf("Ilosc bajtow jaka zajmuje zmienna a = %d\n", sizeof(a));

    printf("Ilosc bajtow jakie zajmuje typ char = %d", sizeof(char));
    return 0;
}