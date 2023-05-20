#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
    char source1[20] ="w jezyku C.";
    char destination1[20] ="Programowanie ";
    strcat(destination1, source1);
    printf("Polaczone lancuchy znakow |%s| \n", destination1);

    char s1[100] = "programowanie ", s2[] = "w jezyku C";
    int length, j;


    length = 0;
    while (s1[length] != '\0') 
    {
        ++length;
    }


    for (j = 0; s2[j] != '\0'; ++j, ++length) 
    {
        s1[length] = s2[j];
    }


    s1[length] = '\0';

    printf("Polaczone lancuchy znakow: ");
    puts(s1);

  return 0;

}