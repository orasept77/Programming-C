#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 40

void catstr(char *str3, char *str4, char *wsk, int n) {
    char strr[N];
    int i =0 , k = 0;
    while(str3[i]){
        strr[i] = str3[i];
        i++;
    }
    // printf("2\n");
    while(str4[k]){
        strr[i] = str4[k];
        k++;
        i++;
    }
    // printf("3\n");
    if (i > N) {
        printf("Brak miejsca.");
        exit(EXIT_FAILURE);
    } 
    // printf("%s",strr);
    for (size_t i = 0; i < n; i++)
    {
        wsk[i] = strr[i];
    }   
}

// void cat

int main(int argc, char const *argv[])
{
    char str1[20] = "First string, ";
    char str2[20] = "Second string";
    strcat(str1, str2);
    printf("%s\n", str1);

    char str3[20];
    char str4[20];
    char strr[N];
    printf("Podaj pierwszy lancuch: ");
    gets(str3);
    printf("Podaj drugi lancuch: ");
    gets(str4);

    catstr(str3, str4, strr, N);
    printf("|%s| ", strr);

    return 0;
}
