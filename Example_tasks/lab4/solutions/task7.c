#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // utworzenie tablicy z literami od a do z (na 27 znaków poeniważ ostatni element będzie wskazywać na symbol pusty \0 - koniec łańcucha znaków)
    char tab[27];
    int x = 97;
    for (size_t i = 0; i < 26; i++)
    {
        tab[i] = x;
        x = x+1 ;
    }
    printf("%s", tab);

    printf("co ktory element wypisac:");
    int n;
    scanf("%i", &n);
    // Jeśli zinkrementujemy wskaźnik o 2 dostaniemy wskaźnik na 3 element tablicy
    // zwiększając wskaźnik ptr_tab o n przegapimy znak \0 zatem w pętli należy przeskakiwać co nty krok
    int counter = n-1;
    for (char *ptr_tab = tab+2; *ptr_tab; ptr_tab++)
    {
        // Zwiększamy licznik iteracji o 1
        counter++;
        // Jeśli mamy już n-ta literę wypisujemy informacje i zerujemy licznik
        if (counter == n)
        {
            printf("Wartosc: %c \n", *ptr_tab);
            counter = 0;
        } 
    }
    
    return 0;
}
