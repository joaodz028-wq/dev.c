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
    else if(pos==tam){
        TBR*aux=Inicio;
        for(int contador=0;contador<tam-1;contador++){
            aux=aux->prox;
        }
        aux->prox=novo;
        tam++;

    }
    else if(pos<tam){
        TBR*aux=Inicio;
        for(int contador=0;contador<pos-1;contador++){
            aux=aux->prox;
        }
        novo->prox=aux->prox;
        aux->prox=novo;
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





void remover(int pos){
    if(pos>=0 && pos<tam){
       if(pos==0){
        TBR*lixo=Inicio;
        Inicio=Inicio->prox;
        free(lixo);
        tam--;
       }else if(pos==tam-1){
        TBR*aux=Inicio;
        for(int i=0;i<tam-2;i++){
            aux=aux->prox;
        }
        TBR*lixo=aux->prox;
        aux->prox=NULL;
        free(lixo);
        tam--;
       }else if(pos<tam){
        TBR*aux=Inicio;
        TBR*aux2=Inicio;
        for(int i=0;i<pos;i++){
            aux=aux->prox;

        }
        for(int contador=0;contador<pos-1;contador++){
            aux2=aux2->prox;
        }
        aux2->prox=aux->prox;
        TBR*lixo=aux;
        free(lixo);
        tam--;
       }

    
    
    
        


}
}

int main(){
    
    printf("Antes da remocao!");

    Adicionar_Torcedor("Joao","Flamengo",1895,100,"Palmeiras",0);
    Adicionar_Torcedor("Neto","Corinthians",1910,67,"Palmeiras",0);
    Adicionar_Torcedor("Assilon","Vasco",1899,40,"Flamengo",2);
    Adicionar_Torcedor("Flavia","Fluminense",1900,35,"Flamengo",1);


    Imprimir_Torcedor();
    remover(2);
    printf("Depois da remocao!\n");
    Imprimir_Torcedor();
    
    
    
    
    
    return 0;
}