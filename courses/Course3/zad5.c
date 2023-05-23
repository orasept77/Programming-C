// 5. Kurs Programowania w C - Operatory logiczne [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=5]

#include <stdio.h>

int main(){
    int a;

    //a = (30 == 30);
    printf("(30 == 30): %d\n", (30 == 30) );

    a = (3.3 != 3.3);
    printf("(3.3 != 3.3): %d\n", a);

    a = (6 > 3.3);
    printf("(6 > 3.3): %d\n", a);

    a = (6 < 3.3);
    printf("(6 < 3.3): %d\n", a);

    a = (6 >= 7);
    printf("(6 >= 7): %d\n", a);

    a = (6 >= 6);
    printf("(6>=6): %d\n", a);

    a = (-1 || 0);
    printf("(-1||0): %d\n", a);

    a = (0 && 15);
    printf("(0&&15): %d\n", a);

    a = -6;
    printf("!(-6): %d\n", !a);
    a = 0;
    printf("!(0): %d\n", !a);

    return 0;
}

/*
    każde z tych wyrażeń daje wynik 0 albo 1
    a == b         czy a jest równe b
    a > b          czy a jest większe od b
    a >= b         czy a jest większe bądź równe b
    a < b          czy a jest mniejsze od b
    a <= b         czy a jest mniejsze bądź równe b
    a != b         czy a jest różne od b
    a || b         (LUB)        czy a lub b jest różne od 0 dwa zera musza byc aby byl falsz inaczej jest prawda
    a && b         (ORAZ)       czy a i b jest różne od 0 dwa muszą byc prawdą inazcej bedzie falsz
    !a             (NEGACJA)    czy a jest równe od 0 to 1,
                                w przeciwnym wypadku 0
*/