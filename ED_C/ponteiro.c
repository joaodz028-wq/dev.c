#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int x=10;
    int *ptr;
    ptr=&x;

    printf("conteudo de x: %d\n",x);
    printf("endereeco de x: %p",&x);
    printf("\nconteudo apontado por ponteiro: %d\n",*ptr);
    printf("endereco apontado por ponteiro: %p",ptr);
    printf("\nendereco de ponteiro: %p",&ptr);
    
    
    
    
    return 0;
}
//Ponteiros:
//*ptr : o apontado por,conteúdo do endereço da variável que ptr aponta
//ptr : enderço da variável
//&ptr : enderço do ponteiro

    
    
    
    
    

