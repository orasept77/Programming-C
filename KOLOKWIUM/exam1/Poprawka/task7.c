#include <stdio.h>

double volumeOfCuboid(double a, double b, double c) {
  return a * b * c;
}

int main(void) {
  double a, b, c;

  a = 3.3;
  b = 3.21;
  c = 5.0;
  printf("Objetosc prostopadloscianu o bokach %.2f, %.2f, %.2f wynosi %.2f\n", a, b, c, volumeOfCuboid(a, b, c));

  a = 1.0;
  b = 1.0;
  c = 1.0;
  printf("Objetosc prostopadloscianu o bokach %.2f, %.2f, %.2f wynosi %.2f\n", a, b, c, volumeOfCuboid(a, b, c));

  a = 1.0;
  b = 2.0;
  c = 3.0;
  printf("Objetosc prostopadloscianu o bokach %.2f, %.2f, %.2f wynosi %.2f\n", a, b, c, volumeOfCuboid(a, b, c));

  return 0;
}