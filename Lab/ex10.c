#include<stdio.h>
#include<stdlib.h>

int ligado,potencia;

int main(){
    
    printf("Digite um valor:\n");
    scanf("%d",&ligado);

    potencia=(ligado==1)?100:0;
    printf("O resultado e: %d",potencia);

    
    
    
    return 0;
}