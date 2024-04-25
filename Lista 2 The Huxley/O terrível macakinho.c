#include <stdio.h>

int main()
{
    int i, a, b, c, n, x = 1;
    double d = 0;

    scanf("%d", &n);

    for (i = 1, b = 1; i <= n; i++){
        do{
            b++;
            a = 2;

            while (a <= b){
                if (b == a){
                    x = 1;
                    break;
                }

                else if (b % a == 0){
                    x = 0;
                    break;
                }
                a++;
            }

            if (x){
                for (c = 2, b = b + 2; c < b; c++){
                    if (b % c == 0){
                        x = 0;
                        break;
                    }
                }
            if (x){
                    d += (1.0 / a) + (1.0 / b);
                }
                b -= 2;
            }
        } while (!x);
    }
    printf("%.10lf", d);
    return 0;
}