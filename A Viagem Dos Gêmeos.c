#include <stdio.h>

int main() {
    int n, i, z, linha, espaco, caractere, janela = 0, cordoes = 0, base = 0, pontos = 0;

    scanf("%d", &n);

    for (linha = 1; linha <= n; linha++) {
        for (espaco = 1; espaco <= n - linha; espaco++) {
            pontos = pontos + 1;
            printf(".");
        }
        for (caractere = 1; caractere <= 2 * linha - 1; caractere++) {
            if (caractere % 2 == 1) {
                printf("&");
                janela = janela + 1;
            } else {
                cordoes = cordoes + 1;
                printf("-");
            }
        }
        for (espaco = 1; espaco <= n - linha; espaco++) {
            pontos = pontos + 1;
            printf(".");
        }
        printf("\n");
        
        }
        z = (2*n) - 1;
        for(i = 1; i<=z; i++){
            printf("#");
        }
        base = (z*100);
        int CT = base + (janela*200) + (cordoes*50);
        printf("\n");
        printf("O valor total foi: %d", CT);
    return 0;
}
