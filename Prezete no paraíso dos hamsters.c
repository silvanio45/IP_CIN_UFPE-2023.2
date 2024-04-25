#include <stdio.h>

int main() {
    int r1, div1, r2, div2, r3, div3;

    scanf("%d %d", &r1, &div1);
    scanf("%d %d", &r2, &div2);
    scanf("%d %d", &r3, &div3);

    int M = div1 * div2 * div3;
    int M1 = M / div1;
    int M2 = M / div2;
    int M3 = M / div3;

    int inv1, inv2, inv3;

    for (int i = 1; i < div1; i++) {
        if ((M1 * i) % div1 == 1) {
            inv1 = i;
            break;
        }
    }

    for (int i = 1; i < div2; i++) {
        if ((M2 * i) % div2 == 1) {
            inv2 = i;
            break;
        }
    }

    for (int i = 1; i < div3; i++) {
        if ((M3 * i) % div3 == 1) {
            inv3 = i;
            break;
        }
    }

    int x = (r1 * M1 * inv1 + r2 * M2 * inv2 + r3 * M3 * inv3) % M;

    if (x < 0) {
        x += M;
    }

    printf("%d\n", x);

    return 0;
}
