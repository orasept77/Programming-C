#include <stdio.h>

int main(int argc, char const *argv[])
{
    short int var1 = 32000;
    float var2=0.94344;
    char var3= 'D';
    char var4[]="Olko";
    const int TAB_LEN=20; // stala rozni sie od zmiennej tym ze w kazdej funkcji jest stala i nie da sie jej zmienic poniewaz wraca do swojej pierwonej wartosci

    printf("%ld\n %f\n %c\n %s\n %i", var1, var2, var3, var4, TAB_LEN);
    return 0;
}
