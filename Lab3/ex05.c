#include<stdio.h>
#include<stdlib.h>

int num;
float E=1.0,fatorial;

int main(){
    
    printf("Digite um numero:");
    scanf("%d",&num);

    for(int contador=1;num>=contador;contador++){
       fatorial=1;
       for(int i=1;contador>=i;i++){
        fatorial*=i;
    }
     E+=1.0/fatorial;
    }
   
    printf("O valor de E: %f",E);
    
    
    
    return 0;
}