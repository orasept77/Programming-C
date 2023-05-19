#include <stdlib.h>
#include <stdio.h>

typedef char *string;
string name = "Dawid";
char *surname = "Olko";

int main()
{
    int age = 20;
    int albumNumber = 125148;
    const float PI_VALUE = 3.141590;
    printf("Hello %s ", name);
    printf("I am %d years old My album have number %d and pi has value %f\n", age, albumNumber, PI_VALUE);
    /* code */
    return 0;
}