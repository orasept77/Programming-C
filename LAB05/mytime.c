#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct date
{
    int rok, miesiac, dzien, godzina, minuta, sekunda;
};

void timestamptodate()
{
    long int liczSekTeraz = time(0);
    struct date dataTeraz = {1970, 1, 1, 0, 0, 0};

    while (liczSekTeraz >= 31536000)
    {
        if (((dataTeraz.rok % 4) == 0) && (liczSekTeraz >= 31622400))
        {
            liczSekTeraz -= 31622400;
            dataTeraz.rok += 1;
        }
        else if (liczSekTeraz >= 31536000)
        {
            liczSekTeraz -= 31536000;
            dataTeraz.rok += 1;
        }
        else
        {
        }
    }

    while (liczSekTeraz >= 2419200)
    {
        if (((dataTeraz.miesiac == 1) || (dataTeraz.miesiac == 3) || (dataTeraz.miesiac == 5) || (dataTeraz.miesiac == 7) || (dataTeraz.miesiac == 8) || (dataTeraz.miesiac == 10) || (dataTeraz.miesiac == 12)) && (liczSekTeraz >= 2678400))
        {
            liczSekTeraz -= 2678400;
            dataTeraz.miesiac += 1;
        }
        else if (((dataTeraz.miesiac == 4) || (dataTeraz.miesiac == 6) || (dataTeraz.miesiac == 9) || (dataTeraz.miesiac == 11)) && (liczSekTeraz >= 2592000))
        {
            liczSekTeraz -= 2592000;
            dataTeraz.miesiac += 1;
        }
        else if (((dataTeraz.miesiac == 2) && ((dataTeraz.rok % 4) == 0)) && (liczSekTeraz >= 2505600))
        {
            liczSekTeraz -= 2505600;
            dataTeraz.miesiac += 1;
        }
        else if (liczSekTeraz >= 2419200)
        {
            liczSekTeraz -= 2419200;
            dataTeraz.miesiac += 1;
        }
        else
        {
        }
    }

    while (liczSekTeraz >= 86400)
    {
        liczSekTeraz -= 86400;
        dataTeraz.dzien += 1;
    }

    while (liczSekTeraz >= 3600)
    {
        liczSekTeraz -= 3600;
        dataTeraz.godzina += 1;
    }

    while (liczSekTeraz >= 60)
    {
        liczSekTeraz -= 60;
        dataTeraz.minuta += 1;
    }

    dataTeraz.sekunda = liczSekTeraz;

    printf("Rok: %i\n", dataTeraz.rok);
    printf("Miesiac: %i\n", dataTeraz.miesiac);
    printf("Dzien: %i\n", dataTeraz.dzien);
    printf("Godzina: %i:%i:%i\n", dataTeraz.godzina, dataTeraz.minuta, dataTeraz.sekunda);
}

void datetotimestamp()
{
    struct date dataTwoja;
    long int liczSekTwoja = 0;
    
    printf(" - - - Konwersja daty na liczbe sekund, jaka uplynela od 01.01.1970 00:00:00 - - - \n");
    printf("Podaj Rok (Od 1970 do +nieskonczonosc): ");
    scanf("%i", &dataTwoja.rok);
    printf("Podaj Miesiac (Od 1 do 12): ");
    scanf("%i", &dataTwoja.miesiac);
    printf("Podaj Dzien (Zalezny od miesiaca: Od 1 do 28/29(Luty zwykly/przestepny) lub 30/31): ");
    scanf("%i", &dataTwoja.dzien);
    printf("Podaj Godzine (W formacie gg:mm:ss): ");
    scanf("%i:%i:%i", &dataTwoja.godzina, &dataTwoja.minuta, &dataTwoja.sekunda);

    struct date dataLicz = dataTwoja;
    printf("Rok: %i\n", dataLicz.rok);
    printf("Miesiac: %i\n", dataLicz.miesiac);
    printf("Dzien: %i\n", dataLicz.dzien);
    printf("Godzina: %i:%i:%i\n", dataLicz.godzina, dataLicz.minuta, dataLicz.sekunda);

    while (dataLicz.rok > 1970)
    {
        if ((dataLicz.rok % 4) == 0)
        {
            liczSekTwoja += 31622400;
            dataLicz.rok -= 1;
        }
        else
        {
            liczSekTwoja += 31536000;
            dataLicz.rok -= 1;
        }
    }

    while (dataLicz.miesiac > 1)
    {
        if ((dataLicz.miesiac == 1) || (dataLicz.miesiac == 3) || (dataLicz.miesiac == 5) || (dataLicz.miesiac == 7) || (dataLicz.miesiac == 8) || (dataLicz.miesiac == 10) || (dataLicz.miesiac == 12))
        {
            liczSekTwoja += 2678400;
            dataLicz.miesiac -= 1;
        }
        else if ((dataLicz.miesiac == 4) || (dataLicz.miesiac == 6) || (dataLicz.miesiac == 9) || (dataLicz.miesiac == 11))
        {
            liczSekTwoja += 2592000;
            dataLicz.miesiac -= 1;
        }
        else if ((dataLicz.miesiac == 2) && ((dataLicz.rok % 4) == 0))
        {
            liczSekTwoja += 2505600;
            dataLicz.miesiac -= 1;
        }
        else
        {
            liczSekTwoja += 2419200;
            dataLicz.miesiac -= 1;
        }
    }

    while (dataLicz.dzien > 1)
    {
        liczSekTwoja += 86400;
        dataLicz.dzien -= 1;
    }

    while (dataLicz.godzina > 0)
    {
        liczSekTwoja += 3600;
        dataLicz.godzina -= 1;
    }

    while (dataLicz.minuta > 0)
    {
        liczSekTwoja += 60;
        dataLicz.minuta -= 1;
    }

    liczSekTwoja += dataLicz.sekunda;

    printf("%i\n", time(0));
    printf("%i", liczSekTwoja);
}

int main()
{
    timestamptodate();
    printf("\n");
    datetotimestamp();
    return 0;
}
