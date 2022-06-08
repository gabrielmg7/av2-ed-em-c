## ESTRUTURA DE DADOS EM C ##
---
#### ESTACIO FIC 2022.1 - PROFESSORA OTILIA 
#### ALUNO: Gabriel Moura   
#### Atividade para AV2.
---
##### QUESTÃO 3 LISTA
###### Em uma agenda telefônica os contatos são cadastrados com os seguintes dados:

• Nome – nome do contato (máximo 40 caracteres);
• Telefone – cadeia de caracteres com o número do telefone do contato (máximo 15 caracteres);
• Celular – cadeia de caracteres com o número do celular do contato (máximo 15 caracteres);
• Email – cadeia de caracteres com o email do contato (máximo 40 caracteres);
• DataAniversario – data de aniversário do contato (contendo dia e mês);

Essas informações podem ser representadas em dois tipos estruturados: Data e Contato. 

Utilizando listas encadeadas, escreva um programa que permita o cadastro, edição, remoção, busca e  impressão de contatos desta agenda telefônica. Os elementos da lista encadeada para armazenar contatos são representados pela seguinte estrutura:

```c
struct elemento {
Contato info;
struct elemento* prox;
};
typedef struct elemento Elemento;
```

O seu programa deve implementar as seguintes funções:

`cria_agenda`– cria uma nova lista encadeada retornando um ponteiro para NULL;

`insere_contato`– insere um novo contato na lista encadeada respeitando a ordem alfabética dos nomes dos contatos já existentes na agenda;

`busca_contato`– busca um contato na agenda com base em um determinado nome informado pelo usuário. A função retorna o endereço de memória do elemento encontrado ou NULL caso o contato não seja encontrado;

`remove_contato`– deleta um determinado contato existente na agenda. A função deve permitir ao usuário buscar por um contato na agenda (utilizando a função busca_contato previamente criada) e em seguida remover da lista o contato. Se o contato buscado não for encontrado, o
programa deve exibir uma mensagem informando o usuário sobre esse fato;

`atualiza_contato`– modifica os dados de um contato já existente na agenda. A função deve permitir ao usuário buscar por um contato na agenda (utilizando a função busca_contato previamente criada) e em seguida alterar os dados do contato encontrado com base nas novas informações fornecidas pelo usuário. Se o contato buscado não for encontrado, o programa deve exibir uma mensagem informando o usuário sobre esse fato;

`remove_duplicados`– remove todos os contatos duplicados existentes na lista. Um contato é considerado duplicado se existir outro contato na agenda com o mesmo nome;

`libera_agenda`– libera a memória alocada dinamicamente para armazenar os contatos da agenda;