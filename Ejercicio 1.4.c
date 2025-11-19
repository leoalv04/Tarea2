#include <stdio.h>
int main() {
    float capital, tasa, monto; 
    printf ("Capital invertido: ");
    scanf ("%f", &capital);
    
    printf ("Tasa mensual (%%): ");
    scanf ("%f", &tasa);
    monto = capital + (capital * tasa / 100);
    printf("Monto al final del mes: %.2F\n", monto);

    return 0;
}
