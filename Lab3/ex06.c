#include<stdio.h>
#include<stdlib.h>

double S=0,numerador=1.0,denominador=1.0;

int main(){
    
    while(numerador<100 && denominador<51){
        S+=numerador/denominador;
        numerador+=2.0;
        denominador+=1.0;
    }
    printf("O resultado de S e: %.2f",S);
    
    
    
    
    
    
    return 0;
}