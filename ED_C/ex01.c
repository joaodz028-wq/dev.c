#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{ int dia,mes,ano;
    
}DataNasc;


typedef struct
{   DataNasc dataNasc;
    int idade;
    char sexo;
    char nome[100];

}Pessoa;
  //Função para imprimir pessoa
void ImprimirPessoa(Pessoa p){
    printf("\n\tNome: %s",p.nome);
    printf("\tIdade: %d\n",p.idade);
    printf("\tSexo: %c\n",p.sexo);
    printf("\tData de nasc.: %d/%d/%d\n\n",p.dataNasc.dia,p.dataNasc.mes,p.dataNasc.ano);
}//função para ler uma pessoa e retornar seus dados
Pessoa LerPessoa(){
    Pessoa p;
    printf("\nDigite seu nome:");
    fgets(p.nome,100,stdin);
    printf("Digite sua idade:");
    scanf("%d",&p.idade);
    printf("Digite f ou m para o sexo:");
    scanf(" %c",&p.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa:");
    scanf("%d%d%d",&p.dataNasc.dia,&p.dataNasc.mes,&p.dataNasc.ano);
    scanf("%c");
    return p;
}

int main(){
    int i;
    Pessoa pessoas[3];

    for (i=0;i<3;i++)
        pessoas[i]=LerPessoa();

    for(i=0;i<3;i++)
       ImprimirPessoa(pessoas[i]);
    
    
    return 0;
}

