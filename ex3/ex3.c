// ex3.c
#include <stdio.h>
#include "ex3.h"  // Inclui o cabeçalho com a declaração da função

// Implementação da função de caminhamento Pós-Ordem
void posOrdem(struct NO* raiz) {
    if (raiz) {
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        printf("%d \t", raiz->dado);
    }
}

int ex3(void) {
    struct NO* raiz = NULL;

    // Criando a árvore binária
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    // Exibindo os valores em caminhamento Pós-Ordem

    posOrdem(raiz);
    printf("\n");

    return 0;
}