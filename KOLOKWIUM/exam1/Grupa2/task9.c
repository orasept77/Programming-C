#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int album=0;
    int *wsk1;
    wsk1=&album;
    printf("%p\n", &wsk1);
    printf("%d\n", *wsk1);
    *wsk1=125148;
    printf("%d", album);
    
    return 0;
}
