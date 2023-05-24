/*Dostateczny
EK_3
Utwórz funkcję duplicate_element() która w tablicy jednowymiarowej znaków powiela element pod wskazanym indexem(wartość przekazana jako parametr funkcji) n razy(wartość przekazana jako parametr funkcji) za tym elementem. Jeśli ilość elementów przekroczy rozmiar tablicy wypisz "Warning: number of elements exceed Array size!" i zwiększ rozmiar tablicy tak by przechowywała wszystkie elementy.

np.: duplikuję element pod indeksem 2, 2 razy.

['a', '1', 'g', 'c', 'c', '\0', '\0', '\0', '\0']

['a', '1', 'g', 'g', 'g', 'c', 'c', '\0', '\0']
Utwórz funkcję print_array() która wypisze elementy tablicy w podanym niżej formacie:

['a', '1', 'g', 'c', 'c']
Przetestuj działanie funkcji na wybranych 3 przykładach.

EK_4
Zmodyfikuj program tak aby rezultat działania programu został zapisany w pliku wyniki.txt w następującej postaci:

['a', '1', 'g', 'c', 'c']
duplikuj 3 element 2 razy
['a', '1', 'g', 'g', 'g', 'c', 'c']*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void duplicate_element(char arr[], int size, int index, int n)
{
    FILE *fp = fopen("dst_gr3.txt", "a+");
    if (fp == NULL)
    {
        printf("blad \n");
    }
    int i;
    int array_len = strlen(arr);
    int size_after = array_len + n;
    if (array_len + n >= size)
    {
        printf("Warning: number of elements exceed Array size!\n"); 
        arr = calloc(size_after, sizeof(char)); 
        size = size_after; 

        arr[size] = '\0'; 
    }
    int tail_len = strlen(arr) - index; 
    char *tail = calloc(tail_len, (tail_len + 1) * sizeof(char)); 

    memcpy(tail, arr + index + 1, tail_len);  
    tail[tail_len] = '\0'; 

    {
        for (i = array_len - 1; i >= index; i--) 
        {
            arr[i + n] = arr[i];
        }

        for (i = 0; i < n; i++)
        {
            arr[index + i] = arr[index];
        }
        arr[index + n + 1] = '\0';
    }
    fprintf(fp, "duplikuj %d element %d razy\n", index, n);
    strcat(arr, tail);  // zapisanie znakow z ogona do tablicy arr tak aby po zduplikowanych znakach, to wlasnie one konczyly tablice
    free(tail); // zwolneinie pamieci dla ogona poniewaz zostal on juz zapisany do tablicy ktora zostala powiekszona o zduplikowane znaki 
    free(arr);
    fclose(fp);
}

void print_array(char arr[])
{
    FILE *fp = fopen("dst_gr3.txt", "a+");
    if (fp == NULL)
    {
        printf("blad \n");
    }
    fprintf(fp, "[");
    printf("[");
    int array_len = strlen(arr);
    int i;
    for (i = 0; i < array_len; i++)
    {
        if (i == array_len - 1)
        {
            printf("'%c'", arr[i]);
            fprintf(fp, "'%c'", arr[i]);
        }
        else
        {
            printf("'%c', ", arr[i]);
            fprintf(fp, "'%c', ", arr[i]);
        }
    }
    printf("]\n");
    fprintf(fp, "]\n");
    fclose(fp);
}

int main()
{
    char arr1[9] = {'a', '1', 'g', 'c', 'c', '\0', '\0', '\0', '\0'};
    printf("Before:\n");
    print_array(arr1);
    duplicate_element(arr1, sizeof(arr1), 2, 2);
    printf("After:\n");
    print_array(arr1);

    char arr2[9] = {'b', '2', 't', 's'};
    printf("Before:\n");
    print_array(arr2);
    duplicate_element(arr2, sizeof(arr2), 1, 4);
    printf("After:\n");
    print_array(arr2);

    char arr3[15] = {'b', 's'};
    printf("Before:\n");
    print_array(arr3);
    duplicate_element(arr3, sizeof(arr3), 1, 10);
    printf("After:\n");
    print_array(arr3);

    char arr4[6] = {'d', '8', 'h', '1', '1'};
    printf("Before:\n");
    print_array(arr4);
    duplicate_element(arr4, sizeof(arr4), 1, 5);
    printf("After:\n");
    print_array(arr4);

    return 0;
}