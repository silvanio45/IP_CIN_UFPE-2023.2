#include <stdio.h>

int main() {
    char mov;
    int n = 0, m = 0;
    int cont = 0;
    //scanf("%c", &mov);
    scanf("%c %d %d",&mov, &n, &m);
    int mat[n][m];
    int mataux[n][m];
    
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %d", &mat[i][j]);
        }
    }
    
    if(mov == 'H'){
        int k = n/2;
        for(int i = 0; i < k; i++){
            for(int j = 0; j < m; j++){
                mataux[i][j] = mat[i][j];
            }
        }
        for(int i = k; i < n; i++){
            for(int j = 0; j < m; j++){
                cont++;
                mataux[i][j] = mat[i][m - j - 1];
            }
        }
    } else if (mov == 'V') {
        int k = m/2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                mataux[i][j] = mat[i][j];
            }
        for(int i = 0; i < n; i++){
            for (int j = m-1; j >= k; j--) {
                mataux[i][j] = mat[n - i - 1][j];
                }  
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%.2d ", mataux[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
