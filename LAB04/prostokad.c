#include <stdio.h>
#include <stdlib.h>
int main() {  
    int szer,wys,i,j=0;
    printf("podaj szerokosc: ");
    scanf("%d",&szer);
    printf("podaj wysokosc: ");
    scanf("%d",&wys);
    for (i=0;i<wys;i++){  
        j=0;
        for (j=0;j<szer;j++)
        {
        printf("#");
        }
        printf("\n"); 
   
    } 
    return 0;
   
}