#include <stdio.h>

int main(int argc, char const *argv[])
{
    float tab[4][2];

    tab[0][0] = 3.1;
    tab[0][1] = 3.6;
    tab[1][0] = 2.2;
    tab[1][1] = 6.42;
    tab[2][0] = 3.1;
    tab[2][1] = 3.6;
    tab[3][0] = 3.5;
    tab[3][1] = 32.6;

    // Inicjalizacja tablicy i równoczesne przypisanie wartości
    float tab2[4][2] = {{3.1, 3.6},
                        {2.2, 6.42},
                        {3.1, 3.6},
                        {3.5, 32.6}};

    return 0;
}
