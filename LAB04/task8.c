#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
  
char* findandreplace(const char* str, const char* stareSlowo, const char* noweSlowo) 
{ 
    char* wynik;
    int i, cnt = 0;
    int nowaDlugosc = strlen(noweSlowo);
    int staraDlugosc = strlen(stareSlowo);
    int podmienione = 0;

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (strstr(&str[i], stareSlowo) == &str[i]) 
        {
            cnt += 1;
            i += staraDlugosc - 1;
        }
    }

    wynik = (char*)malloc(i + cnt * (nowaDlugosc - staraDlugosc) + 1);
    i = 0;
    while (*str) 
    {
        if (strstr(str, stareSlowo) == str) 
        {
            strcpy(&wynik[i], noweSlowo);
            i += nowaDlugosc;
            str += staraDlugosc;
            podmienione += 1;
        }
        else
        {
            wynik[i++] = *str++;
        }
    }

    wynik[i] = '\0';
    printf("Stary tekst: %s\n", str);
    printf("Nowy tekst: %s\n", wynik);
    printf("Liczba zmienionych slow: %i\n", podmienione);
    return 0;
}

int main()
{
    char str[] = "Matematyka jest super, no mowie ci jest super kozak ekstra, lubie sie jej super uczyc";
    char z1[] = "super";
    char z2[] = "hiper";

    char* wynik = NULL; 
    wynik = findandreplace(str, z1, z2);
    return 0;
} 