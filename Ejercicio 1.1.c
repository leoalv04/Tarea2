#include <stdio.h›
int main() {
  float a,b;
  printf ("Ingrese dos numeros: ");
  scanf("%f %f", &a,&b);

  printf ("Suma: %.2f\n", a + b);
  printf ("Resta: %.2f\n" a - b);
  printf( "Multiplicacion: %.2f\n", a * b);
  return 0;

}
