#include <stdio.h>
int main (){

    float hs, hv, dif,vt;
    char  c;
    int   p;

    scanf("%f %f %c %d", &hs, &hv, &c, &p);

    dif = hv - hs;
    

    if (hs >= 0 && hs < 24 && hv >= 0 && hv < 24 && hs < hv){
        if(c == 'A' || c == 'B' && p>0){
            if(c == 'A' && dif >= 1){
                if ( p > 5 && p <= 9 && dif >= 1.5 ){
                    printf("O uninho faz a boa, obrigado querida mae line\n");
                }else if (p <= 5){
                    printf("O uninho faz a boa, obrigado querida mae line\n");
                }else {
                    printf("Infelizmente o uninho nao tanka, rodamos!\n");
                }
            } else if(c == 'B' && dif > 0.75){
                 if ( p > 5 && p <= 9 && dif >= 1.125 ){
                    printf("O uninho faz a boa, obrigado querida mae line\n");
                }else if (p <= 5){
                    printf("O uninho faz a boa, obrigado querida mae line\n");
                }else {
                    printf("Infelizmente o uninho nao tanka, rodamos!\n");
                }
            } else {
                printf("Infelizmente o uninho nao tanka, rodamos!\n");
                
            }
        }else {
            printf("Entrada invalida\n");
        }
    }  else{
        printf("Entrada invalida\n");
    }   
}