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


#endif /* lista_h */