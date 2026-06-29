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