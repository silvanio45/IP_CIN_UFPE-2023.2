#include <stdio.h>

int main() {
    int N, A, B, R, ABS, ABM, NA, NB; 
    long long SMA, SMB, SMAB, ST, S;

    scanf("%d", &N); 
    scanf("%d %d", &A, &B); 
    
    ABS = A + B;
    ABM = A * B;
    NA = N/A;
    NB = N/B;
    
    SMA = A*(1LL*NA*(NA+1)/2);
    SMB = B*(1LL*NB*(NB+1)/2);
    SMAB = ABM*(1LL*(N/(ABM))*(N/ABM+1)/2);
    ST = N*1LL*(N+1)/2;
    S = ST-SMA-SMB+ SMAB;
    R = S%2;

    if (R == 0) {
        printf("%lld\n", S);
        printf("L� ele!!!\n"); 
    } else {
        printf(" %lld\n", S);
        printf("Opa xupenio AULAS...\n"); 
    }

    return 0;
}
