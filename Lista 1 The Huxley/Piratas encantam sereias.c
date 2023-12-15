#include <stdio.h>
int main (){
    int v, to, te, qui;
    scanf("%d", &v);

    to = v/100;
    te = (v/10)%7;
    qui = v%7;

    if(to>6){
        to = to - 7;
    }
    if(te>6){
        te = te - 7;
    }
    if(qui>6){
        qui = qui - 7;
    }

    if(to == 0 && te == 2 && qui == 4){
        printf("Acorde do satisfaz.");
    }else if(to == 1 && te == 3 && qui == 5){
        printf("Acorde re satisfaz.");
    }else if(to == 2 && te == 4 && qui == 6){
        printf("Acorde mi satisfaz.");
    }else if(to == 3 && te == 5 && qui == 0){
        printf("Acorde fa satisfaz.");
    }else if(to == 4 && te == 6 && qui == 1){
        printf("Acorde sol satisfaz.");
    }else if(to == 5 && te == 0 && qui == 2){
        printf("Acorde la satisfaz.");
    }else if(to == 6 && te == 1 && qui == 3){
        printf("Acorde si satisfaz.");
    }else {
        printf("Combinacao nao satisfaz.");
    }
}