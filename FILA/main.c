#include <stdio.h>
#include "fila.h"

int main(){
    struct no* l = NULL;
    struct fila* f = cria_fila_vazia();

    enqueue(f, 4);
    enqueue(f, 7);
    enqueue(f, 78);
    enqueue(f, 45);
    enqueue(f, 6);
    enqueue(f, 9);
    enqueue(f, 88);

    imprimir(f);
    printf("\n");

    dequeue(f);
    dequeue(f);

    imprimir(f);
}