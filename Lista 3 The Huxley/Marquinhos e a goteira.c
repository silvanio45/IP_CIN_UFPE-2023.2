#include <stdio.h>

int main() {
    
    int m, n, val, linha;
    scanf("%d %d", &n, &m);
    char mat[n][m];
    if(n>=3 && m>=3){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
        scanf(" %c", &mat[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(mat[i][j]=='o'){
                val = val + 1;
                linha = i;
            }
            break;
        }
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(mat[i][j]=='#'){
                mat[i - 1][j] = 'o';
                if(j>0)
                mat[i - 1][j - 1] = 'o';
                if(j < m - 1)
                mat[i - 1][j + 1] = 'o';
                
                if(mat[i][j - 1] != '#'){
                    if(j > 0){
                   mat[i][j - 1] = 'o'; 
                    }
                }
                if(mat[i][j + 1] != '#'){
                    if(j < m - 1){
                    mat[i][j + 1] = 'o';
                    }
            }
        }
    }
}
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(mat[i][j] == 'o' && mat[i + 1][j] != '#'){
                    mat[i + 1][j] = 'o';
        }        
    }
}
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
        printf("%c", mat[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}
