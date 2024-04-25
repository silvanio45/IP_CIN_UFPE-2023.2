#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    float valor;
    int quantidade;
} item;

int main() {
    int n = 0;
    float preco = 0, total = 0, pago = 0, troco = 0;
    char data[6];
    scanf("%d", &n);

    item produto[n], temp;
    
    for (int i = 0; i < n; i++) {
        scanf("%29s", produto[i].nome);
        scanf("%f", &produto[i].valor);
        scanf("%d", &produto[i].quantidade);
    }
    
    scanf(" Luisa foi ao mercado no dia %5s", data);
    scanf(" com R$%f", &pago);
    
    printf("=============\n");
    printf("NF - 0123\n");
    printf("Data - %s\n", data);
    printf("=============\n");
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(produto[i].nome, produto[j].nome) > 0) {
                temp = produto[i];
                produto[i] = produto[j];
                produto[j] = temp;
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        preco = (produto[i].valor*produto[i].quantidade);
        total = total + preco;
        printf("%dx %s - R$%.2f\n", produto[i].quantidade, produto[i].nome, preco);
    }
    
    troco = pago - total;
    
    printf("\nValor Total - R$%.2f\n", total);
    printf("Pago - R$%.0f\n", pago);
    printf("Troco - R$%.2f\n", troco);
    printf("=============\n");
    
    return 0;
}
