#include <stdio.h>
#include "pilha.h"

int main(){
    Pilha* p = criar_pilha_vazia();
    int x = 0;

    p = push(p, 10);
    p = push(p, 12);
    p = push(p, 13);
    p = push(p, 14);
    p = push(p, 15);
    p = push(p, 16);

    imprime(p);
    printf("Elemento do topo da fila: %d\n", x = topo(p));

    p = pop(p);
    p = pop(p);

    imprime(p);

    printf("Elemento do topo da fila: %d\n", x = topo(p));

}