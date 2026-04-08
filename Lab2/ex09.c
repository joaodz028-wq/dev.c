#include<stdio.h>
#include<stdlib.h>

int idade,Tempo_Servico;

int main(){
    
    printf("Digite sua idade: \n");
    scanf("%d",&idade);
    printf("Digite seus anos de servico: \n");
    scanf("%d",&Tempo_Servico);

    if (idade<=65 || Tempo_Servico>=30 || idade==60 && Tempo_Servico>=25){
        printf("VOCE PODE SE APOSENTAR!");
    }
   else
   {
    printf("VOCE NAO PODE SE APOSENTAR!");
   }
   
   
    
    
    
    return 0;
}