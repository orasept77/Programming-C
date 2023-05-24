/*Dostateczny
EK_3
Utwórz funkcję palindrom() która sprawdzi czy znaki przechowywane w tablicy są palindromem(słowo lub ciąg znaków, który czytany od przodu i od tyłu brzmi tak samo) a następnie zwróci wartość true jeśli są lub false jeśli nie są. Funkcja przyjmuje tablicę dowolnej długości i przy sprawdznaiu pomija puste znaki. np.

[a, b, a, 0\] true
[a, b, b, a] true
[a, b, c, a] false
Utwórz funkcję print_palindrom() która przyjmuje jako argument tablicę o dowolnym rozmiarze oraz wypisuje zawartość tablicy w poniższym formacie wraz z informacją czy znaki w tablicy tworzą palindrom czy nie.

[a, b, b, a] true
Przetestuj działanie funkcji print_palindrom() na następujących tablicach:

[k, a, j, a, k]
[1, 2, 3, 3, 2, 1]
[k, 1, u]
EK_4
Zmodyfikuj program tak aby wynik działania programu został zapisany do pliku wyniki.txt*/

#include <stdio.h>
#include <stdbool.h>

bool palindrome(char tab[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (tab[i] == '\0')
        {
            i++;
            continue;
        }
        if (tab[j] == '\0')
        {
            j--;
            continue;
        }
        if (tab[i] != tab[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void print_palindrome(char *array, int size)
{
    FILE *f = fopen("dst_gr4.txt", "a+");
    if (f == NULL)
    {
        printf("blad\n");
    }
    int i;
    printf("[");
    fprintf(f, "[");
    for (i = 0; i < size; i++)
    {
        if (array[i] == '\0')
        {
            continue;
        }
        printf("'%c'", array[i]);
        fprintf(f, "'%c'", array[i]);
        if (i < size - 1)
        {
            if (array[i] == '\0')
            {
                continue;
            }
            printf(", ");
            fprintf(f, ", ");
        }
    }
    printf("] ");
    fprintf(f, "] ");
    if (palindrome(array, size))
    {
        printf("true\n");
        fprintf(f, "true\n");
    }
    else
    {
        printf("false\n");
        fprintf(f, "false\n");
    }
    fclose(f);
}

int main()
{
    char array1[] = {'k', 'a', 'j', 'a', 'k'};
    print_palindrome(array1, sizeof(array1));

    char array2[] = {'1', '2', '3', '3', '2', '1'};
    print_palindrome(array2, sizeof(array2));

    char array3[] = {'k', '1', 'u'};
    print_palindrome(array3, sizeof(array3));

    char array4[] = {'k', '1', '1', '\0', 'k'};
    print_palindrome(array4, sizeof(array4));

    // more test cases
    return 0;
}