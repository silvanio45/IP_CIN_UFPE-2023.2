#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0, Pis = 0, Pjs = 0, contp = 0, cont = 0, d = 0, conti = 0, contj = 0;
    scanf("%d %d %d", &n, &Pis, &Pjs);
    int mat[n][n];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    conti = 0;
    contj = 0;

    for(int conti = 0; conti < n; conti++){
        for(int contj = 0; contj < n; contj++){
    
        if(mat[conti][contj] + 1 == mat[conti][contj + 1]){
           mat[conti][contj] =  mat[conti][contj + 1];
           contp++;
           if(conti == Pis && contj == Pjs){
               break;
           }
        }else if(mat[conti][contj] + 1 == mat[conti + 1][contj]){
            mat[conti][contj] =  mat[conti + 1][contj];   
            contp++;
                if(conti == Pis && contj == Pjs){
                    break;
           }
        }
        }
        if(contp > d){
            d = contp;
        }
    }
    printf("Numero de passos do maior caminho: %d", contp);
        
        

    
    return 0;
}
