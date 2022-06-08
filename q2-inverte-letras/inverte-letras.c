#include <locale.h>
#include <time.h>

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct und
{
    char conteudo;
    struct und *prox;
} unidade;

typedef struct pilha
{
    struct und *topo;
} pilha;

void empilhando(char c, pilha *p)
{
    unidade *nova = (unidade *)malloc(sizeof(unidade));
    nova->conteudo = c;
    nova->prox = p->topo;
    p->topo = nova;
}

char desempilhando(pilha *p)
{
    unidade *pt = p->topo;
    char c = pt->conteudo;
    p->topo = pt->prox;
    free(pt);
    return c;
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    char frase[50];
    pilha p;
    p.topo = NULL;
    printf("Informe a frase: ");
    gets(frase);
    printf("\nFrase invertida: ");
    for (int i = 0; frase[i] != '\0'; i++)
    {
        for (; frase[i] != '\0' && frase[i] != ' '; i++)
        {
            empilhando(frase[i], &p);
        }
        while (p.topo != NULL)
        {
            putchar(desempilhando(&p));
        }
        frase[i] == ' ' ? ' ' : ' ';
        putchar(frase[i]);
    }
    return 0;
}
