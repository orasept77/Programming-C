#include <stdlib.h>
#include <stdio.h>

struct asd
{
    int a;
    int b;
};

void asd(struct asd asd, struct asd *wsk){
    asd.a= 10;
    asd.b = 20;

    wsk->a = 4;
    wsk->b = 6;
};

int main(int argc, char const *argv[])
{

    struct asd f;
    f.a = 0;
    f.b = 0;

    asd(f, &f);
    
    printf("%i", f.a);

    return 0;
}
