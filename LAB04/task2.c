#include <stdio.h>
#include <math.h>

const double ii = 3.1415924259;

double radianToDefree()
{
    double radian, degree;

    printf("Wpisz ile radianow zamienic na stopnie\n");
    scanf("%lf", &radian);

    degree = radian * (180 / ii);

    printf("Kat wynosi %.2lf\n", degree);
}

double degreeToRadian()
{
    double radian, degree;

    printf("Wypisz ile stopni zamienic na radiany\n");
    scanf("%lf", &degree);

    radian = degree * ii / 180;

    printf("Po zamianie to: %.2lf radianow.\n", radian);
}

int main(int argc, char const *argv[])
{
    radianToDefree();
    degreeToRadian();
    return 0;
}
