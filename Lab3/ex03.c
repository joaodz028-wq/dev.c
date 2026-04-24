#include<stdio.h>
#include<stdlib.h>

int num,contador,fn,f1=1,f2=1;

int main(){
    
    printf("Digite um numero maior que 2: ");
    scanf("%d",&num);

    if(num==1||num==2){
        printf("Resultado: 1\n");
    }else{
        for(contador=1;contador<=num;contador++){
            fn=f1+f2;
            f1=f2;
            f2=fn;
        }
        printf("Resultado: %d\n",fn);
    }

              
    
    
    
    
    
    return 0;
}