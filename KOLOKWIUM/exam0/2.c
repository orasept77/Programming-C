#include <stdio.h>

float med(float a, float b, float c) {
    if ((a >= b && a <= c) || (a >= c && a <= b))
        return a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        return b;
    else
        return c;
}

int main() {
    float a = 4.5, b = 10.5, c = 12.2;
    printf("%.2f\n", med(a, b, c));
    return 0;
}
