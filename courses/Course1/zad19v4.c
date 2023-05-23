/*SUMAN - Suma
Twoim zadaniem będzie obliczenie następującej sumy: 1+2+3+4+...+n. Zadanie wygląda na proste ;) Ale chodzi w nim o napisaniu jak najkrótszego kodu, jest to zadanie typu challenge.

Wejście
Będziesz musiał rozwiązać dokładnie 10 przypadków testowych, w każdym z 10 wierszy znajduje sie dokładnie jedna liczba całkowita n (1<=n<=1000)

Wyjście
W każdym wierszu standardowego wyjścia powinna znaleźć się dokładnie jedna liczba, oznaczająca wartość sumy: 1+2+3+...+n.*/

#include <stdio.h>

// program liczący 10 liczb do n. NP. gdy podamy 10 to program policzy 1*2*3*4*5*6*7*8*9*10 itp.

int main()
{
    int input[10];
    long int wynik = 0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &input[i]);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < input[i]; j++)
            wynik += j + 1;

        printf("%ld\n", wynik);
        wynik = 0;
    }

    return 0;
}
