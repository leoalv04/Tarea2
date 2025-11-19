#include <stdio.h>
int main () {
    float compra, total;
    
    printf ("Total de la compra: ");
    scanf ("%f", &compra);
    
    if (compra > 2500)
        total = compra * 0.92;
        
    else
        total = compra;
    printf ("Importe a pagar: %.2f\n", total);
return 0;

}
