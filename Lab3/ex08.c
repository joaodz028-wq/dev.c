#include<stdio.h>
#include<stdlib.h>

int num,cont,num_linhas=1;

int main(){
    
    printf("Digite um numero:");
    scanf("%d",&num);

    for(cont=1;cont<=num;cont++){
        for(int i=1;i<=cont;i++){
            printf("%d ",num_linhas);
            num_linhas++;
        }
      printf("\n");
    }
    
    
    
    
    
    return 0;
}