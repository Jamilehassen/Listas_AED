#include <stdio.h>
#include "lista.h"


int main(){
    Lista* l = NULL;

    l = insere(l, 1);
    l = insere(l, 2);
    l = insere(l, 3);
    l = insere(l, 4);
    l = insere(l, 5);
    l = insere(l, 6);
    l = insere(l, 7);
    l = insere(l, 8);

    l = remover(l, 1);
    l = remover(l, 8);
    l = remover(l, 5);

    imprimir(l);

    return 0;
}