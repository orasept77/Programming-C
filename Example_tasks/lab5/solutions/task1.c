#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    unsigned char a;
    for (int i = 0; i < 256; i++)
    {
        a=i;
        printf("<%c> = %i\n", a, i);
    }


    int x = 255/3;
    for (int i = 0 ; i < x; i++)
    {   
        
        a=i;
        printf("<%c> = %i \t <%c> = %i \t <%c> = %i\n", a, i, a+x, i+x, 2*x+a, 2*x+i);
    }

    return exit(EXIT_FAILURE);
    return 0;
}
