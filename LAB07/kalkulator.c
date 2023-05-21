#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double x, y, wynik;
    int wybor;
    char nazwa_pliku[20]="log.txt";
    FILE *plik;

    plik = fopen(nazwa_pliku, "w");
    if (plik == NULL)
    {
        printf("Nie mozna otworzyc pliku!\n");
        exit(1);
    }

    do
    {
        printf("\nKalkulator\n");
        printf("1. Dodawanie\n");
        printf("2. Odejmowanie\n");
        printf("3. Mnozenie\n");
        printf("4. Dzielenie\n");
        printf("5. Potegowanie\n");
        printf("6. Pierwiastek stopnia drugiego\n");
        printf("7. Wyjscie\n");
        printf("\nWybierz opcję: ");
        scanf("%d", &wybor);

        if (wybor == 7)
            break;

        printf("Podaj pierwsza liczbe: ");
        scanf("%lf", &x);

        if (wybor == 5)
        {
            printf("Podaj wykladnik: ");
            scanf("%lf", &y);
        }
        else
        {
            printf("Podaj druga liczbe: ");
            scanf("%lf", &y);
        }

        switch (wybor)
        {
            case 1:
                wynik = x + y;
                break;

            case 2:
                wynik = x - y;
                break;

            case 3:
                wynik = x * y;
                break;

            case 4:
                wynik = x / y;
                break;

            case 5:
                wynik = pow(x, y);
                break;

            case 6:
                wynik = sqrt(x);
                break;
        }

        printf("Wynik: %lf\n", wynik);

        switch (wybor)
        {
            case 1:
                fprintf(plik, "%lf + %lf = %lf\n", x, y, wynik);
                break;

            case 2:
                fprintf(plik, "%lf - %lf = %lf\n", x, y, wynik);
                break;

            case 3:
                fprintf(plik, "%lf * %lf = %lf\n", x, y, wynik);
                break;

            case 4:
                fprintf(plik, "%lf / %lf = %lf\n", x, y, wynik);
                break;

            case 5:
                fprintf(plik, "%lf^%lf = %lf\n", x, y, wynik);
                break;

            case 6:
                fprintf(plik, "sqrt(%lf) = %lf\n", x, wynik);
                break;
        }
    } while (wybor != 7);

    fclose(plik);

    return 0;
}