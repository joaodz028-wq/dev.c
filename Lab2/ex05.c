#include<stdio.h>
#include<stdlib.h>

int main(){
  
    int salario,emprestimo,prestacao;

    printf("Digite seu salario:\n");
    scanf("%d",&salario);

    printf("Digite quanto voce quer de emprestimo:\n");
    scanf("%d",&prestacao);

    emprestimo=salario*0.2;

    if (emprestimo<prestacao){
        printf("Emprestimo nao concedido!");
    }
    else
    printf("Emprestimo concedido!");
    
    
    
    
    
    return 0;
}