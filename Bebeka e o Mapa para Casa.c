#include <stdio.h>

int main() {
    int posicao = 20, posicao2 = 0;
    char direcao;
    int distancia;
    
    while (1) {
        scanf(" %c %d", &direcao, &distancia);

        if (direcao == 'x') {
            printf(".");
            for (int x = 0; x < posicao; x++) {
                printf(" ");
            }
            printf("x\n");
            break;
        } else if (direcao == 'd') {
            printf(".");
            for (int y = 0; y < posicao; y++) {
                printf(" ");
    
            }
            
            for (int z = 0; z < distancia; z++) {
                printf("->");
            }
            printf("\n");
            posicao += distancia + distancia ;
        } else if (direcao == 'e') {
            posicao -= distancia + distancia;
            printf(".");

            for (int k = 0; k < posicao; k++) {
                printf(" ");
            }
            
            for (int q = 0; q < distancia; q++) {
                printf("<-");
            }
            printf("\n");
        } else if (direcao == 'f') {
            for (int r = 0; r < distancia; r++) {
                printf(".");
                for (int j = 0; j < posicao; j++) {
                 printf(" "); 
                }
                printf("|\n");
            }
        }
    }

    return 0;
}
