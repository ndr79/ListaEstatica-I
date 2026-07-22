#include "utils.h"

#include "lista.h"

// Exibe o menu de opções para o usuário
// Entrada: nenhum
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: nenhuma
void menu(void) {
    Lista* l = cria_lista_vazia();

    TipoItem item;
    TipoItem x;

    int op = -1;

    while (op != 0) {
        printf("\nEscolha uma das opções:\n\n");
        printf("1. Inserir um item na lista\n");
        printf("2. Exibir lista\n");
        printf("3. Excluir um item da lista\n");
        printf("0. Encerrar programa\n");

        printf("\nOpção: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("\nDigite o valor a ser inserido na lista: ");
                scanf("%d", &item);
                inserir(l, item);
                break;

            case 2:
                imprimir(l);
                break;

            case 3:
                printf("\nDigite o valor do item a ser retirado da lista: ");
                scanf("%d", &x);
                retirar(l, x);
                break;
            
            case 0:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("Opção inválida.\n");
                break;
        }

        printf("\n");
    }

    liberar(l);
    
}