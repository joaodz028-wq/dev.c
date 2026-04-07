#include<stdio.h>
#include<stdlib.h>

int n,resultado;

int main(){
    
    printf("Digite um numero:\n");
    scanf("%d",&n);

    resultado=(n%5==0)?5:-1;
    printf("O resultado e: %d",resultado);
    
    
    
    return 0;
}