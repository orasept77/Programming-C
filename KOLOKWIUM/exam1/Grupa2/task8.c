#include <stdio.h>
#include <stdlib.h>

int countk()
{
    char znaki[5] = "kkkk";
    char znaki1[6] = " k k ";
    char znaki2[9] = "k asd kk";
    int powtorzenia = 0;
    int powtorzenia1 = 0;
    int powtorzenia2 = 0;
    for (int l = 0; l < 4; l++)
    {
        if (znaki[l] == 'k')
        {
            powtorzenia += 1;
        }
    }
    for (int n = 0; n < 6; n++)
    {
        if (znaki1[n] == 'k')
        {
            powtorzenia1 += 1;
        }
    }
    for (int o = 0; o < 10; o++)
    {
        if (znaki2[o] == 'k')
        {
            powtorzenia2 += 1;
        }
    }
    printf("%s zawiera %d litery k\n", znaki, powtorzenia);
    printf("%s zawiera %d litery k\n", znaki1, powtorzenia1);
    printf("%s zawiera %d litery k\n", znaki2, powtorzenia2);
    return 0;
}

int main(int argc, char const *argv[])
{
    countk();
    return 0;
}
