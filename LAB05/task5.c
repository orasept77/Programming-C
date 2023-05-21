#include <stdio.h>
#include <math.h>
#include <conio.h>

void funkcja_kwadratowa()
{
   int a,b,c,delta;
   float x1,x2;
 
   printf("Wprowadz wartosci a,b,c : ");
   scanf("%d %d %d",&a, &b, &c);
   delta=b*b-4*a*c;
   if(delta==0)
   {
     printf("Funkcja ma jedno mijsce zerowe.\n");
     x1=-b/(2.0*a);
     printf("Wartosc miejsca zerowego to %f\n",x1);
    
   }
   else if(delta>0)
	{
	   printf("funckja ma dwa miejsca zerowe\n");
	   x1=(-b+sqrt(delta))/(2*a);
	   x2=(-b-sqrt(delta))/(2*a);
	   printf("X 1 = %f\n",x1);
	   printf("X 2= %f\n",x2);
	}
	else
	    printf("Funkcja nie ma miejsc zerowych \n");
}

void main(){
    funkcja_kwadratowa();
    _getch();

}