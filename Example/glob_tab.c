#include<stdio.h>

void ivec_read();
void ivec_print();
int n;
int main() 
{
   ivec_read();
   ivec_print();
   return 0;
}

void ivec_read () 
{
   int i;
   extern int a[]; /* external array declaration */
   scanf("%d", &n);
   for(i = 0; i < n; i++)
   scanf("%d", &a[i]);
}

int a[10]; /* external array definition */
void ivec_print() 
{
   int i;
   for(i = 0; i < n; i++)
   printf("%d", a[i]);
   printf("\n");
}