#include <stdio.h>
int main(){
    float dist, precio;
    int dias;
    
    printf("Distancia de ida (km): ");
    scanf ("%f", &dist);
    
    printf("Dias de estancia: ");
    scanf("%d", &dias);
    
    precio = dist * 2 * 0.23; 
    if (dias > 7 && (dist * 2) > 800)
    precio *=0.70;

printf("Precio del ticket: %.2f\n", precio);
return 0;

}
