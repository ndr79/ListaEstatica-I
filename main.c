#include <stdio.h>

#include "lista.h"

int main(int argc, const char* argv[]) {
    Lista* l = NULL;

   l = cria_lista_vazia();

   insere(l, 2);
   insere(l, 5);
   insere(l, 12);
   insere(l, 23);

    printf("\n");
    return 0;
}