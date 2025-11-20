#include <stdio.h>
int main() {
    int n, x, cont = 0;
    
    printf("Tamano del arreglo: ");
    scanf ("%d", &n);
    
    int v[n];
    
    for (int i =0; i<n; i++)
        scanf("%d", &v[i]);
        
    printf ("Numero a buscar: ");
    scanf ("%d", &x);
    
    for (int i= 0; i<n; i++)
        if (v[i]== x) cont++;
    printf("Se repite %d veces.\n", cont);
return 0;
}
