#include <stdio.h>
#include <stdlib.h>

// Napisać funkcję która oblicza x = a+5 oraz y = a+10
// sposob 1
void obliczxy(int a,int *x,int *y){
    *x = a+5;
    *y = a+10;
};

// sposob 2
struct xy
{
    int x;
    int y;
};

struct xy obliczxy2(int a)
{
    struct xy result;
    result.x = a+5;
    result.y = a+10;
    return result;
};

// sposob 3
int * obliczxy3(int a){
    // słowo kluczowe static sprawia że zmienna result będzie widoczna poza funkcją.
    static int result[2];
    result[0] = a+5;
    result[1] = a+10;
    return result;
};

int main(int argc, char const *argv[])
{
    int x,y;
    obliczxy(5, &x, &y);
    printf("Wartosc przy a=5 - x=%i y=%i\n", x,y);

    struct xy res = obliczxy2(5);
    printf("Wartosc przy a=5 - x=%i y=%i\n", res.x,res.y);

    int *wsk = obliczxy3(5);
    printf("Wartosc przy a=5 - x=%i y=%i\n", wsk[0],wsk[1]);

    
    return 0;
}

