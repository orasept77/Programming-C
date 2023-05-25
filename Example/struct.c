#include <stdio.h>

struct prostokat
{
    int a;
    int b;
};

int asd(struct prostokat a)
{
    return a.a*a.b;
}

int main()
{
    struct prostokat tab2[10];
    int a=0;
    while(a<10)
    {
        tab2[a].a=2;
        tab2[a].b=4;
        a++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", asd(tab2[i]));
    }
    
    return 0;
}