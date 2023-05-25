#include <stdio.h>
#include <stdarg.h> // Wymagana jest biblioteka w której zadeklarowane są użyte funkcje va_start, va_end
#include <math.h>

double odchstd(int argc, ...){ // w argc przechowuje liczbę argumentów
    va_list arg; // specjalny typ do przechowywania argumentów
    va_start(arg, argc); // rozpoczęcie odczytu

    //  stała która będzie przechowywać rozmiar tablicy równy ilości argumentów.
    const int N = argc;
    // inicjalizazcja tablicy zdolnej przechować N argumentów
    double tab[N];
    
    // Odczytuje kolejne elementy i dodaje do tablicy.
    for (int i = 0; i<argc; i++) { // va_arg(arg, int) odczytuje argumenty danego typu
        tab[i] = va_arg(arg,double);
    }
    va_end(arg); // zakończenie odczytu

    // obliczenie średniej
    double srednia = 0;
    for(int j = 0; j< argc; j++){
        srednia += tab[j];
    }
    srednia = srednia/argc;

    // obliczenie odchylenia
    double odchstd = 0;
    for (int i = 0; i < argc; i++)
    {
        double roznica = tab[i] - srednia;
        odchstd += roznica*roznica;
    }
    odchstd = odchstd/argc;
    odchstd = sqrt(odchstd); 
    
    return odchstd;
}

int main(int argc, char const *argv[])
{
    double wynik = odchstd(4, 1.0, 2.0, 3.0, 4.0);
    printf("odchylenie standardowe wynosi: %lf", wynik);
    return 0;
}