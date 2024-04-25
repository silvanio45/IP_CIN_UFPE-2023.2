#include <stdio.h>
#include <string.h>

int main() {
    int n, kchorro, t, i, j, x, y, cont, zero = 1;
    scanf("%d", &n);
    char mat[n][n], mov[50], c;

    scanf("%d", &n);
for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
        scanf(" %c", &mat[i][j]);
    }
}

    scanf("%d", &kchorro);
    int valor = 0;
    while(kchorro--) {
        zero = 1;
        scanf("%d", &t);
        scanf("%s", mov);

        int palindromo = 1;
        for(i = 0; i < t; i++) {
            if(mov[i] == mov[t-i-1]) {
                palindromo = 1;
            }else{
                palindromo = 0;
            }
        }
        if(palindromo == 1) {
            valor++;
        }else {
        x = y = cont = 0;
        for(i = 0; i < t; i++) {
            zero = 1;
            c = mov[i];
            if(c == 'C'){
                if(x>=0 && x<n){
                if(mat[x][y] == 'z'){
                    zero = 0;
                }
                if(mat[x][y] == 'x') {
                mat[x][y] = 'z';}
                }
                x--;
            }
            else if(c == 'D'){
                if(y>=0 && y<n){
                if(mat[x][y] == 'z'){
                    zero = 0;
                }
                if(mat[x][y] == 'x') {
                mat[x][y] = 'z';}
                }
                y++;
            }else if(c == 'E'){
                if(y>=0 && y<n){
                if(mat[x][y] == 'z'){
                    zero = 0;
                }
                if(mat[x][y] == 'x') {
                mat[x][y] = 'z';}
                }
                y--;
            }else if(c == 'B'){
                if(x>0 && x<=n){
                if(mat[x][y] == 'z'){
                    zero = 0;
                }
                if(mat[x][y] == 'x') {
                mat[x][y] = 'z';}
                }
                x++;
            }
            if(x < 0 || x >= n || y < 0 || y >= n) {
                zero = 0;
                break;
            }
            if(zero == 1 && i == t-1){
                cont = 1;
                mat[x][y] = 'x';
            }
        }
        if(cont) valor++;
        }
    }
    printf("%d\n", valor);

    return 0;
}
