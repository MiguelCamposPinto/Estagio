#include <stdio.h>
#include <string.h>
void pct(double estado, double total,const char nome[]){
    double pct = (estado/total)*100;
    printf("Porcentagem %s: %.2f%%\n",nome, pct);
}

int main() {
    double SP=67836.43;
    double RJ=36678.66;
    double MG=29229.88;
    double ES=27165.48;
    double outros =19849.53;
    double total = SP+RJ+MG+ES+outros;
    pct(SP,total,"SP");
    pct(RJ,total,"RJ");
    pct(MG,total,"MG");
    pct(ES,total,"ES");
    pct(outros,total,"Outros");
    return 0;
}
