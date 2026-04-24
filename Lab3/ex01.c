#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float num,raiz,num_quadrado,num_cubo;

int main(){

    printf("Digite um numero: ");
    scanf("%f",&num);

    raiz=sqrt(num);
    num_quadrado=pow(num,2);
    num_cubo=pow(num,3);

      printf("O quadrado desse numero: %.0f\n",num_quadrado);
      printf("O cubo desse numero: %.0f\n",num_cubo);
      printf("A raiz desse numero: %.0f\n",raiz);

    while(num>0){
    printf("Digite um numero: ");
    scanf("%f",&num);

    raiz=sqrt(num);
    num_quadrado=pow(num,2);
    num_cubo=pow(num,3);

      printf("O quadrado desse numero: %.0f\n",num_quadrado);
      printf("O cubo desse numero: %.0f\n",num_cubo);
      printf("A raiz desse numero: %.0f\n",raiz);

    
    }
    printf("Saindo do Programa!!!");
    printf("Volte Sempre! :)");
}