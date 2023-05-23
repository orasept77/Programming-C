#include <stdio.h>

int dodaj(int a, int b); //dodaj(5,9);

int main(void)
{
    int suma;
    suma = dodaj(5, 9);
    printf("%d", suma);

    return 0;


}
    

int dodaj(int a, int b)
{
    //int suma;
    //suma = a+b;
    return a+b; // to jest uproszczone może być również tak
}