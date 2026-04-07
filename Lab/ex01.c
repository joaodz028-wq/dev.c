#include <stdio.h>
#include <stdlib.h>

float preco,preco_Final;

int main(){
    
    printf("Qual e o valor do produto:\n");
    scanf("%f",&preco);

    preco_Final=(preco>100)?preco-(preco*10/100):preco-(preco*5/100);

    printf("O valor final do produto com desconto e: R$ %f\n",preco_Final);
    
    
    
    
    return 0;
}