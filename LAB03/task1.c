#include <stdio.h>
#include <stdlib.h>

char show(char imie[5], char nazwisko[5])
{
    printf("Twoje dane to: \n imie: %s\n nazwisko: %s\n", imie, nazwisko);
}
int suma(int a, int b, int c)
{
    int suma;
    suma = a + b + c;
    printf("SUMA: %d", suma);
}
int main()
{
    show("Dawid", "Olko");
    suma(6, 7, 8);
    return 0;
}

/*2 metoda
#include <stdio.h>
#include <stdlib.h>

char show(char imie[5], char nazwisko[5])
int suma(int a, int b, int c)

int main()
{
    show("Dawid", "Olko");
    suma(3,4,5);
    return 0;
}

char show(char imie[5], char nazwisko[5])
{
    printf("nazywam sie %s, moje naziwsko to %s", imie, nazwisko);
}

int suma(int a, int b, int c)
{
    int suma;
    suma=a+b+c;
    printf("Suma to: %i", suma);
}

*/
