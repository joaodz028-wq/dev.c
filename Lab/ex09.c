#include<stdio.h>
#include<stdlib.h>

int x;
char letra;

int main(){
    
    printf("Digite 0 ou 1:\n");
    scanf("%d",&x);

    letra=(x==1)?'A':'B';
    printf("Letra: %c",letra);
    
    
    return 0;
}