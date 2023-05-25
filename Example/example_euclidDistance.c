#include <stdio.h>
#include <math.h>

// Funkcja euclidDistance() oblicza odległość Euklidesa pomiędzy dwoma punktami określonymi przez tablicę i zwraca obliczoną wartość
double euclidDistance(double point1[3], double point2[3])
{
    double sum = 0;

    for (int i = 0; i < 3; i++)
    {
        double diff = point2[i] - point1[i];
        sum += diff * diff;
    }

    return sqrt(sum);
}

int main(void)
{                          
    double points[4][3] = {{1, 1, 1},{2, 1, 1},{3, 3, 3},{1, 2, 3},};
    
    FILE *f = fopen("teskt.txt", "w");
    if(f == NULL)
    {
        printf(" blad ");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            double dist = euclidDistance(points[i], points[j]);
            fprintf(f , "Odleglosc pomiedzy %d i %d wynosi %f\n", i + 1, j + 1, dist);
        }
    }
    fclose(f);
    return 0;
}