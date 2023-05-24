/*Bardzo dobry
EK_3
Utwórz strukturę Array przechowującą macierz. Struktura powinna zawierać dane niezbędne do iteracji po komórkach macierzy oraz wyznacznik macierzy.

Utwórz funkcję detArray() przyjmującą instancje struktury Array. W ciele funkcji zaimplementuj przekształcenie macierzy do uzyskania postaci górnej trójkątnej według wzoru:

jeśli w podanym wzorze a[i,i] == 0 (dzielenie przez 0) wypisz stosowny komunikat.
gdzie poszczególne indeksy zmieniają się według sekwencji:

i = 1,...,n-1
j = i+1,...,n
k = i+1,...,n
Po przekształceniu możliwe jest obliczenie wyznacznika macierzy mnożąc elementy na przekątnej. Poniżej liczbą 1 zaznaczono elementy z których trzeba policzyć iloczyn.

[1 0 0 0]
[0 1 0 0]
[0 0 1 0]
[0 0 0 1]
Funkcja powinna zwracać komunikaty jeśli macierz jest inna niż kwadratowa.

więcej informacji

Utwórz funkcję initArray() która zwraca instancję struktury Array. Funkcja tworzy nową instancję struktury Array i przechowuje macierz o określonej liczbie wierszy i kolumn przekazanych jako parametry funkcji.

Utwórz funkcję printArray() która przyjmuje jako parametr strukturę Array. Funkcja wypisuje zawartość tablicy z przekazanej struktury w następującym formacie:

2.00        2.00        2.00
2.00        2.00        2.00
12.00       12.00       12.00
Utwórz funckję fillArray() która przyjmuje instancję klasy Array i prosi użytkownika o wypełnienie zawartości tablicy. Po wypełnieniu zawartości obliczany jest wyznacznik macierzy i uzupełniane odpowiednie pole struktury Array.

Przykładowa sesja:

Array[0][0] = 2.0
Array[0][1] = 4.42
Array[1][0] = 5.2
Array[1][1] = 6.0
Array[2][0] = 9
Array[2][1] = 22.4
W metodzie main():

Utwórz dwie zmienne o typie Array.
Za pomocą funkcji initArray() utwórz macierze o wymiarach 3x2 oraz 2x3
Wywołaj funkcję fillArray() by wypełnić macierze wartościami. Po wypełnieniu wartości powinien zostać obliczony wyznacznik macierzy.
EK_4
Zapisz wynik mnożenia macierzy w pliku tekstowym wyniki.txt w postaci:

>1.00    2.00    3.00
4.00    5.00	2.00



1.00	4.00
3.00	1.00
5.00	4.00

=

22.00	18.00
29.00	29.00*/

#include<stdio.h>
#include<stdlib.h>

struct Array {
    int rows;
    int cols;
    double** matrix;
    double determinant;
};

void initArray(struct Array* array,int row,int col){
    array->rows=row;
    array->cols=col;
    array->matrix=(double**)malloc(row*sizeof(double*));
    for(int i=0;i<row;i++){
        array->matrix[i]=(double*)malloc(col*sizeof(double));
    }
}

void fillArray(struct Array* array){
    for(int i=0;i<array->rows;i++){
        for(int j=0;j<array->cols;j++){
            printf("Array[%d][%d] = ", i, j);
            scanf("%lf", &array->matrix[i][j]);
        }
    }
}

void printArray(struct Array* array){
    for(int i=0;i<array->rows;i++){
        for(int j=0;j<array->cols;j++){
            printf("%.2f\t", array->matrix[i][j]);
        }
        printf("\n");
    }
    printf("Wyznacznik: %.2f\n", array->determinant);
}

double detArray(struct Array* array){
    if(array->rows!=array->cols){
        printf("Macierz nie jest kwadratowa!\n");
        return 0;
    }
    for(int i=0;i<array->rows-1;i++){
        for(int j=i+1;j<array->rows;j++){
            for(int k=i+1;k<array->rows;k++){
                if(array->matrix[i][i]==0){
                    printf("Dzielenie przez 0!\n");
                    return 0;
                }
                array->matrix[j][k]-=array->matrix[j][i]/array->matrix[i][i]*array->matrix[i][k];
            }
        }
    }
    double det=1;
    for(int i=0;i<array->rows;i++){
        det*=array->matrix[i][i];
    }
    array->determinant=det;
    return det;
}

struct Array multiplyArrays(struct Array array1,struct Array array2) {
    if(array1.cols!=array2.rows){
        printf("Macierze nie mogą być pomnożone!\n");
        struct Array emptyArray;
        initArray(&emptyArray, array1.rows, array2.cols);
        return emptyArray;
    }
    struct Array result;
    initArray(&result, array1.rows, array2.cols);
    for(int i=0;i<result.rows;i++){
        for(int j=0;j<result.cols;j++){
            result.matrix[i][j]=0;
            for(int k=0;k<array1.cols;k++){
                result.matrix[i][j]+=array1.matrix[i][k]*array2.matrix[k][j];
            }
        }
    }
    result.determinant=detArray(&result);
    return result;
}

int main(){
    struct Array array1;
    struct Array array2;
    initArray(&array1,2,3);
    initArray(&array2,3,2);
    fillArray(&array1);
    fillArray(&array2);
    printf("\nMatrix A:\n");
    printArray(&array1);
    printf("\nMatrix B:\n");
    printArray(&array2);
    struct Array result=multiplyArrays(array1, array2);
    printf("\n=\n");
    printArray(&result);
    FILE* file=fopen("bdb_gr2.txt", "a+");
    fprintf(file, "Matrix A:\n");
    for(int i=0;i<array1.rows;i++){
        for(int j=0;j<array1.cols;j++){
            fprintf(file, "%.2f\t", array1.matrix[i][j]);
        }
        fprintf(file, "\n");
    }
    fprintf(file, "Wyznacznik: %.2f\n\nX\n\n", array1.determinant);
    for(int i=0;i<array2.rows;i++){
        for(int j=0;j<array2.cols;j++){
            fprintf(file, "%.2f\t", array2.matrix[i][j]);
        }
        fprintf(file, "\n");
    }
    fprintf(file, "Wyznacznik: %.2f\n\n=\n\n", array2.determinant);
    for(int i=0;i<result.rows;i++){
        for(int j=0;j<result.cols;j++){
            fprintf(file, "%.2f\t", result.matrix[i][j]);
        }
        fprintf(file, "\n");
    }
    fprintf(file, "Wyznacznik: %.2f\n", result.determinant);
    fclose(file);
    return 0;
}