#include "lista.h"

#include <stdlib.h>

// Cria uma lista vazia
// Entrada: nenhum
// Retorno: lista
// Pré-condição: nenhuma
// Pós-condição: lista criada
Lista* cria_lista_vazia(void) {
    Lista* nova_lista = (Lista*) malloc(sizeof(Lista));
    
     if(nova_lista != NULL)
        nova_lista->pos_livre = 0;

    return nova_lista;
}

// Testa se uma lista é vazia
// Entrada: lista
// Retorno: 1 se a lista está vazia ou 0 caso contrário
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: retorna 1 se a lista é vazia ou 0 caso contrário
int vazia(Lista* l) {
    return (l->pos_livre == 0);
}

// Insere um item na lista
// Entrada: lista e item a ser inserido na lista
// Retorno: lista modificada
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: item é inserido na lista
void inserir(Lista* l, TipoItem x) {
    if(l->pos_livre >= TAM_MAX)
        printf("Lista cheia.\n");
    else
        l->item[l->pos_livre++] = x;
}

// Libera a memória ocupada pela lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: memória ocupada pela lista é liberada, caso exista
void liberar(Lista* l) {
    if(l != NULL)
        free(l);
}

// Imprime itens da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: itens exibidos no console
void imprimir(Lista* l) {
     if(vazia(l)) {
        printf("[ ]\n");
        return;
    }

    printf("[ ");

    for(int i = 0; i < l->pos_livre; i++)
        printf("%d ", l->item[i]);

    printf("]\n");
}

// Retira o item da lista
// Entrada: lista e item a ser retirado da lista
// Retorno: lista modificada
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: item é removido da lista
void retirar(Lista* l, TipoItem x) {
    if(vazia(l)) {
        printf("Lista vazia: sem elementos para retirar.\n");
    }
    else {

        int pos = 0;

        while(pos < l->pos_livre && l->item[pos] != x)
            pos++;

        if(pos == l->pos_livre) {
            printf("Elemento não encontrado.\n");
        }
        else {

            int i;

            for(i = pos; i < l->pos_livre - 1; i++)
                l->item[i] = l->item[i + 1];

            l->pos_livre--;
        }
    }
}