// ex4.c
#include <stdio.h>
#include "ex4.h"  // Inclui o cabeçalho com a declaração da função

// Implementação da função de busca em árvore binária Em-Ordem
struct NO* busca(struct NO* raiz, int valor) {
    if (raiz == NULL || raiz->dado == valor)
        return raiz;

    if (valor < raiz->dado)
        return busca(raiz->esq, valor);

    return busca(raiz->dir, valor);
}

int ex4(void) {
    struct NO* raiz = NULL;
    int valorBusca;

    // Criando a árvore binária
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    // Solicita ao usuário um número para buscar na árvore
    printf("Digite um numero para buscar na arvore: ");
    scanf("%d", &valorBusca);

    // Realiza a busca na árvore
    struct NO* resultado = busca(raiz, valorBusca);

    // Exibe o resultado da busca
    if (resultado != NULL) {
        printf("Valor %d encontrado na árvore.\n", resultado->dado);
    } else {
        printf("Valor %d não encontrado na árvore.\n", valorBusca);
    }

    return 0;
}