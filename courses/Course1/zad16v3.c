#include <stdio.h>

//program średniej arytmetycznej

float srednia();
int dane[10] = {5, 5, 9, 1, 10, 1, 4, 8, 5, 6};

int main(void)
{
    float sredniax = srednia();
    printf("%f", sredniax);

    return 0;
}

float srednia()
{
    int suma = 0;
    for (int i = 0; i < 10; i++)
        suma += dane[i];
    return (suma / 10.0);
}