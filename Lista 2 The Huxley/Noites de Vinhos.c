#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    double mediaTotal = 0.0;

    for (int i = 0; i < x; i++) {
        int numero, soma = 0, contador = 0;

        do {
            scanf("%d", &numero);
            if (numero != 0) {
                soma += numero;
                contador++;
            }
        } while (numero != 0);

        if (contador > 0) {
            int mediaLinha = (double)soma / contador;
            mediaTotal += mediaLinha;
        }
    }
    if (x > 0) {
        double mediaFinal = mediaTotal / x;
        printf("Elas beberam %.0f ta�as!", mediaTotal);
    }

    return 0;
}
