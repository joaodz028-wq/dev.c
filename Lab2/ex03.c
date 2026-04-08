#include<stdio.h>
#include<stdlib.h>

int Segundos,horas,minutos,segundos;

int main(){
    
    printf("Digite o numero de segundos que voce quer transformar:");
    scanf("%d",&Segundos);

    horas=(Segundos/3600);
    minutos=(Segundos%3600)/60;
    segundos=Segundos%60;

    printf("%d horas: %d minutos : %d segundos",horas,minutos,segundos);
    
    
    
    return 0;
}