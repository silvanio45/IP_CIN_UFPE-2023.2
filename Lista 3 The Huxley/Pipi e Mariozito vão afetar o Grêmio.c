#include <stdio.h>

int main() {
    int n = 0, soma = 0, ver = 0, d = 0, guardak = 0, somal = 0;
    char t;
    scanf("%d %c\n", &n, &t);
    int mat[n][4][6];
    int formacao[4];
    for(int k=0;k<n;k++){
        for(int i=0; i<4; i++){
            for(int j=0;j<6;j++){
                scanf("%d", &mat[k][i][j]);
            }
        }
        if(t == 'A'){
            soma = 0;
            ver = 0;
            for(int j=0;j<6;j++){
                if(mat[k][0][j] == 1){
                    soma++;
                }
            }
            if(soma != 0){
                for(int j=0;j<6;j++){
                    if(mat[k][0][j] == 1){
                        ver++;
                    }
                }
            }else if(soma == 0){
                for(int j=0;j<6;j++){
                    if(mat[k][1][j] == 1){
                        ver++;
                    }
                }
            }
            if(d<ver){
                d = ver;
                guardak = k;
            }
        }else if(t == 'M'){
            ver = 0;
            soma = 0;
            for(int j=0;j<6;j++){
                if(mat[k][0][j] == 1){
                    soma++;
                }
            }
            if(soma != 0){
                for(int i=1;i<3;i++){
                    for(int j=0;j<6;j++){
                        if(mat[k][i][j] == 1){
                            ver++;
                        }
                    }
                }
            }else if(soma == 0){
                for(int j=0;j<6;j++){
                    if(mat[k][2][j] == 1){
                        ver++;
                    }
                }
            }
            if(d<ver){
                d = ver;
                guardak = k;
            }
        }else if(t == 'D'){
            ver = 0;
            for(int j=0; j<6; j++){
                if(mat[k][3][j] == 1){
                    ver++;
                }
            } 
            if(d<ver){
                d = ver;
                guardak = k;
            }
        }
    }
    printf("Pipi e Mariozito deviam escolher a formacao ");
    for(int i=3; i>=0; i--){
        for(int j=0;j<6;j++){
            somal = somal + mat[guardak][i][j];
        }
        if(somal >= 0){
            formacao[i] = somal;
        }
        somal = 0;
    }
    for(int j=3; j>=0; j--){
        if(formacao[j] > 0 && formacao[j] < 7){
            printf("%d", formacao[j]);
            if(formacao[j-1] == 1 || formacao[j-1] == 2 || formacao[j-1] == 3 || formacao[j-1] == 4 || formacao[j-1] == 5 || formacao[j-1] == 6){
                printf("-");
            }else if(formacao[j]){

            }
        }else if(formacao[j] >= 0 && (formacao[j-1] == 1 || formacao[j-1] == 2 || formacao[j-1] == 3 || formacao[j-1] == 4 || formacao[j-1] == 5 || formacao[j-1] == 6)){
            printf("-");
            printf("%d",formacao[j]);
            printf("-");
        }
    }
    printf("\n");
    for(int i=0; i<4; i++){
        for(int j=0;j<6;j++){
            printf("%d ", mat[guardak][i][j]);
        }
        printf("\n");
    }

    return 0;
}
