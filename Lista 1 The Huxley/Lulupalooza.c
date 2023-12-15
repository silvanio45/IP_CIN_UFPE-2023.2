#include <stdio.h>
int main (){

    int a, c, p, ma, mc, mm, pt, t, sa, sc, st, psa, psc, ma1 = 0, mc1 = 0, T = 1, R = 1;
    scanf("%d %d %d", &a, &c, &p);
     
    ma = a/p;
    mc = c/p;
    pt = a + c; 
    t = p*(ma+mc);
    mm = 0;
    sa = a - (ma*p) ; psa = sa%2;
    sc = c%p; psc = sc%2;
    st = sa + sc; 
    
if(1<= p <= 20 && 1<= a <= 100000 && 1<= c <= 100000 ){
    if (pt != t){
        if(st == p){
           mm = mm + 1;
        }else if(psa == 0 && psc == 0 && sa!=0 && sc!=0){
            if(st <= p){
                mm  = mm + 1;
            }else if (st > p) {
                mm = mm + 2;
            }
        } else {
        if(sa > 0 && sa < 4){
            ma1 = (sa%10);
            }else if(sa>=4){
                int nv = sa/p;
                int nv2 = sa%p;
                if(nv==0){
                   ma = ma + (nv + 1);
                }else if(nv != 0 && nv2 == 0){
                   ma = ma + nv;
                }else if(nv != 0 && nv2 != 0){
                    ma = ma + (nv + 1);
                }
            }
        if(sc > 0 && sc < 4){
            mc1 = (sc%10);
            }else if(sc>=4){
                int nvc = sc/p;
                int nvc2 = sc%p;
                if(nvc==0){
                   mc = mc + (nvc + 1);
                }else if(nvc != 0 && nvc2 == 0){
                   mc = mc + nvc;
                }else if(nvc != 0 && nvc2 != 0){
                     mc = mc + (nvc + 1);
                }
            }
            }
            }
}

            int mat = ma - ma1;
            int mct = mc - mc1;
            int Pma = mat * (p*3); 
            int Pmc = mct * (p*2); 
            int Pma1 = ma1 * ((p+1)*4);
            int Pmc1 = mc1 * ((p+1)*3);
            int Pmm = mm * (p*2);
            if(mat>0){
                printf("%d mesas com adultos: R$%d\n",mat,Pma);
            } 
            if(ma1>0){
                printf( "%d mesas com adultos+1: R$%d\n",ma1, Pma1);  
            }
            if(mct>0){
                printf("%d mesas com criancas: R$%d\n",mct, Pmc); 
            }
            if(mc1>0){
               printf( "%d mesas com criancas+1: R$%d\n",mc1, Pmc1);  
            }
            if(mm>0){
               printf("%d mesas mistas: R$%d\n",mm, Pmm);  
            }
return 0;
}