// 12. Kurs jezyka c - tablice [https://www.youtube.com/watch?v=1p9gdwaSKxk&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=12]

#include <stdio.h>
#include <stdlib.h>

int temp[3]; //[0],[1],[2]
int i = 3;

/*int temp1=22;
int temp2=22;
int temp3=23;*/

int main()
{
    temp[0] = 22;
    temp[1] = 24;
    temp[2] = 26;

    while (i--)
    {
        printf("%d\n", temp[i]);
    }
    return 0;
}
