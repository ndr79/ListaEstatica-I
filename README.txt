# Lista Estática em C

## Descrição

Implementação de uma lista estática que utiliza um vetor com capacidade de 
armazenar até 1000 elementos. Desenvolvido em linguagem C.

---

## Estrutura da Lista

```c
#define TAM_MAX 1000

typedef int TipoItem;

typedef struct {
    TipoItem item[TAM_MAX];
    int pos_livre;
}Lista;
```

---

## Operações Implementadas

- Criar lista vazia;
- Verificar se a uma lista está vazia;
- Inserir um elemento na lista;
- Imprimir os elementos da lista;
- Remover um elemento da lista;
- Retornar o número de elementos na lista;
- Retornar a posição de um elemento;
- Liberar a memória da lista.

---

## Organização do Projeto

.
|-- main.c
|-- lista.h
|-- lista.c
|-- utils.h
|-- utils.c
|-- README.txt

---

## Compilação

Utilizando GCC:

```bash
gcc *.c -o listaEstatica
```

---

## Execução

Linux/macOS:

```bash
./listaEstatica
```

Windows:

```cmd
listaEstatica.exe
````

---

## Autor

André Brandão