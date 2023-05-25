#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define DATE_FORMAT "YY-MM-SS"

// Struktura pozwala na grupowanie wartości. W przeciwieństwie do tablicy pozwala na przechowywanie zmiennych różnych typów.
struct testStruct
{
    int age;
    float height;
    char name[20];
};

struct rectangle
{
    float x;
    float y;
};

struct rectangle createrect(float x, float y){
    struct rectangle kw;
    kw.x = x;
    kw.y = y;
    return kw;
}

int main(){
    struct rectangle kw = createrect(10.2, 20.4);
    printf("x=%f, y=%f", kw.x,kw.y);

    printf("\ntime = %i\n", time(0));

    struct rectangle x[50];
    for (size_t i = 0; i < (sizeof(x)/sizeof(struct rectangle)); i++)
    {
        printf("%i\n",i);
        /* code */
    }
    
}


int main2(int argc, char const *argv[])
{
    // Utworzenie zmiennej przechowującej strukturę i przypisanie wartości.
    struct testStruct strcVar ={30, 167.0, "Karol"};
    // dostęp do wartości zmiennej w strukturze
    printf("strcVar.age = %i\n", strcVar.age);
    // zmiana wartości zmiennej w strukturze
    strcVar.age = 40;
    printf("strcVar.age = %i\n", strcVar.age);
    
    // Jak wiadomo zmienne tablicowe przechowują wskaźnik na pierwszy element w tablicy stąd bezpośrednie przypisanie wartości w poniższy sposób jest niemożliwe
    // strcVar.name = "Leszek";

    // Do zmiany wartości można wykorztstać funkcje utworzone w poprzednim laboratorium lub skorzystać z biblioteki standardowej.
    strcpy(strcVar.name, "Leszek");
    printf("%s", strcVar.name);
    return 0;
}
