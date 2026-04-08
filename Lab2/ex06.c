#include<stdio.h>
#include<stdlib.h>

int a,b,soma,mult,subt,escolha,maior;
float divisao;

int main(){
    
    printf("Digite um numero:\n");
    scanf("%d",&a);

    printf("\n--- CALCULADORA ---\n");
    printf("\n1-> SOMA");
    printf("\n2 -> SUBTRACAO");
    printf("\n3 -> MULTIPLICACAO");
    printf("\n4 -> DIVISAO");
    printf("\nDigite sua escolha: \n");
    scanf("%d",&escolha);

    printf("Digite o segundo numero:\n");
    scanf("%d",&b);

    maior=(a>b)?(subt=a-b):(subt=b-a);
    if (escolha==1)
    {
        soma=a+b;
        printf("A soma e %d",soma);
    }
    else if (escolha==2)
    {maior;
        printf("A subtracao e %d",maior);
        
    }
    else if (escolha==3)
    {
        mult=a*b;
        printf("A multiplicacao e %d",mult);
    }
    else if (escolha==4 && b!=0)
    {
        divisao=a/b;
        printf("A divisao e %d",divisao);
    }
    
    

    
    
    
    
    return 0;
}