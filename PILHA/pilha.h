#ifndef pILHA_H
#define PILHA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int TipoItem;
 // estrutura para lista encadeada
 struct no {
    int info;
    struct no* prox;
 };
 // estrutura de lista com cabeca
 // para implementac~ao de pilha
 typedef struct {
    struct no* topo;
 } Pilha;

Pilha* criar_pilha_vazia();

 // Testa se uma pilha ´e vazia
 // Entrada: pilha
 // Retorno: 1 se a pilha ´e vazia ou 0 caso contr´ario
 // Pr´e-condi¸c~ao: nenhuma
 // P´os-condi¸c~ao: nenhuma
int vazia(Pilha* p);

 // Empilha um elemento na pilha
 // Entrada: pilha e inteiro a ser empilhado
 // Retorno: pilha alterada
 // Pr´e-condi¸c~ao: nenhuma
 // P´os-condi¸c~ao: elemento ´e empilhado
Pilha* push(Pilha* p, int info);

 // Desempilha um elemento da pilha
 // Entrada: pilha
 // Retorno: pilha alterada
 // Pr´e-condi¸c~ao: nenhuma
 // P´os-condi¸c~ao: elemento do topo ´e removido
Pilha* pop(Pilha* p);

 // L^e o topo da pilha
 // Entrada: pilha
 // Retorno: elemento do topo da pilha ou-1 se a pilha est´a vazia
 // Pr´e-condi¸c~ao: nenhuma
 // P´os-condi¸c~ao: retorna o topo da pilha
 int topo(Pilha* p);

 // Imprime os elementos da pilha
 // Entrada: pilha
 // Retorno: nenhum
 // Pr´e-condi¸c~ao: nenhuma
 // P´os-condi¸c~ao: os elementos s~ao impressos no console
void imprime(Pilha* p);


#endif