// 11. Kurs Programowania w C - funckcje i procedury [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=11]

#include <stdio.h>

int iloczyn(int, int);
void proc2(void);
void proc3(void);

void komunikat(int a){
    puts("Wyświetlanie komunikatu!");
    if(a==5){
        return komunikat(4);
    }
    puts("Ten tekst");
}

float zaokraglenie(float a){
    return (int)(a+0.49f);
}

void proc1(void){
    puts("proc1 start");
    proc2();
    puts("proc1 koniec");
}

void proc2(void){
    puts("proc2 start");
    return proc3();
    puts("proc2 koniec");
}

void proc3(void){
    puts("proc3 start");
    puts("proc3 koniec");
}


int main(void) {
    proc1();

    float f;
    puts("Podaj liczbę z przecinkiem");
    scanf("%f", &f);
    printf("Zaokraglenie liczy %f wynosi %f\n", f, zaokraglenie(f));

    komunikat(5);

    puts("Podaj 2 liczby!");
    int a,b;
    scanf("%d %d", &a, &b);
    printf("Iloczyn liczby %d i %d wynosi %d", a, b, iloczyn(a,b));
    return 0;
}

int iloczyn(int a, int b){
    return a*b;
    puts("Koniec");
}