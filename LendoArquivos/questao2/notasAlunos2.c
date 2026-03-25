#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    const char *filename = "notas.txt";
    FILE *file = fopen(filename, "r");
    if(file == NULL) {
      perror("Erro ao abrir o arquivo"); return 1;
}
    char line[100];
    char nome[50];
    float nota;
    float somaNotas = 0.0;
    int contagemAlunos = 0;
    float maiorNota = -1.0;
    char nomeMaiorNota[50];

    while (fgets(line, sizeof(line), file) != NULL){
        if (sscanf(line, "Nome: %S Nota: %f", nome, &nota) == 2){
            somaNotas += nota;
            contagemAlunos++;
            if(nota > maiorNota){
                maiorNota = nota;
                strcpy(nomeMaiorNota, nome);
            }
        }
    }

    fclose(file);
    float media = somaNotas / contagemAlunos;
    printf("Media da turma: %.2f\n", media);
    printf("Aluno com a maior nota: %s (Nota: %.2f)\n", nomeMaiorNota, ,maiorNota);
    return 0;
}

/*
1. O que é a função fgets e qual é a sua finalidade neste código?
utilizada para faazer uma leitura de dados, sendo assim, armazenando em 
arrays.

2. Como é feita a leitura de cada linha do arquivo utilizando a função fgets?
uma leitura continua while em cada linha até o fgets retornar NULL.

3. Qual é o propósito da função sscanf neste código?
Analizar e extrair determinado dado.

4. Como é feito o parse da linha lida pelo fgets utilizando a função sscanf?
O parse é feito através da definição de um modelo de formatação: "NOME: %s NOTA: %f"

5. O que acontece se a linha não seguir o formato esperado pelo sscanf?
Caso nao seguir o determinado formato, nao sera executa a operação "Nota".

6. Como são armazenados o nome e a nota extraídos de cada linha do arquivo?
Nome: É armazenado temporariamente em um array de caracteres chamado nome [50].
Nota: É armazenada em uma variável do tipo ponto flutuante (float) chamada nota.
Persistência: Durante a execução, a nota é somada à variável somaNotas para o 
cálculo da média , e caso seja a maior nota encontrada até o momento, o nome 
é copiado para nomeMaiorNota usando a função strcpy

7. Como é calculada a média da turma neste código?
A média é calculada após o encerramento do laço de leitura do arquivo. 

8. Como é determinado o aluno com a maior nota e como são armazenados o nome e a nota desse
aluno?
Envolve comparação e armazenamento de notas.















*/