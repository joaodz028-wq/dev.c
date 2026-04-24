#include<stdio.h>
#include<stdlib.h>

int numero,contador,soma=0;

int main(){
    
    printf("Digite um numero:");
    scanf("%d",&numero);
    for(contador=1;contador<numero;contador++){
        if(numero%contador==0){
            soma+=contador;
        }
      
    }
    printf("Soma: %d",soma);
    
    
    return 0;
}