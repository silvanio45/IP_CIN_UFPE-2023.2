#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0, x = 0, n = 0, f1 = 0, f2 = 1, f = 0, d = 0, z = 0, k = 1000, canal = 0, minuto = 0, soma = 0;
    int  s = 0, g = 0;
    scanf("%d %d", &x, &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &f1, &f2);

        int minutoAtual = 0;

        for (int y = 3; y <= x; y++) {
            f = f1 + f2;
            int kchorro = 3;
            
            while (f < x) {
                f1 = f2;
                f2 = f;
                f = f1 + f2;
                kchorro = kchorro + 1;
              //  printf("%d\n", f);
            }

            if (abs(f - x) < abs(f2 - x)) {
                d = f;
            } else {
                d = f2;
            }
            
            z = abs(d - x);

            if (z < k) {
                s = f;
                g = f2;
                k = z;
                canal = i + 1;
                minutoAtual = kchorro;
                
            }
        }

        if (canal == i + 1) {
            minuto = minutoAtual;
        }
    }

    int temp = f;
    while (temp != 0) {
        int digito = temp % 10;
        soma += digito;
        temp /= 10;
    }
    /*printf("\n");
    printf("%d\n", g);
    printf("%d\n", s);*/
    
    int o1 = abs(g - x);
    int o2 = abs(s - x);
    
    if(o1<o2){
        minuto = minuto - 1;
    }

    if (soma > 10) {
         printf("Xupenio, para ir ao lulupalooza vc deve entrar no canal %d e sera chamado mais ou menos no minuto %d e com o VIP garantido!!! %d\n", canal, minuto);
    } else {
        printf("Xupenio, para ir ao lulupalooza vc deve entrar no canal %d e sera chamado mais ou menos no minuto %d, mas o ingresso VIP n�o vai rolar :(\n", canal, minuto);
    }

    return 0;
}
