// 6. Kurs Programowania w C - Instrukcja if [https://www.youtube.com/watch?v=Ik6JDCy6-Tg&list=PLgeFsJ0yZyikV_e8YDl5rixXu-H6wFIIZ&index=6]

#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    char znak = 'A';
    char* napis = "KisioJ";
    float b = 50.0;

    if(a == 50)
    {
        printf("a jest równe 50\n");
    }
    else if(a < 50)
    {
        printf("a jest mniejsze od 50\n");
    }
    else
    {
        printf("a jest większe od 50\n");
    }

    if(a)
    {
        printf("a jest różne od 0\n");
    }

    if(a >= 25 && a <= 75)
    {
        printf("a znajduje się w przedziale [25,75]\n");
    }
    else
    {
        printf("a znajduje się poza przedziałem [25,75]\n");
    }

    if(a || !a)
    {
        printf("Ten napis wyświetli się zawsze!\n");
    }

    if(znak == 65)
    {
        printf("Znak jest równy 65, ponieważ 'A' jest równe 65\n");
    }

    if(b == 50){
        printf("50.0 jest równe 50\n");
    }

    if(napis == "Kisioj")
    {
        printf("Tak, napis jest równy Kisioj\n");
    }
    else
    {
        printf("Nie, napis nie jest równy Kisioj, lecz %s\n", napis);
    }

    /*
        if(a == 5){
            a = b;
        }else{
            a = c;
        }
        a = ( (a==5) ? b : c );
    */

    a = 50;
    printf("Zmienna a jest %s 50", (a>50)?"większa od":"mniejsza bądź równa");
    return 0;
}
