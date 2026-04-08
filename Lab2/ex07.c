#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float a,b,c,x1,x2,delta;
    float raiz;
    
    printf("Digite o valor de a:\n");
    scanf("%f",&a);
    printf("Digite o valor de b:\n");
    scanf("%f",&b);
    printf("Digite o valor de c:\n");
    scanf("%f",&c);

    delta=pow(b,2)-4*a*c;

    if (delta<0)
    {
        printf("\nNao existe raiz real!");
    }
    else if (delta==0)
    {
       x1=-b/(2*a);
        printf("\nRaiz unica: %.2f",x1);

    }
    else
    
        raiz=sqrt(delta);
         x1=(-b+raiz)/(2*a);
         x2=(-b-raiz)/(2*a);
        printf("\nPrimeira raiz: %.2f",x1);
        printf("\nSegunda raiz: %.2f",x2);
    
    

    
    
    
    
    
    return 0;
}