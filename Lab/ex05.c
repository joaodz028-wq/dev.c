 #include <stdio.h>
 #include <stdlib.h>

 int nivel_usuario,is_admin;

 int main(){
    
    printf("digite o nivel de usuario de 1 a 3 e escolha 0 ou 1:\n");
    scanf("%d%d",&nivel_usuario,&is_admin);

    printf("0s valores escolhidos foi %d e %d: %s\n",nivel_usuario,is_admin,(is_admin==1 ||nivel_usuario==3)?"Acesso Total":"Acesso Limitado");
    
    
    
    
    
    return 0;
 }
