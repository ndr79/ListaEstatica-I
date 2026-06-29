#ifndef lista_h
#define lista_h

#include <stdio.h>

#define TAM_MAX 1000 // número máximo de itens na lista

typedef int TipoItem; // representa o tipo dos elementos da lista

// Estrutura para lista estática
typedef struct {
    TipoItem item[TAM_MAX];
    int pos_livre; // última posição livre do vetor
}Lista;

// Cria uma lista vazia
// Pré-condição: nenhuma
// Pós-condição: lista criada
Lista* cria_lista_vazia(void);

// Testa se uma lista é vazia
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: retorna 1 se a lista é vazia ou 0 caso contrário
int vazia(Lista* l);

#endif /* lista_h */