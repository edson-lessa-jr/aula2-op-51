// estrutura_arvore.h
#ifndef ESTRUTURA_ARVORE_H
#define ESTRUTURA_ARVORE_H

// Estrutura do nó da árvore binária
struct NO {
    int dado;
    struct NO* esq;
    struct NO* dir;
};

// Função para criar um novo nó
struct NO* novoNo(int valor);

// Função para inserir um novo nó na árvore
struct NO* inserir(struct NO* raiz, int valor);

#endif