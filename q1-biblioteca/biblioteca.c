#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>

typedef struct Fila
{
    char nome;
    char primeiraPessoa;
    char ultimaPessoa;
    char nPessoas;
} pessoa[5];
typedef struct Livro
{
    int codigo;
    char titulo[25];
    char autor[25];
    bool disponibilidade;
} repositorio[5];

void entraFila(){};

void cadastraLivro(struct Livro *repositorio, bool *disponibilidade, int *codigo, char *titulo, char *autor, char *nome, char *primeiraPessoa, char *ultimaPessoa, char *nPessoas){};

void alugarLivro(struct Livro *repositorio, struct Fila *pessoa, bool *disponibilidade, int *codigo, char *titulo, char *autor, char *nome, char *primeiraPessoa, char *ultimaPessoa, char *nPessoas){};

void mostrarRepositorio(struct Livro *repositorio, struct Fila *pessoa, bool *disponibilidade, int *codigo, char *titulo, char *autor, char *nome, char *primeiraPessoa, char *ultimaPessoa, char *nPessoas){};

void devolverLivro(struct Livro *repositorio, struct Fila *pessoa, bool *disponibilidade, int *codigo, char *titulo, char *autor, char *nome, char *primeiraPessoa, char *ultimaPessoa, char *nPessoas){};

void menuRepositorio(struct Livro *repositorio, struct Fila *pessoa, bool *disponibilidade, int *codigo, char *titulo, char *autor, char *nome, char *primeiraPessoa, char *ultimaPessoa, char *nPessoas)
{
    int opcao;

    do
    {
        printf("|============================================================|\n");
        printf("| Bem-vindo(a) ao balcao. Posso ajudar? (0-5)                |\n");
        printf("|============================================================|\n");
        printf("| 1 - Cadastrar um Livro                                     |\n");
        printf("| 2 - Alugar um Livro                                        |\n");
        printf("| 3 - Ver repositório de livros                              |\n");
        printf("| 4 - Devolver um Livro                                      |\n");
        printf("| 0 - Sair                                                   |\n");
        printf("|============================================================|\n");
        printf("|Opcao? ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 0: // Sair
            clrscr();
            printf("Saindo...");
            exit(0);
            break;
        case 1: // cadastrar um Livro
            clrscr();
            cadastraLivro(&repositorio, &disponibilidade, &codigo, &titulo, &autor, &nome, &primeiraPessoa, &ultimaPessoa, &nPessoas);
            break;
        case 2: // aluga um livro disponível
            clrscr();
            alugarLivro(&repositorio, &pessoa, &disponibilidade, &codigo, &titulo, &autor, &nome, &primeiraPessoa, &ultimaPessoa, &nPessoas);
            break;
        case 3: // mostrar repositório de livros
            clrscr();
            mostrarRepositorio(&repositorio, &pessoa, &disponibilidade, &codigo, &titulo, &autor, &nome, &primeiraPessoa, &ultimaPessoa, &nPessoas);
            break;
        case 4: // devolver um livro
            clrscr();
            devolverLivro(&repositorio, &pessoa, &disponibilidade, &codigo, &titulo, &autor, &nome, &primeiraPessoa, &ultimaPessoa, &nPessoas);
        default:
            printf("Opcao invalida, insira um valor entre 0 e 5.\\n\n");
            system("PAUSE");
            clrscr();
        };
    } while (opcao != 0);
};

void menuInicial(struct Fila *pessoa, char *nome)
{

    struct Fila *pessoa;
    printf("=======================================================|\n");
    printf("           .--.           .---.        .-.             |\n");
    printf("   .---|--|   .-.     | A |  .---. |~|'   :--.         |\n");
    printf(".--|===|Ch|---|_|--.__| S |--|:::| |~|-==-|==|---.     |\n");
    printf("|%%|NT2|oc|===| |~~|%%| C |--|   |_|~| M  |  |___|-.   |\n");
    printf("|  |   |ah|===| |==|  | I |  |:::|=| | A  |GB|---|=|   |\n");
    printf("|  |   |ol|   |_|__|  | I |__|   | | | T  |  |_V_| |   |\n");
    printf("|~~|===|--|===|~|~~|%%|~~~|--|:::|=|~|----|==|---|=|   |\n");
    printf("^--^---'--^---^-^--^--^---'--^---^-^-^-==-^--^---^-'   |\n");
    printf("=======================================================|\n");
    printf("=======================================================|\n");
    printf("Qual seu nome?                                            ");
    fflush(stdin);
    gets(nome);
    clrscr();
};
void main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    char *nome, *primeiraPessoa, *ultimaPessoa, *nPessoas, *titulo, *autor;
    bool *disponibilidade;
    int *codigo;
    struct Fila pessoa[5];
    struct Livro repositorio[5];

    // Chamando as funções...
    menuInicial(&nome, &pessoa);
    menuRepositorio(&repositorio, &pessoa, &disponibilidade, &codigo, &titulo, &autor, &nome, &primeiraPessoa, &ultimaPessoa, &nPessoas);
}
