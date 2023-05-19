#include<stdio.h>
#include<math.h>

int main()
{

int a=6;
int b=5;
int c=4;
float delta;
float x,x1,x2;

   printf("Wartosci to a=%d, b=%d i c=%d\n",a,b,c);
delta=b*b-(4*a*c);
printf ("Delta wynosi %.2f\n",delta);
if(delta>0) x1=((-b)+(sqrt(delta)))/(2*a); x2=((-b)-sqrt(delta))/(2*a);
if(delta==0) x=(-b)/(2*a); 
if(delta<0) printf ("Delta ma wartosc ujemna, brak rozwiazan");
if(delta==0)printf ("Delta ma wartosc 0, rozwiazanie to: %.2f\n",x);
if(delta>0) printf("Rozwiazania to: %.2f i %.2f", x1, x2);

return 0;
}