#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *in = fopen("files/file1.txt", "r");    // otwiera plik do odczytu (musi istniec)
    if (in == NULL)
    {
        perror("Nie udalo sie otworzyc pliku.");
        return 1;
    }

    // fscanf()
    int x1;
    char x2[30];
    float x3;
    double x4;
    int charNumber = fscanf(in, "%i %s %f %lf", &x1, x2, &x3, &x4);
    printf("%i %s %f %f \n", x1, x2, x3, x4);
    fclose(in);
    
    
    // fgets()
    in = fopen("files/file1.txt", "r");
    char readedText[101];
    char restult[100];
    fgets(readedText , 30 , in );
    printf("%s\n", readedText);
    fclose(in);

    // fgetc()
    in = fopen("files/file1.txt", "r");
    char readedChars[40];
    for(int i=0;i<40;i++){ // wykroczenie poza ilość znaków będzie odczytywać znaki od poczatku 
        readedChars[i] = fgetc(in);
    }
    printf("%s", readedChars);
    fclose(in);

    return 0;
}
