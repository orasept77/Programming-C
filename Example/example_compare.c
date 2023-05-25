#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(char word1[], char word2[], int length)
{
    int difference = 0;
    for(int i = 0; i<length; i++)
    {
        if(word1[i] != word2[i])
        {
            difference++;
        }
    }
    return difference;
}

int main(int argc, char const *argv[])
{
    char word1[]={'h','e','l','l','o'};
    char word2[]={'h','e','x','y','z'};
    int length = 5;
    int difference = compare(word1, word2, length);

    FILE *f = fopen("compare.txt", "w+");
    {
        if(f == NULL)
        {
            printf("blad\n");
        }
    }
    fprintf(f, "ilosc roznic: %d", difference);
    fclose(f);
    return 0;
}
