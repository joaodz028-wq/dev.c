#include<stdio.h>
#include<stdlib.h>

int num,num_inverso,centena,dezena,unidade;

int main(){
    
    printf("Digite um numero: (De 100 a 999)\n");
    scanf("%d",&num);

    centena=num/100;
    dezena=(num/10) % 10;
    unidade=num%10;

    num_inverso=unidade*100+dezena*10+centena;

    printf("O numero lido: %d; O numero gerado: %d",num,num_inverso);


    
    
    
    return 0;
}