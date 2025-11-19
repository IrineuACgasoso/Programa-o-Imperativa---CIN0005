#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct pilha_est
{
    int itens[MAX];
    int top;
} Stack;

void push(Stack* pilha, int numero) {
    if (cheia(pilha))
        {
            printf("A pilha está cheia!\n");
            return;
        }
    pilha->top++;
    pilha->itens[pilha->top] = numero;
    printf("Valor adicionado: %d", numero);
}

void pop(Stack* pilha) {
    if (vazia(pilha))
    {
        printf("Pilha vazia!\n");
        return;
    }
    printf("Valor retirado: %d\n", pilha->itens[pilha->top]);
    pilha->top--;
}

int cheia(Stack* pilha) {
    if (pilha->top == MAX - 1)
    {
        return 1;
    }
    return 0;
}

int vazia(Stack* pilha) {
    if (pilha->top == -1)
    {
        return 1;
    }
    return 0;
    
}