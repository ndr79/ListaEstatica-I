#include "lista.h"

#include <stdlib.h>

// Cria uma lista vazia
// Pré-condição: nenhuma
// Pós-condição: lista criada
Lista* cria_lista_vazia(void) {
    Lista* nova_lista = (Lista*) malloc(sizeof(Lista));
    nova_lista->pos_livre = 0;
    return nova_lista;
}

// Testa se uma lista é vazia
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: retorna 1 se a lista é vazia ou 0 caso contrário
int vazia(Lista* l) {
    return (l->pos_livre == 0);
}

// Insere um item na lista
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: item é inserido na lista
void insere(Lista* l, TipoItem x) {
    if(l->pos_livre >= TAM_MAX)
        printf("Lista cheia.\n");
    else
        l->item[l->pos_livre++] = x;
}

// Retira o item da lista
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: item é removido da lista
void retira(Lista* l, TipoItem x) {
    if(vazia(l))
        printf("Lista vazia: sem elementos para retirar.\n");
    else {
        int pos = 0;
        while(pos < l->pos_livre && x != l->item[pos])
            pos++;
        if(pos == l->pos_livre)
            printf("Elemento não encontrado");
        else {
            int i;
            for(i = pos; i < l->pos_livre; i++)
                l->item[i] = l->item[i + 1];
        }
        l->pos_livre--;
    }
}

// Imprime itens da lista
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: itens exibidos no console
void imprime(Lista* l) {
    if(!vazia(l)) {
        int pos = 0;
        printf("[ ");
        while (pos < l->pos_livre) {
           printf("%d ", l->item[pos]);
           pos++;
        }
        printf("]\n");
    }
}