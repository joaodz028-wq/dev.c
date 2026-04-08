#include<stdio.h>
#include<stdlib.h>

int num,uni_milhar,centena,dezena,unidade;

int main(){
    
    printf("Digite um numero: (1000 a 9999)");
    scanf("\n%d",&num);

    uni_milhar=num/1000;
    centena=(num/100)%10;
    dezena=(num/10)%10;
    unidade=num%10;

    printf("Numero lido: %d\n",num);

    printf("Unidade de milhar: %d\n",uni_milhar);
    printf("Centena: %d\n",centena);
    printf("Dezena: %d\n",dezena);
    printf("Unidade: %d\n",unidade);

    
    
    
    return 0;
}