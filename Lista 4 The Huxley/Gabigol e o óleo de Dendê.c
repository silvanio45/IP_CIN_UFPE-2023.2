#include <stdio.h>

int main() {
    char entrada[200001];
    int cont = 0;
    
    scanf("%s", entrada);
    
    for (int i = 0; entrada[i] != '\0'; ++i) {
        entrada[cont++] = entrada[i];
        while (cont >= 3 && entrada[cont - 3] == 'A' && entrada[cont - 2] == 'B' && entrada[cont - 1] == 'C') {
            cont -= 3;
        }
    }
    
    entrada[cont] = '\0';
    
    if (cont != 0) {
        printf("%s\n", entrada);
    } else {
        printf("string vazia\n");
    }
    return 0;
}
