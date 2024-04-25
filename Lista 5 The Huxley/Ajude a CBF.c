#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[70];
    int gols_feitos;
    int gols_sofridos;
    int saldo;
    int pontos;
    int vitorias, empates, derrotas;
} time_;

int main()
{
    int n = 0, gc = 0, gf = 0, cont = 0;
    char time_casa[70], time_fora[70];
    scanf("%d", &n);
    time_ equipe[2*n]; 
    for(int i = 0; i<n; i++){
        scanf("%s %d x %d %s", time_casa, &gc, &gf, time_fora);
        if(gc == gf){

            strcpy(equipe[cont].nome, time_casa);
            equipe[cont].gols_feitos = gc;
            equipe[cont].gols_sofridos = gf;
            equipe[cont].saldo = (gc-gf);
            equipe[cont].vitorias = 0;
            equipe[cont].empates = 1;
            equipe[cont].derrotas = 0;
            equipe[cont].pontos = 1;
            cont++;
            
            strcpy(equipe[cont].nome, time_fora);
            equipe[cont].gols_feitos = gf;
            equipe[cont].gols_sofridos = gc;
            equipe[cont].saldo = (gf-gc);
            equipe[cont].vitorias = 0;
            equipe[cont].empates = 1;
            equipe[cont].derrotas = 0;
            equipe[cont].pontos = 1;
            cont++;
        }else if(gc > gf){

            strcpy(equipe[cont].nome, time_casa);
            equipe[cont].gols_feitos = gc;
            equipe[cont].gols_sofridos = gf;
            equipe[cont].saldo = (gc-gf);
            equipe[cont].vitorias = 1;
            equipe[cont].empates = 0;
            equipe[cont].derrotas = 0;
            equipe[cont].pontos = 3;
            cont++;
            
            strcpy(equipe[cont].nome, time_fora);
            equipe[cont].gols_feitos = gf;
            equipe[cont].gols_sofridos = gc;
            equipe[cont].saldo = (gf-gc);
            equipe[cont].vitorias = 0;
            equipe[cont].empates = 0;
            equipe[cont].derrotas = 1;
            equipe[cont].pontos = 0;
            cont++;
        }else if(gc < gf){

            strcpy(equipe[cont].nome, time_casa);
            equipe[cont].gols_feitos = gc;
            equipe[cont].gols_sofridos = gf;
            equipe[cont].saldo = (gc-gf);
            equipe[cont].vitorias = 0;
            equipe[cont].empates = 0;
            equipe[cont].derrotas = 1;
            equipe[cont].pontos = 0;
            cont++;

            strcpy(equipe[cont].nome, time_fora);
            equipe[cont].gols_feitos = gf;
            equipe[cont].gols_sofridos = gc;
            equipe[cont].saldo = (gf-gc);
            equipe[cont].vitorias = 1;
            equipe[cont].empates = 0;
            equipe[cont].derrotas = 0;
            equipe[cont].pontos = 3;
            cont++;
        }
        
    }
    for(int i = 0; i < 2*n-1; i++) {
        for(int j = 0; j < 2*n-i-1; j++) {
            if(equipe[j].pontos < equipe[j+1].pontos || 
               (equipe[j].pontos == equipe[j+1].pontos && equipe[j].vitorias < equipe[j+1].vitorias) ||
               (equipe[j].pontos == equipe[j+1].pontos && equipe[j].vitorias == equipe[j+1].vitorias && equipe[j].saldo < equipe[j+1].saldo) ||
               (equipe[j].pontos == equipe[j+1].pontos && equipe[j].vitorias == equipe[j+1].vitorias && equipe[j].saldo == equipe[j+1].saldo && equipe[j].gols_feitos < equipe[j+1].gols_feitos) ||
               (equipe[j].pontos == equipe[j+1].pontos && equipe[j].vitorias == equipe[j+1].vitorias && equipe[j].saldo == equipe[j+1].saldo && equipe[j].gols_feitos == equipe[j+1].gols_feitos && strcmp(equipe[j].nome, equipe[j+1].nome) > 0)) {
                time_ temp = equipe[j];
                equipe[j] = equipe[j+1];
                equipe[j+1] = temp;
            }
        }
    }    
    printf("\n");
    for(int i = 0; i < 2*n; i++) {
        printf("%d. %s %d %d %d %d %d %d %d\n", i+1, equipe[i].nome, equipe[i].pontos, equipe[i].vitorias, equipe[i].empates, equipe[i].derrotas, equipe[i].gols_feitos, equipe[i].gols_sofridos, equipe[i].saldo);
    }

    return 0;
}
