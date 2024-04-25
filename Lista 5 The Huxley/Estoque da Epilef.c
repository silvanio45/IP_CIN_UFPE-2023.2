 #include <stdio.h>
#include <string.h>

typedef struct{
    char nome[20];
    int quantidade;
    float preco;
} ixtoque;

int main()
{
    int trava = 0, n = 0, i = 0, j = 0;
    char interacao[20];
    scanf("%d", &n);
    ixtoque produto[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            produto[i][j].nome[0] = '\0';
        }
    }
    while (trava == 0){
        scanf("%s", interacao);
        if(strcmp(interacao, "CREATE") == 0){
            scanf("%d %d", &i, &j);
            if(produto[i][j].nome[0] == '\0'){
                scanf("%s %d %f", produto[i][j].nome, &produto[i][j].quantidade, &produto[i][j].preco);
                printf("Produto adicionado no estoque!\n");
            }else{
                printf("ERRO: espaco ja ocupado\n");
            }
        }else if(strcmp(interacao, "READ") == 0){
            char nome[20];
            scanf("%s", nome);
            int encontrado = 0;
            for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                    if(strcmp(produto[i][j].nome, nome) == 0){
                        printf("LINHA: %d COLUNA: %d QTD: %d PRECO: %.2f\n", i, j, produto[i][j].quantidade, produto[i][j].preco);
                        encontrado = 1;
                        break;
                    }
                }
                if(encontrado) break;
            }
            if(!encontrado) printf("Produto nao encontrado!\n");
        }else if(strcmp(interacao, "UPDATE") == 0){
            char nome[20];
            scanf("%s", nome);
            int encontrado = 0;
            for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                    if(strcmp(produto[i][j].nome, nome) == 0){
                        scanf("%d %f", &produto[i][j].quantidade, &produto[i][j].preco);
                        printf("Produto atualizado!\n");
                        encontrado = 1;
                        break;
                    }
                }
                if(encontrado) break;
            }
            if(!encontrado) printf("Produto nao encontrado!\n");
        }else if(strcmp(interacao, "DELETE") == 0){
            char nome[20];
            scanf("%s", nome);
            int encontrado = 0;
            for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                    if(strcmp(produto[i][j].nome, nome) == 0){
                        produto[i][j].nome[0] = '\0';
                        printf("Produto removido!\n");
                        encontrado = 1;
                        break;
                    }
                }
                if(encontrado) break;
            }
            if(!encontrado) printf("Produto nao encontrado!\n");
        }else if(strcmp(interacao, "PRINT") == 0){
            for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                    if(produto[i][j].nome[0] != '\0'){
                        printf("LINHA: %d COLUNA: %d NOME: %s QTD: %d PRECO: %.2f\n", i, j, produto[i][j].nome, produto[i][j].quantidade, produto[i][j].preco);
                    }
                }
            }
        }else if(strcmp(interacao, "EXIT") == 0){
            printf("Saindo...\n");
            trava = 1;
        }
    }
    return 0;
}
