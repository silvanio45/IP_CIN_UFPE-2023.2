#include <stdio.h>

int main()
{
    int n;
    char M;
    scanf("%d", &n);
    char mat[n][n];
    char mataux[n][n];
    int cont = 0;
    if(n >= 1 && n <= 10){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
             scanf(" %c", &mat[i][j]);
        }
    }
    while(scanf(" %c", &M) != EOF){
    if(M == 'R'){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
             if(mat[i][j] == 'x'){
                 mat[i][j] = 'C';
                 mat[i][0] = 'x';
             }
        }
    }
    }else if(M == 'L'){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 'x'){
                 mat[i][j] = 'C';
                 mat[i][n-1] = 'x';
             }
        }
    }     
    }else if(M == 'U'){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 'x'){
                 mat[i][j] = 'C';
                 mat[n-1][j] = 'x';
             }
             
        }
    }
    }else if(M == 'D'){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 'x'){
                 mat[i][j] = 'C';
                 mat[0][j] = 'x';
             }
        }
    }
    }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
    }

    return 0;
}
