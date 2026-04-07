#include <stdio.h>

// A função recebe PONTEIROS (int *a, int *b)
void trocar(int *a, int *b) {
    int aux;
    
    aux = *a;  // aux recebe o CONTEÚDO de onde 'a' aponta
    *a = *b;   // o endereço de 'a' recebe o CONTEÚDO de 'b'
    *b = aux;  // o endereço de 'b' recebe o que estava no aux
}

int main() {
    int x = 10, y = 20;

    printf("Antes: x = %d, y = %d\n", x, y);

    // Na chamada, usamos o '&' para enviar o ENDEREÇO
    trocar(&x, &y);

    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}