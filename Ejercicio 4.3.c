#include <stdio.h>
int main() {
    int n, pos = 0, neg = 0, cer = 0;
    
    printf ("Tamano del arreglo: ");
    scanf ("%d", &n);
    
    int v[n];
    
    for (int i = 0; i < n; i++) {
        scanf ("%d", &v[i]);
        if (v[i] > 0) pos++;
        else if (v[i]< 0) neg++;
        else cer++;
    }
    printf ("Positivos: %d\nNegativos: %d\nCeros: %d\n", pos, neg, cer);
return 0;
}
