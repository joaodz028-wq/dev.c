#include <stdio.h>
#include <stdlib.h>

int num,inverso;

int main(){
    
    printf("Digite um numero:");
    scanf("%d",&num);

    inverso=(num==0)?(0):-num;
    printf("O inverso do numero e: %d",inverso);

    
    return 0;
}