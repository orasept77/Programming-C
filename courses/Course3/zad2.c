// 2. Kurs Programowania w C - zmienne [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=2]

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wiek;
    printf("Ile masz lat pecie\n");
    scanf("%d", &wiek);
    {
        printf("Siema mam %d lata.\n", wiek);
    }
    
    int kisioj_wiek = 23;
    int ania_wiek = 28;
    int suma_wiek = kisioj_wiek + ania_wiek;
    printf("wiek razem anii i kisioja to: %d\n", suma_wiek);

    return 0;
}
