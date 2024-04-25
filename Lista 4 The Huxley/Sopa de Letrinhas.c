#include <stdio.h>
#include <string.h>

int main()
{
    char mat[30];
    int lim = 0, lim2 = 0, Qpala = 0, pform = 0, cont = 0;
    scanf("%s", mat);
    scanf("%d", &Qpala);
    char entrada[Qpala][30];
    
    lim = strlen(mat);
    for(int i = 0; i<Qpala; i++){
        scanf("%s", entrada[i]);
    }
    
    for(int i = 0; i<Qpala; i++){
        lim2 = strlen(entrada[i]);
        cont = 0;
        for(int j = 0; j<lim2; j++){
            for(int s = 0; s<lim; s++){
                if(entrada[i][j] == mat[s]){
                    cont = cont + 1;
                    break;
                }
            }
        }
        if(cont == lim2){
            pform = pform + 1;
            for(int j = 0; j<lim2; j++){
                for(int s = 0; s<lim; s++){
                    if(entrada[i][j] == mat[s]){
                        mat[s] = '0';
                        break;
                    }
                }
            }
        }
    }
    printf("E possivel formar %d palavras com esse conjunto", pform);
    return 0;
}
