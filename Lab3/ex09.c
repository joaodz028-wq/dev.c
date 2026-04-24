#include<stdio.h>
#include<stdlib.h>

int soma,cont;

int main(){
     
   for(cont=1;cont<1000;cont++){
    if(cont%3==0 || cont%5==0){
        soma+=cont;
    }
   }
    printf("A soma e: %d",soma);
    
    
    return 0;
}