#include <stdio.h>
#include <stdlib.h>

struct No {
    int dado;
    struct No *prox;
};

typedef struct No No;

No* inserirInicio(No *inicio, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = inicio;
    return novo;
}

void exibirLista(No *inicio) {
    No *atual = inicio;
    if (atual == NULL) {
        printf("Lista vazia!\n");
        return;
    }
    printf("Elementos da lista: ");
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}

No* removerInicio(No *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return NULL;
    }
    No *temp = inicio;
    inicio = inicio->prox;
    free(temp);
    return inicio;
}

int main() {
    No *inicio = NULL;
    int opcao = 0, valor;

    while (opcao != 4) {
        printf("\n--- MENU ---\n");
        printf("1. Inserir no inicio\n");
        printf("2. Exibir lista\n");
        printf("3. Remover do inicio\n");
        printf("4. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o valor: ");
            scanf("%d", &valor);
            inicio = inserirInicio(inicio, valor);
        } 
        else if (opcao == 2) {
            exibirLista(inicio);
        } 
        else if (opcao == 3) {
            inicio = removerInicio(inicio);
        } 
        else if (opcao == 4) {
            printf("Saindo...\n");
        } 
        else {
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}
