#include <stdio.h>
#include <string.h>

typedef struct {
    int preco;
    int diversao;
} Peca;

int main() {
    int cascalho = 0, facada = 0, divt = 0, peca = 0, contm = 0, contr = 0, contl = 0, trava = 0;
    scanf("%d %d", &cascalho, &peca);

    Peca mot[peca];
    Peca rod[peca];
    Peca lat[peca];

    contm = 0;
    contr = 0;
    contl = 0;

    if (peca <= 2) {
        printf("Nao foi possivel construir uma caranga...\n");
    } else if (peca > 2) {
        for (int i = 0; i < peca; i++) {
            char tipo[10];
            Peca pecaTemp;
            scanf("%9s %d %d", tipo, &pecaTemp.preco, &pecaTemp.diversao);
            if (strcmp(tipo, "Motor") == 0) {
                mot[contm] = pecaTemp;
                contm++;
            } else if (strcmp(tipo, "Roda") == 0) {
                rod[contr] = pecaTemp;
                contr++;
            } else if (strcmp(tipo, "Lataria") == 0) {
                lat[contl] = pecaTemp;
                contl++;
            }
        }

        if (contm < 1 || contl < 1 || contr < 1) {
            printf("Nao foi possivel construir uma caranga...\n");
        } else {
            int lim = (contm * contl * contr);
            Peca tot[lim];

            int k = 0;
            for (int m = 0; m < contm; m++) {
                for (int r = 0; r < contr; r++) {
                    for (int l = 0; l < contl; l++) {
                        tot[k].preco = (mot[m].preco + rod[r].preco + lat[l].preco);
                        tot[k].diversao = (mot[m].diversao + rod[r].diversao + lat[l].diversao);
                        k++;
                    }
                }
            }

            Peca temp;
            for (int i = 0; i < lim - 1; i++) {
                for (int j = i + 1; j < lim; j++) {
                    if (tot[i].diversao < tot[j].diversao || (tot[i].diversao == tot[j].diversao && tot[i].preco >= tot[j].preco)) {
                        temp = tot[i];
                        tot[i] = tot[j];
                        tot[j] = temp;
                    }
                }
            }

            int flag = 0;
            while (flag != lim && trava == 0) {
                facada = tot[flag].preco;
                divt = tot[flag].diversao;
                if (facada <= cascalho) {
                    trava = 1;
                }
                flag++;
            }

            if (cascalho >= facada) {
                printf("Minha nave tem uma performance de %d pontos\n", divt);
                if (cascalho - facada > 0) {
                    printf("E ainda me sobraram %d mangos!\n", (cascalho - facada));
                }
            } else {
                printf("Nao foi possivel construir uma caranga...\n");
            }
        }
    }

    return 0;
}
