#include <stdio.h>
#include <stdbool.h>

// z użyciem dodatkowej zmiennej
void swap(float *a, float*b){
    // ustawiam zmienna pomocniczą w której przechowam wartość a
    float temp = *a;
    // zapisuje pod adresem przechowywanym przez a wartość zmiennej spod adresu b
    *a = *b;
    // zapisuje pod adresem przechowywanym przez b wartość zmiennej a przechowywanej w temp
    *b = temp;
}

// bez dodatkowej zmiennej
void swap2(float *a, float*b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}


int main(int argc, char const *argv[])
{
    float a = 4.0;
    float b = 9.0;

    swap(&a, &b);

    printf("dzialanie swap a = %f b=%f\n", a,b);

    swap2(&a,&b);
    printf("dzialanie swap2 a = %f b=%f", a,b);
    return 0;
}
