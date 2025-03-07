// ex5.h
#ifndef EX5_H
#define EX5_H

#include "../definicaoArvore/estrutura_arvore.h" // Inclui a estrutura da árvore

// Funções AVL
struct NO* inserirAVL(struct NO* raiz, int valor);
void emOrdem(struct NO* raiz);
int ex5(void);

#endif
