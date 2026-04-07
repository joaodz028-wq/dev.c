#include <stdio.h>
#include<stdlib.h>

float nota;

int main(){
    
    printf("Qual foi sua nota:\n");
    scanf("%.2f",&nota);

    printf("Sua nota foi %.2f,Voce esta:%s\n",nota,(nota==5 && nota<6.9)? "\nRECUPERACAO":"\nREPROVADO");
    
    
    
    
    return 0;
}