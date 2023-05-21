#include <stdio.h>
#include <stdlib.h>

union u{
    int var;
    char *str;
};

char * varToString(int var)
{
    union u u;
    u.var = var;

    //alokacja pamieci
    u.str = (char *)malloc(32 * sizeof(char));
    if (u.str == NULL)
        exit(EXIT_FAILURE);

    //zapisywanie wartosci do napisu
    sprintf(u.str, "%d", u.var);

    return u.str;
}
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
