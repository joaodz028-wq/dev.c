#include<stdio.h>
#include<stdlib.h>

int ano;

int main(){
    
    printf("Digite um ano para descobrir se e Bissexto:\n");
    scanf("%d",&ano);

    if(ano%400==0 ||ano%4==0 && ano%100>0 ){
        printf("Esse ano e Bissexto!");
    }
    else
    {
        printf("Esse ano nao e Bissexto!");
    }
    
    
    return 0;
}