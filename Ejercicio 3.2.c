#include <stdio.h>

int main() {
    int num;
    int positivos = 0, negativos = 0, nulos = 0;
    int contador = 0;

    printf("Lectura de 100 numeros y conteo de positivos, negativos y nulos.\n\n");

    for (contador = 0; contador < 100; contador++) {

        printf("Numero %d: ", contador + 1);
        scanf("%d", &num);

        while (1) {
            if (num > 0) {
                positivos++;
            } else if (num < 0) {
                negativos++;
            } else {
                nulos++;
            }
            break; 
        }
    }

    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
