/*Dostateczny
EK_3
Utwórz funkcję duplicate_element() która w tablicy jednowymiarowej znaków powiela element pod wskazanym indexem(wartość przekazana jako parametr funkcji) n razy(wartość przekazana jako parametr funkcji) za tym elementem. Jeśli ilość elementów przekroczy rozmiar tablicy wypisz "Error: number of elements exceed Array size!" i zakończ działanie funkcji.

np.: duplikuję element pod indeksem 2, 2 razy.

['a', '1', 'g', 'c', 'c', '\0', '\0', '\0', '\0']

['a', '1', 'g', 'g', 'g', 'c', 'c', '\0', '\0']
Utwórz funkcję print_array() która wypisze elementy tablicy w podanym niżej formacie:

['a', '1', 'g', 'c', 'c']
Przetestuj działanie funkcji na poniższych 3 przykładach.

[1,2,3,4] duplikuj 2 element 2 razy
[a,b,c,d,d,e] duplikuj 3 element 20 razy
[a,b,c,d,d,e] duplikuj 1 element 20 razy
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
    FILE *fp = fopen("dst_gr5.txt", "a+");
    if (fp == NULL)
    {
        printf("blad \n");
    }
    int i;
    int array_len = strlen(arr);

    if (array_len + n >= size)
    {
        printf("Warning: number of elements exceed Array size!\n");
        return;
    }

    for (i = array_len - 1; i >= index; i--)
    {
        arr[i + n] = arr[i];
    }

    for (i = 0; i < n; i++)
    {
        arr[index + i] = arr[index];
    }
    fprintf(fp, "duplikuj %d element %d razy\n", index, n);
    fclose(fp);
}

void print_array(char arr[])
{
    FILE *fp = fopen("dst_gr5.txt", "a+");
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

    char arr2[7] = {'1', '2', '3', '4'};
    printf("Before:\n");
    print_array(arr2);
    duplicate_element(arr2, sizeof(arr2), 1, 2);
    printf("After:\n");
    print_array(arr2);

    char arr3[27] = {'a', 'b', 'c', 'd', 'd', 'e'};
    printf("Before:\n");
    print_array(arr3);
    duplicate_element(arr3, sizeof(arr3), 2, 20);
    printf("After:\n");
    print_array(arr3);

    char arr4[20] = {'a', 'b', 'c', 'd', 'd', 'e'};
    printf("Before:\n");
    print_array(arr4);
    duplicate_element(arr4, sizeof(arr4), 0, 20);
    printf("After:\n");
    print_array(arr4);

    return 0;
}