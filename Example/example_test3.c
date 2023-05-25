#include <time.h>
#include <stdio.h>
struct date
{
    int rok;
    int miesiac;
    int dzien;
    int godz;
    int min;
};

int timestamptodate(time_t ts)

{

    printf("%li\n", ts);

    struct date d;
    long int rok = 31536000;
    long int miesiac = 2592000;
    long int dzien = 86400;
    long int godz = 3600;
    long int min = 60;
    d.rok = ts / rok;
    printf("%li %li\n",d.rok);
    d.miesiac = (ts - (rok * d.rok)) / miesiac +1;
    printf("%li\n", d.miesiac);
    d.dzien = (ts - ((rok * d.rok) + (miesiac * (d.miesiac - 1)))) / dzien + 1;
    printf("%li\n", d.dzien);
    d.godz = (ts - ((rok * d.rok) + (miesiac * (d.miesiac - 1)) + (dzien * (d.dzien - 1)))) / godz;
    printf("%li\n", d.godz);
    d.min = (ts-((rok *d.rok)+(miesiac *(d.miesiac-1))+(dzien *(d.dzien-1))+(godz*(d.godz))))/min    ;
    printf("%li\n", d.min);
    return 0;
};

int main(int argc, char const *argv[])
{
    int ts = time(0);
    timestamptodate(ts);
    return 0;
}
