#include <stdio.h>

int main()
{
    int n, i, x, y, contPri = 0, contPri2 = 0, R1 = 0, R2 = 0, cont1 = 0, cont2 = 0, contV1=0, contV2 = 0;
    scanf("%d", &n);
if(n > 0){
    for(i=1; i<=n; i++){
        contPri = 0; 
        contPri2 = 0;
        scanf("%d %d", &R1, &R2);
    if(R1>0 && R2>0){
        for(x=1; x<=R1; x++){
            if(R1%x == 0 && R1 != 1){
                 contPri = contPri + 1;
             }
         }
         if(contPri == 2){
            R1 = 1;
            contV1 = 1;
             }
         for(y=1; y<=R2; y++){
            if(R2%y == 0){
                 contPri2 = contPri2 + 1;
                 contV2 = 1;
             }
         }
        if(contPri2 == 2 && R2 != 1){
            R2 = 1;
             }         
         
         if(R1%2 == 0 && R1 != 1){
             R1 = 2;
         }else if(R1%2 != 0 && R1 != 1){
             R1 = 3;
         }else if(R1 == 1 && contV1 == 0){
             R1 = 3;
         }
         if(R2%2 == 0 && R2 != 1){
             R2 = 2;
         }else if(R2%2 != 0 && R2 != 1){
             R2 = 3;
         }else if(R2 == 1 && contV2 == 0){
             R2 = 3;
         }
         if(R1 == 1 && R2 == 2 ){
             cont1 = cont1 + 1;
         }else if(R1 == 1 && R2 == 3 ){
             cont2 = cont2 + 1;
         }else if(R1 == 2 && R2 == 1 ){
             cont2 = cont2 + 1;
         }else if(R1 == 2 && R2 == 3 ){
             cont1 = cont1 + 1;
         }else if(R1 == 3 && R2 == 1 ){
             cont1 = cont1 + 1;   
         }else if(R1 == 3 && R2 == 2 ){
             cont2 = cont2 + 1;
         }
         
    }
    }
    
}

    if(cont1 > cont2){
        printf("Sapo sopa esta de boa na lagoa!");
    }else if(cont2 > cont1){
             printf("Testemunhe a verdadeira forca!");
         }else{
             printf("Impending doom approaches...");
         }
    return 0;
}
