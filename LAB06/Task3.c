#include<stdio.h>

int main()
{
   int i,rows,k=1;
   printf("Wprowadz numer wierszy dla spirali");
   scanf("%d",&rows);
   for(i=1;i<=rows*2;i+=2)
   {
      if(k%2==1)
      {
        printf("%3d %3d",i,i+1);
        k++;
      }
      else
      {
        printf("%3d %3d",i+1,i);
        k++;
      }
      printf("\n");
   }
}