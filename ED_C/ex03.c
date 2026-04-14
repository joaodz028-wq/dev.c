#include<stdio.h>
#include<stdlib.h>

typedef struct Torcedor_Br
{
    char *nome;
    char *time;
    int Criacao_Clube;
    int titulos;
    char *rival;

    struct Torcedor_Br *prox;

    
}TBR;

TBR*Inicio=NULL;
int tam=0;

void Adicionar_Torcedor(char *nome,char *time,int Criacao_Clube,int titulos,char *rival,int pos){
   
   if(pos>=0 && pos<=tam){

    TBR *novo=malloc(sizeof(TBR));
    novo->nome=nome;
    novo->time=time;
    novo->Criacao_Clube=Criacao_Clube;
    novo->titulos=titulos;
    novo->rival=rival;
    novo->prox=NULL;

    if(Inicio==NULL){
        Inicio=novo;
        tam++;
    }
    else{if (pos==0)
    {  novo->prox=Inicio;
        Inicio=novo;
        tam++;
        
    }
    
       
       
            
        }
    }
    }


    
    


void Imprimir_Torcedor(){
    TBR*aux=Inicio;
    while(aux!=NULL){
      printf("\n--- TOCERDORES BRASILEIROS ---\n");
      printf("\nNome do Torcerdor: %s",aux->nome);
      printf("\nTime: %s",aux->time);
      printf("\nAno de Criacao: %d",aux->Criacao_Clube);
      printf("\nQuantidade de Titulos: %d",aux->titulos);
      printf("\nSeu maior rival: %s",aux->rival);
      aux=aux->prox;
    }
}
int main(){
    
    Adicionar_Torcedor("Joao","Flamengo",1895,100,"Palmeiras",0);
    Imprimir_Torcedor();
    
    
    
    
    
    return 0;
}