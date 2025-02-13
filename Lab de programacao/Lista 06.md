## Lista 06 do Laboratório de Programação

## Questão 01

```C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <valor1> <valor2> <operacao>\n", argv[0]);
        printf("Operacao: 1 para soma, 2 para multiplicacao\n");
        return 1;
    }

    int valor1 = atoi(argv[1]);
    int valor2 = atoi(argv[2]);
    int operacao = atoi(argv[3]);

    int resultado;

    if (operacao == 1) {
        resultado = valor1 + valor2;
        printf("Soma: %d\n", resultado);
    } else if (operacao == 2) {
        resultado = valor1 * valor2;
        printf("Multiplicacao: %d\n", resultado);
    } else {
        printf("Operacao invalida. Use 1 para soma ou 2 para multiplicacao.\n");
        return 1;
    }

    return 0;
}

```

## Questão 02

```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* encontrarMenorElemento(int *vetor, int tamanho) {
    int *menor = &vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            menor = &vetor[i];
        }
    }
    return menor;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <quantidade de elementos>\n", argv[0]);
        return 1;
    }

    int tamanho = atoi(argv[1]);
    if (tamanho <= 0) {
        printf("O tamanho do vetor deve ser maior que 0.\n");
        return 1;
    }

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; // Gera números aleatórios entre 0 e 99
    }

    int *menor = encontrarMenorElemento(vetor, tamanho);

    printf("Vetor gerado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Endereco do menor elemento: %p\n", (void*)menor);
    printf("Menor elemento: %d\n", *menor);

    free(vetor);
    return 0;
}


```

## Questão 03

```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void encontrarMenorEMaiorElemento(int *vetor, int tamanho, int **enderecos) {
    int *menor = &vetor[0];
    int *maior = &vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            menor = &vetor[i];
        }
        if (vetor[i] > *maior) {
            maior = &vetor[i];
        }
    }

    enderecos[0] = menor;
    enderecos[1] = maior;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <quantidade de elementos>\n", argv[0]);
        return 1;
    }

    int tamanho = atoi(argv[1]);
    if (tamanho <= 0) {
        printf("O tamanho do vetor deve ser maior que 0.\n");
        return 1;
    }

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; // Gera números aleatórios entre 0 e 99
    }

    int *enderecos[2];
    encontrarMenorEMaiorElemento(vetor, tamanho, enderecos);

    printf("Vetor gerado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Endereco do menor elemento: %p, Valor: %d\n", (void*)enderecos[0], *enderecos[0]);
    printf("Endereco do maior elemento: %p, Valor: %d\n", (void*)enderecos[1], *enderecos[1]);

    free(vetor);
    return 0;
}


```

## Questão 04

```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void normalizarVetor(float *vetorNormalizado, int *vetor, int tamanho) {
    int min = vetor[0];
    int max = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < min) {
            min = vetor[i];
        }
        if (vetor[i] > max) {
            max = vetor[i];
        }
    }

    float diferenca = max - min;
    if (diferenca == 0) {
        // Se todos os elementos forem iguais, a normalização resulta em 0
        for (int i = 0; i < tamanho; i++) {
            vetorNormalizado[i] = 0.0f;
        }
    } else {
        for (int i = 0; i < tamanho; i++) {
            vetorNormalizado[i] = (float)(vetor[i] - min) / diferenca;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <quantidade de elementos>\n", argv[0]);
        return 1;
    }

    int tamanho = atoi(argv[1]);
    if (tamanho <= 0) {
        printf("O tamanho do vetor deve ser maior que 0.\n");
        return 1;
    }

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; // Gera números aleatórios entre 0 e 99
    }

    float *vetorNormalizado = (float *)malloc(tamanho * sizeof(float));
    if (vetorNormalizado == NULL) {
        printf("Erro ao alocar memoria.\n");
        free(vetor);
        return 1;
    }

    normalizarVetor(vetorNormalizado, vetor, tamanho);

    printf("Vetor original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Vetor normalizado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorNormalizado[i]);
    }
    printf("\n");

    free(vetor);
    free(vetorNormalizado);
    return 0;
}



```

## Questão 05

```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float somarElementos(float *vetor, int tamanho) {
    float soma = 0.0f;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <quantidade de elementos>\n", argv[0]);
        return 1;
    }

    int tamanho = atoi(argv[1]);
    if (tamanho <= 0) {
        printf("O tamanho do vetor deve ser maior que 0.\n");
        return 1;
    }

    float *vetor = (float *)malloc(tamanho * sizeof(float));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (float)rand() / RAND_MAX * 100.0f; // Gera números aleatórios entre 0 e 100
    }

    printf("Vetor gerado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    float soma = somarElementos(vetor, tamanho);
    printf("Soma dos elementos: %.2f\n", soma);

    free(vetor);
    return 0;
}





```
## Questão 06

```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para calcular a média
float calcularMedia(int *vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return (float)soma / tamanho;
}

// Função para calcular a mediana
float calcularMediana(int *vetor, int tamanho) {
    // Ordena o vetor (usando Bubble Sort para simplificar)
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    if (tamanho % 2 == 0) {
        return (float)(vetor[tamanho / 2 - 1] + vetor[tamanho / 2]) / 2.0f;
    } else {
        return (float)vetor[tamanho / 2];
    }
}

// Função para calcular a moda
int calcularModa(int *vetor, int tamanho) {
    int moda = vetor[0];
    int maxContagem = 1;
    int contagemAtual = 1;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] == vetor[i - 1]) {
            contagemAtual++;
        } else {
            if (contagemAtual > maxContagem) {
                maxContagem = contagemAtual;
                moda = vetor[i - 1];
            }
            contagemAtual = 1;
        }
    }

    // Verifica a última contagem
    if (contagemAtual > maxContagem) {
        moda = vetor[tamanho - 1];
    }

    return moda;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <quantidade de elementos>\n", argv[0]);
        return 1;
    }

    int tamanho = atoi(argv[1]);
    if (tamanho <= 0) {
        printf("O tamanho do vetor deve ser maior que 0.\n");
        return 1;
    }

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; // Gera números aleatórios entre 0 e 99
    }

    printf("Vetor gerado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    float media = calcularMedia(vetor, tamanho);
    float mediana = calcularMediana(vetor, tamanho);
    int moda = calcularModa(vetor, tamanho);

    printf("Media: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);

    free(vetor);
    return 0;
}




```

## Questão 07
```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float calcularMSE(float *vetorA, float *vetorB, int tamanho) {
    float soma = 0.0f;
    for (int i = 0; i < tamanho; i++) {
        float diferenca = vetorA[i] - vetorB[i];
        soma += diferenca * diferenca;
    }
    return soma / tamanho;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <quantidade de elementos>\n", argv[0]);
        return 1;
    }

    int tamanho = atoi(argv[1]);
    if (tamanho <= 0) {
        printf("O tamanho dos vetores deve ser maior que 0.\n");
        return 1;
    }

    float *vetorA = (float *)malloc(tamanho * sizeof(float));
    float *vetorB = (float *)malloc(tamanho * sizeof(float));
    if (vetorA == NULL || vetorB == NULL) {
        printf("Erro ao alocar memoria.\n");
        free(vetorA);
        free(vetorB);
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetorA[i] = (float)rand() / RAND_MAX * 100.0f; // Gera números aleatórios entre 0 e 100
        vetorB[i] = (float)rand() / RAND_MAX * 100.0f; // Gera números aleatórios entre 0 e 100
    }

    printf("Vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorA[i]);
    }
    printf("\n");

    printf("Vetor B:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorB[i]);
    }
    printf("\n");

    float mse = calcularMSE(vetorA, vetorB, tamanho);
    printf("Erro Medio Quadratico (MSE): %.2f\n", mse);

    free(vetorA);
    free(vetorB);
    return 0;
}


```
## Questão 08
```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Função para calcular o Erro Médio Quadrático (MSE)
float calcularMSE(float *vetorA, float *vetorB, int tamanho) {
    float soma = 0.0f;
    for (int i = 0; i < tamanho; i++) {
        float diferenca = vetorA[i] - vetorB[i];
        soma += diferenca * diferenca;
    }
    return soma / tamanho;
}

// Função para calcular o Erro Absoluto Médio (MAE)
float calcularMAE(float *vetorA, float *vetorB, int tamanho) {
    float soma = 0.0f;
    for (int i = 0; i < tamanho; i++) {
        soma += fabs(vetorA[i] - vetorB[i]);
    }
    return soma / tamanho;
}

// Função genérica para calcular o erro
float calcularErro(float *vetorA, float *vetorB, int tamanho, float (*funcaoErro)(float*, float*, int)) {
    return funcaoErro(vetorA, vetorB, tamanho);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <quantidade de elementos> <tipo de erro (1 para MSE, 2 para MAE)>\n", argv[0]);
        return 1;
    }

    int tamanho = atoi(argv[1]);
    int tipoErro = atoi(argv[2]);

    if (tamanho <= 0) {
        printf("O tamanho dos vetores deve ser maior que 0.\n");
        return 1;
    }

    if (tipoErro != 1 && tipoErro != 2) {
        printf("Tipo de erro invalido. Use 1 para MSE ou 2 para MAE.\n");
        return 1;
    }

    float *vetorA = (float *)malloc(tamanho * sizeof(float));
    float *vetorB = (float *)malloc(tamanho * sizeof(float));
    if (vetorA == NULL || vetorB == NULL) {
        printf("Erro ao alocar memoria.\n");
        free(vetorA);
        free(vetorB);
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetorA[i] = (float)rand() / RAND_MAX * 100.0f; // Gera números aleatórios entre 0 e 100
        vetorB[i] = (float)rand() / RAND_MAX * 100.0f; // Gera números aleatórios entre 0 e 100
    }

    printf("Vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorA[i]);
    }
    printf("\n");

    printf("Vetor B:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorB[i]);
    }
    printf("\n");

    float erro;
    if (tipoErro == 1) {
        erro = calcularErro(vetorA, vetorB, tamanho, calcularMSE);
        printf("Erro Medio Quadratico (MSE): %.2f\n", erro);
    } else if (tipoErro == 2) {
        erro = calcularErro(vetorA, vetorB, tamanho, calcularMAE);
        printf("Erro Absoluto Medio (MAE): %.2f\n", erro);
    }

    free(vetorA);
    free(vetorB);
    return 0;
}


```
## Questão 09
```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void binarizarMatriz(float **M, int linhas, int colunas, float limiar, int **S) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (M[i][j] > limiar) {
                S[i][j] = 1;
            } else {
                S[i][j] = 0;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <linhas> <colunas> <limiar>\n", argv[0]);
        return 1;
    }

    int linhas = atoi(argv[1]);
    int colunas = atoi(argv[2]);
    float limiar = atof(argv[3]);

    if (linhas <= 0 || colunas <= 0) {
        printf("As dimensoes da matriz devem ser maiores que 0.\n");
        return 1;
    }

    // Aloca a matriz M
    float **M = (float **)malloc(linhas * sizeof(float *));
    for (int i = 0; i < linhas; i++) {
        M[i] = (float *)malloc(colunas * sizeof(float));
    }

    // Aloca a matriz S
    int **S = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        S[i] = (int *)malloc(colunas * sizeof(int));
    }

    // Preenche a matriz M com valores aleatórios
    srand(time(NULL));
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            M[i][j] = (float)rand() / RAND_MAX * 100.0f; // Valores entre 0 e 100
        }
    }

    // Binariza a matriz M
    binarizarMatriz(M, linhas, colunas, limiar, S);

    // Exibe a matriz M
    printf("Matriz M:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f ", M[i][j]);
        }
        printf("\n");
    }

    // Exibe a matriz S binarizada
    printf("\nMatriz S binarizada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", S[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    for (int i = 0; i < linhas; i++) {
        free(M[i]);
        free(S[i]);
    }
    free(M);
    free(S);

    return 0;
}

```

## Questão 10
```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <dimensao da matriz>\n", argv[0]);
        return 1;
    }

    int N = atoi(argv[1]);
    if (N <= 0) {
        printf("A dimensao da matriz deve ser maior que 0.\n");
        return 1;
    }

    // Aloca a matriz
    int **matriz = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        matriz[i] = (int *)malloc(N * sizeof(int));
    }

    // Preenche a matriz com valores aleatórios
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100; // Valores entre 0 e 99
        }
    }

    // Calcula o somatório da diagonal principal
    int soma = 0;
    for (int i = 0; i < N; i++) {
        soma += matriz[i][i];
    }

    // Exibe a matriz
    printf("Matriz gerada:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Verifica se o somatório é par ou ímpar
    if (soma % 2 == 0) {
        printf("O somatorio da diagonal principal (%d) e PAR.\n", soma);
    } else {
        printf("O somatorio da diagonal principal (%d) e IMPAR.\n", soma);
    }

    // Libera a memória alocada
    for (int i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

 
```

## Questão 11
```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <N>\n", argv[0]);
        return 1;
    }

    int N = atoi(argv[1]);
    if (N <= 0) {
        printf("N deve ser maior que 0.\n");
        return 1;
    }

    // Aloca os vetores X e Y
    int *X = (int *)malloc(N * sizeof(int));
    int *Y = (int *)malloc(N * sizeof(int));

    // Aloca a matriz M
    int **M = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        M[i] = (int *)calloc(N, sizeof(int)); // Inicializa com 0
    }

    // Preenche os vetores X e Y com valores aleatórios
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        X[i] = rand() % N; // Valores entre 0 e N-1
        Y[i] = rand() % N; // Valores entre 0 e N-1
    }

    // Conta as coocorrências na matriz M
    for (int i = 0; i < N; i++) {
        M[X[i]][Y[i]]++;
    }

    // Exibe os vetores X e Y
    printf("Vetor X:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    printf("Vetor Y:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", Y[i]);
    }
    printf("\n");

    // Exibe a matriz M
    printf("\nMatriz de coocorrencias M:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    free(X);
    free(Y);
    for (int i = 0; i < N; i++) {
        free(M[i]);
    }
    free(M);

    return 0;
}

 
```

