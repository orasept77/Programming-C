#include <stdio.h>
#include <stdlib.h>

struct asd
{
    int x;
};


struct rect
{
    int x;
    int y;
    struct asd f;
};

int pole(struct rect x){
    return x.x * x.y;
}


int main(int argc, char const *argv[])
{
    struct rect a = {9,3};
    printf("%i", pole(a));
    /* code */
    return 0;
}
