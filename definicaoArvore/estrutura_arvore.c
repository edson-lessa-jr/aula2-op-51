// estrutura_arvore.c
#include <stdio.h>
#include <stdlib.h>
#include "estrutura_arvore.h"

// Função para criar um novo nó
struct NO* novoNo(int valor) {
    struct NO* no = (struct NO*) malloc(sizeof(struct NO));
    no->dado = valor;
    no->esq = NULL;
    no->dir = NULL;
    return no;
}

// Função para inserir um novo nó na árvore binária
struct NO* inserir(struct NO* raiz, int valor) {
    if (raiz == NULL) {
        return novoNo(valor);
    }

    if (valor < raiz->dado) {
        raiz->esq = inserir(raiz->esq, valor);
    } else {
        raiz->dir = inserir(raiz->dir, valor);
    }

    return raiz;
}
