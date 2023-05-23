#include <stdio.h>
#define NL "\n"

// Program, który ma zadanie wyświetlać wyśrodkowany tekst w konsoli.

typedef char *String;

void printCenter(String txt, int width);

int main(void)
{
    // String text="Przykładowy tekst";
    printCenter("Przykladowy tekst", 40); // 40 można zmieniać wedlug uznania np. 30
    printf(NL);
    printCenter("wysrodkowany przy uzyciu", 40);
    printf(NL);
    printCenter("samodzielenie stworzonej funkcji", 40);
    printf(NL);

    return 0;
}

void printCenter(String txt, int width)
{
    int size = 0;
    char *ptr = txt;
    while (*ptr)
    {
        size++;
        ptr++;
    }
    for (int i = 0; i < (width - size) / 2; i++)
        printf(" ");
    printf("%s", txt);
}
