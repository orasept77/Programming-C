#include <stdio.h>
#define LEN 5

int main(int argc, char const *argv[])
{
    // char a;
    // printf("Podaj wartosc a:");
    // scanf(" %c", a);
    // printf("a=", a);

    // char i[20];
    // printf("Podaj wartość i:");
    // scanf("%s", i);
    // printf("s = %s]\n", i);
    // printf("0 %c\n",i[0]);
    // printf("1 %c\n",i[1]);
    // printf("2 %c\n",i[2]);
    char tab[LEN];

    for(int i = 0; i < LEN;i++){
        printf("Podaj tab[%i]", i);
        scanf(" %c", &tab[i]);
    }

    printf("%s", tab);

    for(int i = 0; i < LEN;i++){
            char val[4];
            printf("Podaj tab[%i]", i);
            scanf("%s", &val);
            tab[i] = val[0];
    }

    printf("%s |",tab);

    // return 0;
}
