#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char feijoada[20]="FEIOJADA",hamburger[20]="HAMBURGER",espeto[20]="ESPETINHO",macarronada[20]="MACARRONADA",pizza[20]="PIZZA";
int pedido;

int main(){
    
    printf("\n\n--- CARDAPIO ---");
    printf("\n1 -> FEIJOADA"
           "\n2 -> HAMBURGER"
           "\n3 -> ESPETO"
           "\n4 -> MACARRONADA"
           "\n5 -> PIZZA");
    printf("\nFaca seu pedido:");       
    scanf("%d",&pedido);
    if (pedido==1){
        pedido=1;
    } 
    else if (pedido==2)
    {  pedido=2;
        
    }
    else if (pedido==3)
    {   pedido=3;
        
    }
     else if (pedido==4)
     {   pedido=4;
    
     
        
     }
     switch (pedido){
        case 1:
        pedido=1;
        printf("Sua escolha foi: %s",feijoada);
        break;

        case 2:
        pedido=2;
        printf("Sua escolha foi: %s",hamburger);
        break;

        case 3:
        pedido=3;
        printf("Sua escolha foi %s",espeto);
        break;

        case 4:
        pedido=4;
        printf("Sua escolha foi: %s",macarronada);
        break;

        break;
        default:
        printf("Sua escolha foi: %s",pizza);
        


     }
     
          
    
    
    
    
    
    
    return 0;
}