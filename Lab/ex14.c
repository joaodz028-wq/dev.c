#include<stdio.h>
#include<stdlib.h>

int x,y,escolha,soma,produto,subtr,maior;
float divisao;

int main(){
    
    printf("Digite um numero:");
    scanf("%d",&x);
    printf("Um segundo numero:");
    scanf("%d",&y);

    printf("\n\n---ESCOLHA UMA DAS OPERACOES---");
    printf("\n1- SOMA DE 2 NUMEROS");
    printf("\n2- DIFERENCA ENTRE 2 NUMEROS");
    printf("\n3- PRODUTO ENTRE 2 NUMEROS");
    printf("\n4- DIVISAO ENTRE 2 NUMEROS");
    printf("\nDigite sua escolha:");
    scanf("%d",&escolha);

    maior=(x>y)?(subtr=x-y):(subtr=y-x);

    if (escolha==1)
    { soma=x+y;
        
    }
    if (escolha==2)
    { maior;
            
    }
    
    
    else if (escolha==3)
    {produto=x*y;
        
    }
    else if (escolha==4 && y!=0)
    {
        divisao=x/y;
    }

    switch (escolha)
    { case 1:
        escolha=1;
        printf("A soma dos valores e: %d",soma);
        break;
        case 2:
        escolha=2;
        printf("A diferenca dos valores e: %d",maior);
        break;
        case 3:
        escolha=3;
        printf("O prduto dos numeros e: %d",produto);
        break;
        case 4:
        escolha=4;
        printf("A divisao dos valores e: %f",divisao);
        break;
        break;
        default:
        printf("ERRO ENCONTRADO!");
    
    }
    


    
    
    
    
    
    
    
    
    return 0;
}