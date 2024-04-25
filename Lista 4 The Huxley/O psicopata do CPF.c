#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char nome[n][15];
    char cpf[n][12];
    char senhaCin[n][13];
    char dig[n][20];

    for (int i = 0; i < n; i++) {
        scanf("%s", nome[i]);
        scanf("%s", cpf[i]);
    }

    for (int i = 0; i < n; i++) {
        int len = strlen(nome[i]);
        for (int j = 0; j < len && j < 10; j++) {
            if (nome[i][j] >= 'a' && nome[i][j] <= 'z' && cpf[i][j] >= '0' && cpf[i][j] <= '9') {
                senhaCin[i][j] = ((nome[i][j] - 'a' + (cpf[i][j] - '0')) % 26) + 'a';
            }
        }
        senhaCin[i][10] = cpf[i][8];
        senhaCin[i][11] = cpf[i][9];
        senhaCin[i][12] = '\0';
    }

    for(int i = 0; i<n; i++){
        int cont =  0;
        for(int j = 9; j<11; j++){
            dig[i][cont] = cpf[i][j];
            cont++;
        }
        dig[i][cont] = '\0';
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(nome[j], nome[j+1]) > 0) {
                char tempNome[15];
                char tempSenhaCin[15];
                char tempDig[20];

                strcpy(tempNome, nome[j]);
                strcpy(nome[j], nome[j+1]);
                strcpy(nome[j+1], tempNome);

                strcpy(tempSenhaCin, senhaCin[j]);
                strcpy(senhaCin[j], senhaCin[j+1]);
                strcpy(senhaCin[j+1], tempSenhaCin);

                strcpy(tempDig, dig[j]);
                strcpy(dig[j], dig[j+1]);
                strcpy(dig[j+1], tempDig);
            }
        }
    }

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", nome[i]);
        int tt = strlen(nome[i]);
        for(int j = 0; j<tt; j++){
            printf("%c", senhaCin[i][j]);
        }
        printf("%s\n", dig[i]);
    }
    return 0;
}
