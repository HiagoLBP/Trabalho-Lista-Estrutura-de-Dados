#include <stdio.h>
#include <stdlib.h>

struct No {
    int dado;
    struct No *prox;
};

typedef struct No No;

No* inserirFinal(No *inicio, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = NULL;

    if (inicio == NULL) return novo;

    No *temp = inicio;
    while (temp->prox != NULL)
        temp = temp->prox;
    temp->prox = novo;
    return inicio;
}

No* inserirOrdenado(No *inicio, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = NULL;

    if (inicio == NULL || valor < inicio->dado) {
        novo->prox = inicio;
        return novo;
    }

    No *atual = inicio;
    while (atual->prox != NULL && atual->prox->dado < valor)
        atual = atual->prox;

    novo->prox = atual->prox;
    atual->prox = novo;
    return inicio;
}

void exibirLista(No *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }
    No *temp = inicio;
    while (temp != NULL) {
        printf("%d ", temp->dado);
        temp = temp->prox;
    }
    printf("\n");
}

No* removerFim(No *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return NULL;
    }

    if (inicio->prox == NULL) {
        free(inicio);
        return NULL;
    }

    No *anterior = NULL, *atual = inicio;
    while (atual->prox != NULL) {
        anterior = atual;
        atual = atual->prox;
    }

    anterior->prox = NULL;
    free(atual);
    return inicio;
}

No* buscar(No *inicio, int valor) {
    No *temp = inicio;
    while (temp != NULL) {
        if (temp->dado == valor)
            return temp;
        temp = temp->prox;
    }
    return NULL;
}

int main() {
    No *inicio = NULL;
    int opcao = 0, valor;

    while (opcao != 6) {
        printf("\n--- MENU ---\n");
        printf("1. Inserir no final\n");
        printf("2. Buscar valor\n");
        printf("3. Remover do final\n");
        printf("4. Inserir ordenado\n");
        printf("5. Exibir lista\n");
        printf("6. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o valor: ");
            scanf("%d", &valor);
            inicio = inserirFinal(inicio, valor);
        } 
        else if (opcao == 2) {
            printf("Digite o valor a buscar: ");
            scanf("%d", &valor);
            if (buscar(inicio, valor))
                printf("Valor encontrado!\n");
            else
                printf("Valor nao encontrado.\n");
        } 
        else if (opcao == 3) {
            inicio = removerFim(inicio);
        } 
        else if (opcao == 4) {
            printf("Digite o valor: ");
            scanf("%d", &valor);
            inicio = inserirOrdenado(inicio, valor);
        } 
        else if (opcao == 5) {
            exibirLista(inicio);
        } 
        else if (opcao == 6) {
            printf("Saindo...\n");
        } 
        else {
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}
