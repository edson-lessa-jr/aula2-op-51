// ex2.c
#include <stdio.h>
#include "ex2.h"  // Inclui o cabeçalho onde a função é declarada

// Implementação da função de caminhamento em-ordem
void emOrdem(struct NO* raiz) {
    if (raiz) {
        emOrdem(raiz->esq);
        printf("%d \t", raiz->dado);
        emOrdem(raiz->dir);
    }
}
int ex2(void) {
    struct NO* raiz = NULL;

    // Criando a árvore binária
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    // Exibindo os valores em caminhamento Em-Ordem

    emOrdem(raiz);
    printf("\n");
    return 0;
}