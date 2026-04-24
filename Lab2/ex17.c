#include<stdio.h>
#include<stdlib.h>

int contador,numero,maior,menor;

int main(){
     printf("Digite um numero:");
     scanf("%d",&numero);
    
       maior=numero;
       menor=numero;

    for(contador=0;contador<9;contador++){
        printf("Digite um numero:");
        scanf("%d",&numero);
    
    }
    
    if(numero>maior){
        maior=numero;
    }
    else if(numero<menor){
        menor=numero;
    }

    printf("O maior numero lido: %d\n",maior);
    printf("O menor numero lido: %d",menor);
    
    
    return 0;
}
