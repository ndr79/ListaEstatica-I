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
// Entrada: nenhum
// Retorno: lista
// Pré-condição: nenhuma
// Pós-condição: lista criada
Lista* cria_lista_vazia(void);

// Testa se uma lista é vazia
// Entrada: lista
// Retorno: 1 se a lista está vazia ou 0 caso contrário
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: retorna 1 se a lista é vazia ou 0 caso contrário
int vazia(Lista* l);

// Insere um item na lista
// Entrada: lista e item a ser inserido na lista
// Retorno: lista modificada
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: item é inserido na lista
void inserir(Lista* l, TipoItem x);

// Libera a memória ocupada pela lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: ponteiro para lista criado por cria_lista_vazia()
// Pós-condição: memória ocupada pela lista é liberada, caso exista
void liberar(Lista* l);

// Imprime itens da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: itens exibidos no console
void imprimir(Lista* l);

// Retira o item da lista
// Entrada: lista e item a ser retirado da lista
// Retorno: lista modificada
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: item é removido da lista
void retirar(Lista* l, TipoItem x);

// Retorna o tamanho da lista
// Entrada: lista
// Retorno: número de elemetos da lista
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: tamanho da lista retornado
int tamanho(Lista* l);

// Retorna a posição de um elemento na lista
// Entrada: lista e elemento a ser localizado
// Retorno: posição do elemento ou -1 caso não seja encontrado
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: posição do elemento retornada
int posicao(Lista* l, TipoItem x);

#endif /* lista_h */