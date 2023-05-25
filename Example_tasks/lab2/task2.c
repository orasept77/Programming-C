#include <stdio.h>
#include <stdlib.h>

// int argc - liczba argumentów
int main(int argc, char const *argv[])
{
    /* code */
    // printf("argc = %d\n", argc);
    // printf("argv[0] = %s\n",argv[0]);
    // printf("argv[1] = %s\n",argv[1]);
    // printf("argv[1] = %s\n",argv[2]);

    // int a = 16;
    // int b = 5;
    // int result1 = a + b;
    // printf("Wynik działania 16 + 5 = %i",result1);
   
    // int a = 16;
    // float b = 16;
    // _Bool result = a == b;
    // printf("%i",a==b);
    char string[20]; // utworzenie zmiennej string która przechowuje 20 zmiennych char do których odwołujemy się po indeksach.
    string[0] = 'H'; // przypisanie do pierwszego zarezerwowanego adresu litery 'H'
    string[1] = 'e';
    string[2] = 'l';
    string[3] = 'l';
    string[4] = 'o';
    string[5] = ' ';
    string[6] = 'C';
    printf("%c", string[6]); // Wypisanie znaku na 7 miejscu w tablicy.
    printf("%s",string);


    char string2[20] = "Hello C";
    printf("%s",string2);
    return 0;
}
