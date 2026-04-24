#include<stdio.h>
#include<stdlib.h>

int saque,notas_100=0,notas_50=0,notas_20=0,notas_10=0,notas_5=0,notas_2=0,notas_1=0;

int main(){
    
    printf("Quanto voce quer sacar: ");
    scanf("%d",&saque);

    while(saque!=0){

    if(saque%100==0){
       saque-=100;
       notas_100+=1;
    }
    else if(saque%50==0){
        saque-=50;
        notas_50+=1;
    }
    else if(saque%20==0){
        saque-=20;
        notas_20+=1;
    }
    else if(saque%10==0){
        saque-=10;
        notas_10+=1;
    }
    else if(saque%5==0){
        saque-=5;
        notas_5+=1;
    }
    else if(saque%2==0){
        saque-=2;
        notas_2+=1;
    }
    else if(saque%1==0){
        saque-=1;
        notas_1+=1;
    }
    printf("\nSAQUE REALIZADO!!!\n");
    printf("Notas de 100: %d\n",notas_100);
    printf("Notas de 50: %d\n",notas_50);
    printf("Notas de 20: %d\n",notas_20);
    printf("Notas de 10: %d\n",notas_10);
    printf("Notas de 5: %d\n",notas_5);
    printf("Notas de 2: %d\n",notas_2);
    printf("Notas de 1: %d\n",notas_1);
    }

    return 0;
}