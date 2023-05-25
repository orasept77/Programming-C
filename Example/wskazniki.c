#include <stdio.h>



int main()
{
    int *wsk;
    int abc=6;
    printf("%p\n", &abc);

    wsk= &abc;
    *wsk=85;
    printf("%d\n", abc);

    //char empty = \0;
    char str[5]="abcd";
    char str2[5]="ABCDE";
    printf("%s", str);
    printf("%s", str2);

    return 0;
}