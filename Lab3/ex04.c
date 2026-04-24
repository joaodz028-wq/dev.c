#include<stdio.h>
#include<stdlib.h>

float hamornica=0;
int num;

int main(){
    
    printf("Digite um numero:");
    scanf("%d",&num);

    for(int contador=1;num>=contador;contador++){
        hamornica=hamornica+(1.0/contador);
    }
    printf("O numero hamornico e: %f",hamornica);
    
    
    
    
    return 0;
}