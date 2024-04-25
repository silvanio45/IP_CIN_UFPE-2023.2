#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    
    char entrada[n][50];
    int raiz[n];
    char saida[n][50];
    
    for(int i = 0; i < n; i++){
        scanf("%s", entrada[i]);
    }
    for(int i = 0; i < n; i++){
        memset(saida[i], 0, sizeof(saida[i]));
    }
    for(int i = 0; i < n; i++){
        int trava = 0;
        raiz[i] = (int)sqrt(strlen(entrada[i]));
        for(int j = 0; j < strlen(entrada[i]); j++){
            if((entrada[i][j] == 'A' || entrada[i][j] == 'E' || entrada[i][j] == 'I' || entrada[i][j] == 'O' || entrada[i][j] == 'U') && trava == 0){
                for(int s = 0; s < raiz[i]; s++){
                    if(j+s < strlen(entrada[i])) {
                        saida[i][s] = entrada[i][j+s];
                        trava = 1;
                    }         
                }
            }
        }
    }
   for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(saida[i], saida[j]) > 0) {
                char temp[50];
                strcpy(temp, saida[i]);
                strcpy(saida[i], saida[j]);
                strcpy(saida[j], temp);
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%s", saida[i]);
    }

    return 0;
}
