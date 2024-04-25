#include <stdio.h>


int main() {

    double A, B, C, dx, area = 0, x;
    int N;
    scanf("%lf %lf %d", &A, &B, &N);
    scanf("%lf", &C);

    dx = (B - A) / N;

    for (int i = 1; i <= N; i++) {
        x = A + i * dx;
        area += (x*x) * dx;
    }

    if (area > C) {
        printf("Maior\n");
    } else if (area == C) {
        printf("Igual\n");
    } else {
        printf("Menor\n");
    }

    return 0;
}
