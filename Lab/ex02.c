#include <stdio.h>
#include <stdlib.h>

int x;

int main(){
    
    printf("Digite um numero:\n");
    scanf("%d",&x);

    printf("O numero lido foi %d ele e multiplo de 5 ou 7? %s\n",x,(x%5==0)?"\nMultiplo de 5": (x%7==0)?"\nMultiplo de 7":"\nNao e multiplo de ambos");
    
    
    
    
    return 0;
}