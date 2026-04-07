#include<stdio.h>
#include<stdlib.h>

int x,y,maior;

int main(){
    
    printf("Digite o valor de x:");
    scanf("%d",&x);
    printf("Digite o valor de y:");
    scanf("%d",&y);

    if (x>y){
       maior=1;
    }
    else if (x<y)
    { maior=2;
        
    }
    else{
        maior=0;
    }
    
    

   switch (maior){
    case 1:
    maior=1;
    printf("\nO maior valor e: %d",x);
    break;
    case 2:
    maior=2;
    printf("\nO maior valor e: %d",y);
    break;

    break;
    default:
    printf("\nValores invalidos!");

}
    
    
    
    
    return 0;
}