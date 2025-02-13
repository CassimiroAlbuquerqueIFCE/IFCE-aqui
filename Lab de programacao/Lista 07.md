## Lista 07 do Laboratório de Programação

## Questão 01

```C

#include <stdio.h>

// Definição da estrutura aluno
struct aluno {
    float nota1;
    float nota2;
    float media;
};

// Função para calcular a média
void calcularMedia(struct aluno *a) {
    a->media = (a->nota1 + a->nota2) / 2.0f;
}

int main() {
    struct aluno aluno1;

    // Leitura das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno1.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &aluno1.nota2);

    // Cálculo da média
    calcularMedia(&aluno1);

    // Exibição dos resultados
    printf("\nNota 1: %.2f\n", aluno1.nota1);
    printf("Nota 2: %.2f\n", aluno1.nota2);
    printf("Media: %.2f\n", aluno1.media);

    return 0;
}

```

## Questão 02

```C

#include <stdio.h>
#include <string.h>

// Definição da estrutura estoque
struct estoque {
    char nomePeca[50];
    int numeroPeca;
    float preco;
    int numeroPedido;
};

int main() {
    struct estoque peca;

    // Leitura dos dados da peça
    printf("Digite o nome da peca: ");
    scanf(" %[^\n]", peca.nomePeca); // Lê uma string com espaços

    printf("Digite o numero da peca: ");
    scanf("%d", &peca.numeroPeca);

    printf("Digite o preco da peca: ");
    scanf("%f", &peca.preco);

    printf("Digite o numero do pedido: ");
    scanf("%d", &peca.numeroPedido);

    // Exibição dos dados da peça
    printf("\nDados da peca:\n");
    printf("Nome: %s\n", peca.nomePeca);
    printf("Numero da peca: %d\n", peca.numeroPeca);
    printf("Preco: %.2f\n", peca.preco);
    printf("Numero do pedido: %d\n", peca.numeroPedido);

    return 0;
}


```

## Questão 03

```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definição da estrutura para armazenar informações sobre o vetor
struct VetorInfo {
    int *ponteiro;
    int quantidade;
    float media;
};

// Função para calcular a média do vetor
float calcularMedia(int *vetor, int tamanho) {
    float soma = 0.0f;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma / tamanho;
}

int main() {
    int tamanho;

    // Solicita o tamanho do vetor ao usuário
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("O tamanho do vetor deve ser maior que 0.\n");
        return 1;
    }

    // Aloca memória para o vetor
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // Preenche o vetor com números aleatórios
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; // Números aleatórios entre 0 e 99
    }

    // Calcula a média do vetor
    float media = calcularMedia(vetor, tamanho);

    // Preenche a estrutura com as informações do vetor
    struct VetorInfo info;
    info.ponteiro = vetor;
    info.quantidade = tamanho;
    info.media = media;

    // Exibe o vetor e a média
    printf("Vetor gerado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Media do vetor: %.2f\n", info.media);

    // Libera a memória alocada
    free(vetor);

    return 0;
}


```

## Questão 04

```C

#include <stdio.h>

// Definição da estrutura aluno
struct aluno {
    float nota1;
    float nota2;
    float media;
};

// Função para calcular a média de um aluno
void calcularMedia(struct aluno *a) {
    a->media = (a->nota1 + a->nota2) / 2.0f;
}

int main() {
    struct aluno alunos[3];

    // Leitura das notas para cada aluno
    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Digite a primeira nota: ");
        scanf("%f", &alunos[i].nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &alunos[i].nota2);

        // Calcula a média do aluno
        calcularMedia(&alunos[i]);
    }

    // Exibição dos resultados
    printf("\nResultados:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
        printf("Media: %.2f\n", alunos[i].media);
    }

    return 0;
}



```

## Questão 05

```C

#include <stdio.h>
#include <string.h>

// Definição da estrutura professor
struct professor {
    char nome[50];
    int matricula;
};

// Definição da estrutura disciplina
struct disciplina {
    char nome[50];
    int codigo;
    struct professor prof; // Campo que é uma estrutura professor
};

int main() {
    struct disciplina disciplina1;

    // Leitura dos dados da disciplina
    printf("Digite o nome da disciplina: ");
    scanf(" %[^\n]", disciplina1.nome); // Lê uma string com espaços

    printf("Digite o codigo da disciplina: ");
    scanf("%d", &disciplina1.codigo);

    // Leitura dos dados do professor
    printf("\nDados do professor:\n");
    printf("Digite o nome do professor: ");
    scanf(" %[^\n]", disciplina1.prof.nome);

    printf("Digite a matricula do professor: ");
    scanf("%d", &disciplina1.prof.matricula);

    // Exibição dos dados da disciplina e do professor
    printf("\nDados da disciplina:\n");
    printf("Nome: %s\n", disciplina1.nome);
    printf("Codigo: %d\n", disciplina1.codigo);

    printf("\nDados do professor:\n");
    printf("Nome: %s\n", disciplina1.prof.nome);
    printf("Matricula: %d\n", disciplina1.prof.matricula);

    return 0;
}






```
