#include<stdio.h>
#include<stdlib.h>

int apostador1,apostador2,apostador3,premio;
int premio1,premio2,premio3,total;

int main(){
    
    printf("Digite o valor do premio:\n");
    scanf("%d",&premio);

    printf("Quanto o apostador 1 investiu:\n");
    scanf("%d",&apostador1);
    printf("Quanto o apostador 2 investiu:\n");
    scanf("%d",&apostador2);
    printf("Quanto o apostador 3 investiu:\n");
    scanf("%d",&apostador3);

    total=apostador1+apostador2+apostador3;

    premio1=premio*apostador1/total;
    premio2=premio*apostador2/total;
    premio3=premio*apostador3/total;
    

    printf("Valor do premio:R$ %d\n",premio);

    printf("O apostador 1 ganharia R$ %d\n",premio1);
    printf("O apostador 2 ganharia R$ %d\n",premio2);
    printf("O apostador 3 ganharia R$ %d\n",premio3);


    
    
    
    return 0;
}
