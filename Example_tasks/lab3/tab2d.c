#include <stdio.h>
int main(int argc, char const *argv[])
{
    int array[2][3];
    // w tablicy o indeksie 0 jest tablica przechowująca tablicę int 3 elementową
    array[0][0] = 1; 
    array[0][1] = 2;
    array[0][2] = 3;
    // w tablicy o indeksie 1 jest tablica przechowująca tablicę int 3 elementową
    array[1][0] = 4; 
    array[1][1] = 5;
    array[1][2] = 6;
    
    char chararray[3][2] = {{'a','b'},
                            {'c','d'},
                            {'e','f'}};

    printf("%c",chararray[1][1]);
    
    return 0;

}
