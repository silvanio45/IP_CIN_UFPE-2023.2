#include <stdio.h>

int main()
{
    int LimVelMax, LimVelMin;
    int C1 = 0, C2 = 0, C3 = 0;
    float Dis, TempC1, TempC2, TempC3, VelC1, VelC2, VelC3;
    
    scanf("%d %f", &LimVelMax, &Dis);
    scanf("%f", &TempC1);
    scanf("%f", &TempC2);
    scanf("%f", &TempC3);
    
    LimVelMin = LimVelMax / 2;
    
    VelC1 = (Dis / TempC1) ;
    VelC2 = (Dis / TempC2);
    VelC3 = (Dis / TempC3);
    
    if(LimVelMin <= VelC1 && VelC1 <= LimVelMax){
        C1 = 1;
    }
    if(LimVelMin <= VelC2 && VelC2 <= LimVelMax){
        C2 = 1; 
    }
    if(LimVelMin <= VelC3 && VelC3 <= LimVelMax){
       C3 = 1;
    }
    if (C1 == 0 && C2 == 0 && C3 == 0){
        printf("Infelizmente Xupenio nao podera ir ao evento mais importante do ano");
    }
    if(C1 == 1 && C2 == 0 && C3 == 0){
        printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", VelC1);
    }else if(C1 == 1 && C2 == 1 && C3 == 0){
        if(VelC1 >= VelC2){
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", VelC1);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", VelC2);
        }else {
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", VelC2);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", VelC1);
        }
    }else if(C1 == 1 && C2 == 0 && C3 == 1){
        if(VelC1 >= VelC3){
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", VelC1);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", VelC3);  
        }else {
            printf(" Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", VelC3); 
            printf(" Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", VelC1);
        }
    }else if(C1 == 0 && C2 == 1 && C3 == 0){
        printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", VelC2);
    }else if(C1 == 0 && C2 == 1 && C3 == 1){
        if(VelC2 >= VelC3){
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", VelC2);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", VelC3);  
        }else {
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", VelC3); 
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", VelC2);
        }
    }else if(C1 == 0 && C2 == 0 && C3 == 1){
          printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", VelC3);     
    }else if(C1 == 1 && C2 == 1 && C3 == 1){
        if(VelC1 >= VelC2 && VelC1 >= VelC3){
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", VelC1);
            if (VelC2 >= VelC3){
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", VelC2);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", VelC3);
            } else {
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", VelC3);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", VelC2);
            }
        }else if (VelC2 >= VelC1 && VelC2 >= VelC3){
           printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", VelC2);
            if (VelC1 >= VelC3){
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", VelC1);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", VelC3);
            } else {
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", VelC3);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", VelC1); 
        }
    }else if (VelC3 >= VelC1 && VelC3 >= VelC2){
           printf(" Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", VelC3);
            if (VelC1 >= VelC2){
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", VelC1);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f", VelC2);
            } else {
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", VelC2);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", VelC1); 
    }
    }
    }
    return 0;
}


