#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *proximo;
} No;

typedef struct
{
    No *inicio, *fim;
    int tam;
} Lista;

// inserção no início da lista
void inserirInicio(Lista *lista, int valor);

// inserir no final da lista
void inserirFim(Lista *lista, int valor);

// imprimir a lista
void imprimir(Lista *lista);

int main()
{
    Lista lista;
    int opcao, valor;

    lista.inicio = NULL;
    lista.tam = 0;

    do
    {
        printf("1 = Inserir no inicio\n2 - Imprimir\n3 - Inserir no fim\n5 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite um valor a ser inserido: ");
            scanf("%d", &valor);
            inserirInicio(&lista, valor);
            break;
        case 2:
            imprimir(&lista);
            break;
        case 3:
            printf("Digite um valor a ser inserido: ");
            scanf("%d", &valor);
            inserirFim(&lista, valor);
            break;
        case 5:
            printf("Finalizando...\n");
            break;
        default:
            printf("Opção inválida");
            break;
        }
    } while (opcao != 5);

    imprimir(&lista);

    return 0;
}

void inserirInicio(Lista *lista, int valor)
{
    No *novo = (No *)malloc(sizeof(No)); // cria um novo nó
    novo->valor = valor;                 // (*novo).valor = valor

    if (lista->inicio == NULL)
    { // a lista está vazia
        novo->proximo = NULL;
        lista->inicio = novo;
        lista->fim = novo;
    }
    else
    { // a lista não está vazia
        novo->proximo = lista->inicio;
        lista->inicio = novo;
    }
    lista->tam++;
}

void inserirFim(Lista *lista, int valor)
{
    No *no, *novo = (No *)malloc(sizeof(No)); // cria um novo nó
    novo->valor = valor;
    novo->proximo = NULL;

    if (lista->inicio == NULL)
    { // lista vazia
        lista->inicio = novo;
        // lista->fim = novo;
    }
    else
    { // lista não vazia
        no = lista->inicio;
        while (no->proximo != NULL)
            no = no->proximo;
        no->proximo = novo;
        
    }
    lista->tam++;
}

void imprimir(Lista *lista)
{
    No *inicio = lista->inicio;
    printf("Tamanho da lista: %d\n", lista->tam);
    while (inicio != NULL)
    {
        printf("%d ", inicio->valor);
        inicio = inicio->proximo;
    }
    printf("\n\n");
}