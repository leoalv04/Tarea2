#include <stdio.h>
int main(){
    int a, b;
    printf("Ingresa dos enteros: ");
    scanf ("%d %d", &a, &b);
    
    if (b != 0 && a % b == 0)
        printf("%d es divisor de %d\n", b, a);
    else
        printf("No es divisor.\n");
return 0;

}
