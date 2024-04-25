#include <stdio.h>

int main()
{
    int n = 0, z = 0, contSM = 0, aux = 0;
    int frequenciaModa = 0;
    float media = 0, moda = 0, soma = 0;
    
    scanf("%d", &n);
    float notas[n], contM[n], contagemM[n];
    
    for(int i = 0; i < n; i++){
        scanf("%f", &notas[i]);
    }
    for(int x = 0; x < n; x++){
         soma = soma + notas[x]; 
    }
    media = soma / n;
    printf("Media: %.2f\n", media);
    for(int i = 0; i < z; i++){
    for(int z = 0; z < n; z++){
        if(notas[i] == notas[z]){
            contM[i] = contM[i] + 1; 
        }
    }
}

for (int i = 0; i < n; i++) {
        int contagem = 0;
        for (int j = 0; j < n; j++) {
            if (notas[j] == notas[i]) {
                contagem++;
            }
            contagemM[i] = contagem;
        }
        if (contagem > frequenciaModa) {
            moda = notas[i];
            frequenciaModa = contagem;
            }
        }
        for(int i = 0; i < n; i++){
            if(contagemM[i] == frequenciaModa){
                contSM = contSM + 1;
            }
        }
        
        for(int x = 0; x < n; x++){
            for(int y = x; y < n; y++){
                if(notas[x]>notas[y]){
                    aux = notas[x];
                    notas[x] = notas[y];
                    notas[y] = aux;
                }
            }
        }
        if(n%2 == 0){
            int PosiP1 = n/2;
            int PosiP2 = PosiP1 + 1;
            float Med = (notas[PosiP1 - 1] + notas[PosiP2 - 1])/2;
            printf("Mediana: %.2f\n", Med);
        }else{
            int PosiIm = (1 + (n/2));
            printf("Mediana: %.2f\n", notas[PosiIm - 1]);
        }
        if(contSM != frequenciaModa){
            printf("Nao tem moda");   
        }else{
            printf("Moda: %.2f\n", moda);
        }

    return 0;


    }
    