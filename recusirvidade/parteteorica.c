/* ARQUIVOS - livro 'Linguagem C: completa e descomplicada'
2  Biblioteca padrão: stdio.h
3
4  OBS:
5  1 - Gravar em um arquivos consiste:
6      - Criar um ponteiro para FILE 'FILE *fp'
7      - Reservar uma região de memória para FILE e atribuir esse endereço à
8      variável ponteiro 'fp'
9      - Gravar o conteúdo do file 'fp' no arquivo em disco
10 2 - LER dados em um arquivo consiste:
11     - Criar um ponteiro para FILE 'FILE *fp'
12     - Reservar uma região de memória para FILE e carregar todo conteúdo do
13     'arquivo.txt' à essa região de memória
14     e atribuir esse endereço ao ponteiro 'fp'
15     - LER o conteúdo trazido do arquivo.txt para file 'fp' a partir do ponteiro fp
16
17
18 12.3 - Sobre leitura e escrita em arquivos
19 - Diferentemente de outras linguagens, a linguagem C não possui funções que
20   automaticamente leiam todas as informações de um arquivo.
21
22 Arquivo Texto: 

W > Write 
r > Read
WB > Write em binario
rb > Read em binario




*/