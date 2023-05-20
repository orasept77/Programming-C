#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void catstr()
{
    char str1[25] = "Bolek to jest ", str2[25] = "i lolek";
    int dlugosc1 = strlen(str1);
    int dlugosc1MAX = sizeof(str1);
    int dlugosc2 = strlen(str2);
    int i;

    if (dlugosc2 > (dlugosc1MAX - dlugosc1))
    {
        exit(EXIT_FAILURE);
    }
    else
    {
        for (i = 0; str2[i] != '\0'; i++, dlugosc1++) 
        {
            str1[dlugosc1] = str2[i];
        }
    }

    str1[dlugosc1] = '\0';
    printf("Polaczone lancuchy znakow: %s", str1);
}

int main()
{
    char zdanie1[25] = "i lolek";
    char zdanie2[25] = "Bolek to jest ";
    strcat(zdanie2, zdanie1);
    printf("Polaczone lancuchy znakow: %s\n", zdanie2);
    catstr();
    return 0;
}