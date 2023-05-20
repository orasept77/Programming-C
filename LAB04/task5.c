#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparestr(char str1[], char str2[], int str11, int str22)
{
    int najmniejszaDl = 0;
    float najwiekszaDl = 0;
    if (str11 < str22)
    {
        najmniejszaDl = str11;
        najwiekszaDl = str22;
    }
    else
    {
        najmniejszaDl = str22;
        najwiekszaDl = str11;
    }

    float takieSame = 0;
    int i = 0;
    while (i < najmniejszaDl)
    {
        if (str1[i] == str2[i])
        {
            takieSame += 1;
        }
        i += 1;
    }
    float wynik = (takieSame / najwiekszaDl) * 100;
    printf("Podobienstwo lancuchow znakow wynosi %0.2f procent", wynik);
    return 0;
}

int main()
{
    
    char str1[100] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    char str2[50] = "      ipsum dolor sit amet";
    size_t str11 = strlen(str1);
    size_t str22 = strlen(str2);
    comparestr(str1, str2, str11, str22);
    return 0;
}