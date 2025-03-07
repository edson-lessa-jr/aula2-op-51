#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

// Função de caminhamento pré-ordem (visita a raiz antes das subárvores)
void preOrdem(struct NO* raiz) {
    if (raiz) {
        printf("%d \t", raiz->dado);  // Exibe o valor do nó atual (raiz)
        preOrdem(raiz->esq);          // Percorre recursivamente a subárvore esquerda
        preOrdem(raiz->dir);          // Percorre recursivamente a subárvore direita
    }
}
// Função para exibir a árvore de forma visual no prompt
void exibirArvore(struct NO* raiz) {
    printf("\n");
    printf("         ");
    preOrdem(raiz); // Exibe os números na ordem pré-ordem dentro da estrutura visual
    printf("\n");
    printf("       /    \\     \n");
    printf("     ");
    preOrdem(raiz->esq); // Mostra os números da subárvore esquerda
    printf("    ");
    preOrdem(raiz->dir); // Mostra os números da subárvore direita
    printf("\n");
    printf("    /  \\    /  \\  \n");
    printf("  ");
    preOrdem(raiz->esq->esq); // Esquerda do 30
    printf("   ");
    preOrdem(raiz->esq->dir); // Direita do 30
    printf("  ");
    preOrdem(raiz->dir->esq); // Esquerda do 70
    printf("   ");
    preOrdem(raiz->dir->dir); // Direita do 70
    printf("\n\n");
}


int ex1(void) {
    struct NO* raiz = NULL;  // Inicializa a árvore como vazia

    // Inserindo elementos na árvore
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    // Exibindo a árvore formatada no console com os valores em pré-ordem
     // printf("Representação visual da arvore (Pre-Ordem):\n");
     // exibirArvore(raiz);

    // Exibe a árvore usando o caminhamento pré-ordem
    preOrdem(raiz);
    printf("\n");

    return 0; // Finaliza o programa
}
