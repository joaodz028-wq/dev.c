#include<stdio.h>
#include<stdlib.h>

int num1,num2,escolha,soma,subtracao,multi;
float divisao;

int main(){


    printf("Digite o valor do primeiro numero:");
    scanf("%d",&num1);
    printf("Digite o valor do segundo numero:");
    scanf("%d",&num2);
    
    while(escolha!=5){
        printf("\n--- ESCOLHENDO OPERACOES ---\n");
        printf("1 -> ADICAO\n");
        printf("2 -> SUBTRACAO\n");
        printf("3 -> MULTIPLICACAO\n");
        printf("4 -> DIVISAO\n");
        printf("5 -> SAIR\n");
        printf("Digite sua escolha:");
        scanf("%d",&escolha);

        if(escolha==1){
            soma=num1+num2;
            printf("A soma dos valores e %d",soma);
            
        }
        else if (escolha==2)
        {  subtracao=(num1>num2)?(num1-num2):(num2-num1);
            printf("A subtracao dos valores e %d",subtracao);
            
        }
        else if (escolha==3)
        {  multi=num1*num2;
            printf("O produto dos valores e %d",multi);

            
        }
        else if(escolha==4 && num2!=0){
            divisao=num1/num2;
            printf("A divisao dos valores e %.2f",divisao);

        }
        else if(escolha==5){
            printf("Voce saiu do programa volte sempre!");
            break;
        }
    }
    
    
    
    
    return 0;
}