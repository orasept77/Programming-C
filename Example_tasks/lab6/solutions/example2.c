#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    int x = 9;
    int *wsk;

    wsk = &x;

    int y = 5 * *wsk;

    return 0;
}
