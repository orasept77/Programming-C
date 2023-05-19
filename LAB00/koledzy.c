#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void shownames()
{
    char name[20] = "Maksymilian";
    char name2[20] = "Michal";
    char name3[20] = "Piotr";
    char surname[20] = "P******";
    char surname2[20] = "P******";
    char surname3[20] = "S****";
    int age = 18;
    int age2 = 18;
    int age3 = 18;
    char albumNumber[20] = "123156";
    char albumNumber2[20] = "125634";
    char albumNumber3[20] = "87576";
#define PI_VALUE = 3.141592

    printf("Hello %s, you are %d years old %s\n", name, age, surname);
    printf("Hello %s, you are %d years old %s\n", name2, age2, surname2);
    printf("Hello %s, you are %d years old %s\n", name3, age3, surname3);
}

int main(int argc, char const *argv[])
{
    shownames();
    _getch();
}
