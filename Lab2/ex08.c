#include<stdio.h>
#include<stdlib.h>

int a,b,c;

int main(){
    
    printf("Digite os valores de a,b e c:\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    
        if (a==b && b==c && a==c)
        {
            printf("Podem formar um Triangulo Equilatero!");
        }
        else if (a==b || b==c || a==c)
        {
            printf("Podem formar um Triangulo Isosceles!");
        }
        else if (a!=b && b!=c && a!=c)
        {
            printf("Podem formar um Triangulo Escaleno!");
            
        }
        
        
    
    
    
    
    
    return 0;
}