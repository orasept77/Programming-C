#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double calculateDistance(double tab1[], double tab2[]);

void calculateDistances(double tab[][3], int rows)
{
    double result[rows][rows];
    printf("%lf %d",tab[1][0], rows);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            double x = calculateDistance(tab[i], tab[j]);
            result[i][j] = x;
            printf("%d %d \n ",i,j, result[i][j]);
        }
        
    }
    // return result;
    
}

double calculateDistance(double tab1[], double tab2[]){
    double x = sqrt(pow(tab1[0]-tab2[0],2)+pow(tab1[1]-tab2[1],2)+pow(tab1[2]-tab2[2],2));
    return x;
}

int main(int argc, char const *argv[])
{
    double tab[][3] = { {1,1,1},
                        {2,2,2},
                        {3,3,3},
                         {3,3,3},
    };

    double result[3][3];
    
    printf("%lf", calculateDistance(tab[0], tab[1]));
    calculateDistances(tab, sizeof(tab)/sizeof(double)/3);



    return 0;
}
