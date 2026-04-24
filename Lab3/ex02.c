#include<stdio.h>
#include<stdlib.h>

int num,fatorial=1;

int main(){
    
    printf("Digite um numero para ver seu fatorial: ");
    scanf("%d",&num);

    for(int contador=1;contador<=num;contador++){
     fatorial*=contador;
    }
    printf("O fatorial e: %d",fatorial);
    
    
    
    
    return 0;
}