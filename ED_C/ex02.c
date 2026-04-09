#include<stdio.h>
#include<stdlib.h>

typedef struct Matricula_Aluno
{   char *nome;
    int idade;
    int num_matricula;

    struct Matricula_Aluno * prox;
    
}MTA;


MTA* Inicio=NULL;
int tam=0;

void add(char *nome,int idade,int num_matricula,int pos){
    
    if(pos>=0 && pos<=tam){
      
      
      MTA *novo=malloc(sizeof(MTA));
      novo->nome=nome;
      novo->idade=idade;
      novo->num_matricula=num_matricula;
      novo->prox=NULL;



       if (Inicio==NULL){
        Inicio=novo;
        tam++;
       }else{
            if (pos==0)
            {
                novo->prox=Inicio;
                Inicio=novo;
                tam++;
            }else if (pos==tam)
            {
                
            }else{

            }
            
            
        
        }
    
    }else{
        printf("Posicao invalida!");
    }

    
}

void LerAluno(){
    MTA* aux=Inicio;
    while (aux!=NULL)
    {   printf("\n--- ALUNOS ---\n");
        printf("Nome do Aluno: %s ",aux->nome);
        printf("\nIdade do Aluno: %d \n",aux->idade);
        printf("Numero da Matricula: %d\n",aux->num_matricula);

        aux=aux->prox;
    }
    
    
    
    
    
    

}
int main(){
    
    add("Joao",19,578255,0);
    add("Teresa",55,299507,0);
    LerAluno();
    
    
    
    
    
    
    
    return 0;
}