#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    double a;
    double b;
    double h;
    double V;
    double Pc;
    double D;
} Cuboid;

Cuboid task11_var[100];

void calculate(Cuboid* cuboid){
    cuboid->V = cuboid->a * cuboid->b * cuboid->h;
    cuboid->Pc = 2 * (cuboid->a * cuboid->b + cuboid->a * cuboid->h + cuboid->b * cuboid->h);
    cuboid->D = sqrt(cuboid->a*cuboid->a + cuboid->b*cuboid->b + cuboid->h*cuboid->h);
}

void showCuboid(Cuboid* cuboid){
    printf("Cuboid{a=%.3f, b=%.3f, h=%.3f, V=%.3f, Pc=%.3f, D=%.3f}\n",
           cuboid->a, cuboid->b, cuboid->h, cuboid->V, cuboid->Pc, cuboid->D);
}

int main(){
    srand(time(NULL));
    for(int i = 0; i < 100; i++){
        task11_var[i].a = (double)rand()/RAND_MAX * 10; 
        task11_var[i].b = (double)rand()/RAND_MAX * 10; 
        task11_var[i].h = (double)rand()/RAND_MAX * 10;
        calculate(&task11_var[i]);
    }
    for(int i = 0; i < 100; i++){
        showCuboid(&task11_var[i]);
    }
    return 0;
}