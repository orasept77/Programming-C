#include <stdio.h>
#include <stdlib.h>

// Funkcja do duplikowania wybranego elementu tablicy
// Przyjmuje 4 parametry: wskaźnik do tablicy, rozmiar tablicy, index elementu do powtórzenia, ilość powtórzeń.
void duplicateRow(float *array, int size, int index, int repetitions){
    // Sprawdź czy nie przekroczono rozmiaru tablicy
    if(repetitions + index > size){
        printf("Warning: Elements exceeded size of array!\n");
        return;
    }

    // Utwórz tablicę tymczasową, powiększoną o ilość duplikatów
    float *temp_array = malloc(sizeof(float) * (size + repetitions));

    // Przepisz wartości z tablicy do tymczasowej
    for(int i = 0; i < size; i++){
        temp_array[i] = array[i];
    }

    // Dodaj powtórzenia
    for(int i = 0; i < repetitions; i++){
        temp_array[size + i] = array[index];
    }

    // Przepisz powtórzenia do tablicy
    for(int i = 0; i < size + repetitions; i++){
        array[i] = temp_array[i];
    }

    // Zwolnij tablicę tymczasową
    free(temp_array);

    // Zapisz zmienioną tablicę do pliku
    FILE *fp;
    fp = fopen("duplicated_row.txt", "w");
    for (int i = 0; i < size + repetitions; i++)
    {
        fprintf(fp, "%f\n", array[i]);
    }
    fclose(fp);
}

int main(){
    // Stwórz tablicę z wartościami
    float array[5] = {1.2, 2.3, 3.4, 4.5, 5.6};

    // Wywołaj funkcję z odpowiednimi argumentami
    duplicateRow(array, 5, 3, 2);

    // Wypisz tablicę
    for(int i = 0; i < 7; i++){
        printf("%f\n", array[i]);
    }

    return 0;
}