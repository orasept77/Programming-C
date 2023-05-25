#include <stdio.h> //dodawanie w macierzy
  
int main() {
    int tab [5][5];
    int suma = 0;
    int a,b,c,d;
  
    for(a = 0; a < 5; a++)
     for(b = 0; b < 5; b++)
     {
        printf("Podaj wartosc tablicy: ");
        scanf("%d", &tab[a][b]);
     }
     
    d=4;
    for(c = 0; c < 5;++c)
    {
        suma+=tab[c][d];
        d--;
    }
      printf("%d", suma);
  
   return(0);
}
