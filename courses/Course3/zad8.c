// 8. Kurs Programowania w C - Pętla while i do..while [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=8]

#include <stdio.h>

int main()
{
    int a = 0;
    puts("Pętla while:");
    while (a++ < 5)
    {
        printf("%d\n", a);
    }

    puts("\nPętla do...while:");
    a = 0;
    do
    {
        ++a;
        printf("%d\n", a);
    } while (a < 5);

    puts("\nKwadraty liczb:");
    a = 0;
    while (a * a < 100)
    {
        ++a;
        if (a * a == 81)
        {
            continue;
        }
        printf("%d\n", a * a);
    }

    puts("\nKoniec programu!");
    return 0;
}