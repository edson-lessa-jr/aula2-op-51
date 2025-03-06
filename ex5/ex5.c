// ex5.c
#include <stdio.h>
#include <stdlib.h>
#include "ex5.h"

// Função para calcular a altura de um nó
int altura(struct NO* n) {
    if (n == NULL) return 0;
    int alturaEsq = altura(n->esq);
    int alturaDir = altura(n->dir);
    return (alturaEsq > alturaDir ? alturaEsq : alturaDir) + 1;
}

// Função para calcular o fator de balanceamento
int fatorBalanceamento(struct NO* n) {
    if (n == NULL) return 0;
    return altura(n->esq) - altura(n->dir);
}

// Rotação simples à direita
struct NO* rotacaoDireita(struct NO* y) {
    struct NO* x = y->esq;
    struct NO* T2 = x->dir;

    x->dir = y;
    y->esq = T2;

    return x;
}

// Rotação simples à esquerda
struct NO* rotacaoEsquerda(struct NO* x) {
    struct NO* y = x->dir;
    struct NO* T2 = y->esq;

    y->esq = x;
    x->dir = T2;

    return y;
}

// Função para balancear a árvore AVL após inserção
struct NO* balancear(struct NO* raiz) {
    int fb = fatorBalanceamento(raiz);

    // Rotação à direita (caso esquerda pesada)
    if (fb > 1 && fatorBalanceamento(raiz->esq) >= 0)
        return rotacaoDireita(raiz);

    // Rotação à esquerda (caso direita pesada)
    if (fb < -1 && fatorBalanceamento(raiz->dir) <= 0)
        return rotacaoEsquerda(raiz);

    // Rotação dupla esquerda-direita
    if (fb > 1 && fatorBalanceamento(raiz->esq) < 0) {
        raiz->esq = rotacaoEsquerda(raiz->esq);
        return rotacaoDireita(raiz);
    }

    // Rotação dupla direita-esquerda
    if (fb < -1 && fatorBalanceamento(raiz->dir) > 0) {
        raiz->dir = rotacaoDireita(raiz->dir);
        return rotacaoEsquerda(raiz);
    }

    return raiz;
}

// Função de inserção na AVL (com balanceamento)
struct NO* inserirAVL(struct NO* raiz, int valor) {
    raiz = inserir(raiz, valor);
    return balancear(raiz);
}

// Função para exibir a árvore em-ordem
void emOrdem(struct NO* raiz) {
    if (raiz) {
        emOrdem(raiz->esq);
        printf("%d ", raiz->dado);
        emOrdem(raiz->dir);
    }
}

int ex5(void) {
    struct NO* raiz = NULL;

    // Inserindo valores na árvore AVL
    raiz = inserirAVL(raiz, 50);
    raiz = inserirAVL(raiz, 30);
    raiz = inserirAVL(raiz, 70);
    raiz = inserirAVL(raiz, 20);
    raiz = inserirAVL(raiz, 40);
    raiz = inserirAVL(raiz, 60);
    raiz = inserirAVL(raiz, 80);

    // Exibindo a árvore balanceada em ordem
    printf("Arvore AVL (Em-Ordem):\n");
    emOrdem(raiz);
    printf("\n");

    return 0;
}