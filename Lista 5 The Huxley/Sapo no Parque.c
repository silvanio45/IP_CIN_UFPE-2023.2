#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int diversao;
    int aborrecimento;
} Brinquedo;

typedef struct {
    char nome[30];
    int vezes;
} Resultado;

int main() {
    Brinquedo brinquedos[3];
    Resultado resultados[3];
    int div_total = 0;
    int max_div = 0;
    int brinquedo_escolhido;

    for (int i = 0; i < 3; i++) {
        scanf("%29[^\n]", brinquedos[i].nome);
        getchar();
        scanf("%d %d", &brinquedos[i].diversao, &brinquedos[i].aborrecimento);
        getchar();
        strcpy(resultados[i].nome, brinquedos[i].nome);
        resultados[i].vezes = 0;
    }

    for(int t = 0; t < 3; t++){
        max_div = 0;
        for(int i = 0; i < 3; i++){
            int div = brinquedos[i].diversao - ((resultados[i].vezes*resultados[i].vezes)*brinquedos[i].aborrecimento);
            if(div > max_div){
                max_div = div;
                brinquedo_escolhido = i;
            }
        }
        div_total += max_div;
        resultados[brinquedo_escolhido].vezes++;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (resultados[j].vezes > resultados[i].vezes) {
                Resultado temp = resultados[i];
                resultados[i] = resultados[j];
                resultados[j] = temp;
            }
        }
    }

    printf("a maior diversao foi: %d\n", div_total);
    printf("indo nos brinquedos: ");
    for(int i = 0; i < 3; i++){
        if(resultados[i].vezes > 0){
            if(resultados[i].vezes > 1){
                if(resultados[i+1].vezes != 0 || i == 2){
                    printf("%s %d vezes, ", resultados[i].nome, resultados[i].vezes);
                } else {
                   printf("%s %d vezes. ", resultados[i].nome, resultados[i].vezes); 
                }
                
            }else if(resultados[i].vezes == 1){
                if(resultados[i+1].vezes == 0 || i == 2){
                    printf("%s %d vez. ", resultados[i].nome, resultados[i].vezes);
                } else {
                    printf("%s %d vez, ", resultados[i].nome, resultados[i].vezes); 
                }
            }
            
        }
    }
    printf("\n");

    return 0;
}
