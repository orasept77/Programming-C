#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float tab[7]={0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7};
    for(int i=6; i>-1; i--)
    {
        printf("%.1f ", tab[i]);
    }
    return 0;
}
