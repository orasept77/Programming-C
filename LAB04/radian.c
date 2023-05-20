#include <stdio.h>
#include <stdlib.h>

int main() {  
    int a;
    double b,c;
    printf("Co chcesz policzyc? \n1 = Radiany na stopnie \n2 = Stopnie na radiany\nWybierz madrze: ");
    scanf("%d",&a);

    printf("Wprowadz wartosc (uzywaj kropki jako przecinka): ");
    scanf("%lf",&c);
   
    switch (a) {
    case 1:
        b=c/3.14*180;
        printf("%.2f radianow to %.3f stopni",c,b);
        break;
    case 2:
        b=c*3.14/180;
        printf("%.2f Stopni to %.3f radianow",c,b);
        break;
   
    }
   
    getchar();
    getchar();
    return 0;
   
}