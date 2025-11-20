#include <stdio.h>
int main() {
    int n, suma = 0;
    printf("Tamaño del arreglo: ");
    scanf ("%d", &n);
    
    int v[n];
    for (int i= 0; i < n; i++) {
        scanf ("%d", &v[i]);
        suma += v[i];
    }
    printf("Suma total: %d\n", suma);
return 0;

}
