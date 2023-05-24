#include <stdio.h>
#include <stdlib.h>

int power(float a, int b)
{
    int m = 1;
    float pot=a;
    while (m < b)
    {
        a *= pot;
        m++;
    }
    printf("%f\n", a);
    return 0;
}

int main()
{
    power(0.5, 4);
    return 0;
}
