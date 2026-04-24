#include<stdio.h>
#include<stdlib.h>

int num,maior,menor;

int main(){
   
   
    printf("Digite um numero:");
    scanf("%d",&num);

    maior=num;
    menor=num;

    while(num>=0){

    printf("Digite um numero:");
    scanf("%d",&num);
    if(num>maior){
        maior=num;

    }
    else if(num<menor && num>=0){
         menor=num;
    }
}
    if(num<0){
        printf("Saindo do Programa!\n");
    }
    printf("O maior numero lido foi: %d\n",maior);
    printf("O menor numero lido foi: %d",menor);

    

    

    

    
    
    
    
    
    
    
    return 0;
}