#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double euclidDistance(double point1[3], double point2[3])
{
    double sum = 0;
    for(int i=0; i<3; i++)
    {
        double diff = point2[i] - point1[i];
        sum += diff * diff;
    }

    return sqrt(sum);
}

int main(int argc, char const *argv[])
{
    double points[4][3]={{1,2,3},{3,2,1},{2,3,1},{1,3,1}};

    FILE *f = fopen("euclidDistance.txt", "w+");
    {
        if(f == NULL)
        {
            printf("BLAD\n");
        }
    }
    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            double wynik = euclidDistance(points[i], points[j]);
            fprintf(f, "wynik [%d][%d]: %lf\n", i+1, j+1, wynik);
        }
    }
    fclose(f);
    return 0;
}
