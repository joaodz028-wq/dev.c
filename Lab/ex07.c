#include<stdio.h>
#include<stdlib.h>

int pontos;

int main(){
    
    printf("Quantos pontos voce consegueiu:\n");
    scanf("%d",&pontos);

    printf("Voce tem %d pontos: %s\n",pontos,(pontos>=50)?"Ganhou Recompensa":"Tente novamente");
    
    
    
    return 0;
}