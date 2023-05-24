#include <stdio.h>
#include <string.h>

int checkPalindrom(char *word)
{
    int i, count = 0;
    int length = strlen(word);
    for (i = 0; i < length; i++)
    {
        if (word[i] == word[length - i - 1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int result = checkPalindrom("kajak");
    printf("%s - %d palindrom\n", "kajak", result);
    int result1 = checkPalindrom("Ala alA");
    printf("%s - %d palindrom\n", "Ala alA", result1);
    int result2 = checkPalindrom(" zrzegprz ");
    printf("%s - %d\n", " zrzegprz ", result2);
    int result3 = checkPalindrom("  ala  ");
    printf("%s - %d palindrom\n", "  ala  ", result3);
    
    int option;
    char word[100 + 1];

    while (1)
    {
        printf("\n1. Wprowadz slowo.\n2. Wyjscie z programu.\nWybierz opcje: ");
        scanf("%d", &option);
        if (option == 1)
        {
            printf("Wprowadz slowo: ");
            scanf("%s", word);
            int result = checkPalindrom(word);
            if (result == 0)
            {
                printf("%.100s - 0\n", word);
            }
            else
            {
                printf("%.100s - %d palindrom\n", word, result);
            }
        }
        else if (option == 2)
        {
            printf("Zakonczenie dzialania programu.\n");
            break;
        }
        while ((getchar()) != '\n');
    }
    return 0;
}