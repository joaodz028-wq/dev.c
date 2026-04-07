#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int x,num,raiz;

int main(){
    
    printf("\nDigite um numero:");
    scanf("%d",&x);
    

    if (x>0){
        num=1;
    }
    

    switch (num)
    {case 1:
        num=1;
        raiz=sqrt(x);
        printf("A raiz e: %d",raiz);

        break;
        default:
        printf("Numero invalido!");
    
    }
    

    
    
    
    
    
    return 0;
}