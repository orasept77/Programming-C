#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int size;
    printf("Podaj rozmiar kwadratu: ");
    scanf("%d", &size);
 
    for (int y = 0; y < size; ++y)
    {
        for (int x = 0; x < size; ++x)
        {
            printf("*"); // ta tez size razy sie robi
        }
 
        printf("\n"); //ta pętla robi sie "size" razy i daje nizej \n
    }
}