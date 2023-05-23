// 9. Kurs Programowania w C - Pętla for [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=9]

#include <stdio.h>

int main(){

    puts("Pętla while:");
    int a = 1;
    while(a < 10){
        printf("%d\n", a);
        ++a;
    }

    puts("\nPętla for:");
    int i;
    for(i = 1 ; i < 10; ++i){
        printf("%d\n", i);
    }

    puts("\nSilnia z n:");
    int n = 8;
    int wynik = 1;
    for(i = n; i > 0; --i){
        wynik *= i;
    }
    printf("Silnia z %d wynosi %d\n", n, wynik);

    puts("\nSuma n pierwszych liczb naturalnych:");
    n = 100;
    wynik = 0;
    for(i = 0; i<=n; ++i){
        wynik += i;
    }

    printf("Suma %d pierwszych liczb naturalnych wynosi %d\n", n, wynik);

    return 0;




}