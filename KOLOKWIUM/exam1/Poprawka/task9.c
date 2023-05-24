#include <stdio.h>

int main() 
{
    char variable1[] = "Programowanie.";
    char *endwsk = &variable1[13];
    *endwsk = '!';
    printf("%s", variable1);
    return 0;
}