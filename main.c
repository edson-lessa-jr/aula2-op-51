#include <stdio.h>
#include "ex1/ex1.h"
#include "ex2/ex2.h"
#include "ex3/ex3.h"
#include "ex4/ex4.h"
#include "ex5/ex5.h"



int main(void) {
        int opcao;

        do {
            printf("\n======= MENU =======\n");
            printf("1 - Caminhamento Pre-Ordem\n");
            printf("2 - Caminhamento Em-Ordem\n");
            printf("3 - Caminhamento Pos-Ordem\n");
            printf("123 - Comparacao dos Caminhamentos\n");
            printf("4 - Busca Arvore Binaria \n");
            printf("5 - Busca Arvore Balanceada \n");
            printf("0 - Sair\n");
            printf("====================\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &opcao);

            switch (opcao) {
                case 1:
                    printf("\nCaminhamento Pre-Ordem:\n");
                ex1();
                printf("\n");
                break;

                case 2:
                    printf("\nCaminhamento Em-Ordem:\n");
                ex2();
                printf("\n");
                break;

                case 3:
                    printf("\nCaminhamento Pos-Ordem:\n");
               ex3();
                printf("\n");
                break;

                case 123:
                    printf("\nComparacao dos Caminhamentos:\n");
                    printf("Pre-Ordem: ");
                    ex1();
                    printf("\nEm-Ordem: ");
                    ex2();
                    printf("\nPos-Ordem: ");
                    ex3();
                    printf("\n");
                break;
                case 4:
                    printf("Busca Arvore Binaria \n");
                    ex4();
                    printf("\n");
                case 5:
                    printf("Busca Arvore Balanceada\n");
                ex5();
                printf("\n");
                case 0:
                    printf("Saindo do programa...\n");
                break;

                default:
                    printf("Opcao invalida! Tente novamente.\n");
            }
        } while (opcao != 0);
    return 0;
}
