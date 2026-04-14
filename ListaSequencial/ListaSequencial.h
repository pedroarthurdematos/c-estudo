#pragma once // Guardando o arquivo para não ser incluído mais de uma vez
#define MAX 100 // Definindo o tamanho máximo da lista

struct aluno { 
    int matricula; 
    char nome[30]; 
    float nota1, nota2, nota3;
};

typedef struct lista Lista; // Apelido para o tipo Lista (struct lista)

// Protótipos das Funções do TAD Lista
Lista *cria_lista(); // Retorna um ponteiro para uma estrutura Lista para Alunos

void libera_lista(Lista *li);

//retorna o comprimento da lista ou -1 se ela for nulla
int tamanho_lista(Lista *li);
int lista_cheia(Lista *li);
int lista_vazia(Lista *li);

//Insere aluno na lista: início, meio e no final
int insere_lista_inicio(Lista *li, struct aluno al);
int insere_lista_ordenado(Lista *li, struct aluno al);
int insere_lista_final(Lista *li, struct aluno al);

//Remove aluno da lista: início, meio e no final
int remove_lista_inicio(Lista *li);
int remove_lista_final(Lista *li);
int remove_lista_ordenada(Lista *li, int matricula);


//Consulta um aluno pela posição e retorna, por referência, o aluno pesquisado
int consulta_lista_posicao(Lista *li, int pos, struct aluno *al);
int consulta_lista_matricula(Lista *li, int matricula, struct aluno *al);



