// 7. Kurs Programowania w C - Instrukcja warunkowa switch [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=7]

#include <stdio.h>

int main()
{
    int ocena = 3;

    switch (ocena) // switch dziala tylko na liczbach calkowitch czyli int
    {
    case 1:
        printf("SWITCH: Jedynka\n");
        break;
    case 2:
        printf("SWITCH: Dwójka\n");
        break;
    case 3:
        printf("SWITCH: Trójka\n");
        break;
    case 4:
        printf("SWITCH: Czwórka\n");
        break;
    case 5:
        printf("SWITCH: Piątka\n");
        break;
    case 6:
        printf("SWITCH: Szóstka\n");
        break;
    default:
        printf("SWITCH: Nieznana ocena\n");
    }

    if (ocena == 1)
    {
        printf("IF: Jedynka\n");
    }
    else if (ocena == 2)
    {
        printf("IF: Dwójka\n");
    }
    else if (ocena == 3)
    {
        printf("IF: Trójka\n");
    }
    else if (ocena == 4)
    {
        printf("IF: Czwórka\n");
    }
    else if (ocena == 5)
    {
        printf("IF: Piątka\n");
    }
    else if (ocena == 6)
    {
        printf("IF: Szóstka\n");
    }
    else
    {
        printf("IF: Nieznana ocena\n");
    }

    int a = 12;
    if (a >= 1 && a <= 10)
    {
        printf("IF: Wartość zmiennej jest w przedziale [1,10]\n");
    }
    else if (a >= 11 && a <= 20)
    {
        printf("IF: Wartość zmiennej jest w przedziale [11,20]\n");
    }
    else
    {
        printf("IF: Wartość zmiennej nie znajduje się w przedziale [1,20]");
    }

    switch (a)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        printf("SWITCH: Wartość zmiennej jest w pedziale [1,10]\n");
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        printf("SWITCH: Wartość zmiennej jest w pedziale [11,20]\n");
        break;
    default:
        printf("IF: Wartość zmiennej nie znajduje się w przedziale [1,20]");
    }

    return 0;
}