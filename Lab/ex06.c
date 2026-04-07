#include <stdio.h>
#include <stdlib.h>

float temp;

int main(){
    
    printf("Digite sua temperatura atual:");
    scanf("%f",&temp);

    printf("Sua temperatura atual e %f\nO clima esta: %s\n",temp,(temp>30.0)?"Quente":(temp>=20 && temp<30)?"Agradavel":"Frio");
    
    return 0;
}