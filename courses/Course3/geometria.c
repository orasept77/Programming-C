#include "geometria.h"

static const double pi = 3.14159;

static double kwadrat(double x){
    return x*x;
}

double pole(double r){
    double pole = pi * kwadrat(r);
    return pole;
}

double obwod(double r){
    double obwod = 2 * pi * r;
    return obwod;
}