## Lista 03 do Laboratório de Programação

## Questão 01

```C
#include <stdio.h>
#define TAMANHO 15

int main() {
    float vetor[TAMANHO], maior, menor, soma;
    int i;

    printf("Digite %d numeros:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%f", &vetor[i]);
    }

    maior = menor = vetor[0];

    for (i = 1; i < TAMANHO; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    soma = maior + menor;

    printf("A soma do maior e menor elemento eh: %.2f\n", soma);

    return 0;
}

```

## Questão 02

```C
#include <stdio.h>
#include <string.h>
#define TAMANHO 100

int main() {
    char string[TAMANHO], caractere;
    int i, encontrado = 0;

    printf("Digite uma string (máximo %d caracteres): ", TAMANHO - 1);
    fgets(string, TAMANHO, stdin);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); 
    //usa o espaço antes de %c para nao dar problema e ignorar espaços em branco

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("O caractere '%c' foi encontrado na string.\n", caractere);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", caractere);
    }

    return 0;
}

```

## Questão 03

```C
#include <stdio.h>
#include <string.h>
#define TAMANHO 100

int main() {
    char string[TAMANHO];
    int i, num = 0;

    printf("Digite uma string (máximo %d caracteres): ", TAMANHO - 1);
    fgets(string, TAMANHO, stdin);

//a funcao strcspn busca o caractere de nova linha e o substituindo pelo caractere nulo,
//pois sem essa função fica contando +1 caractere no final
    string[strcspn(string, "\n")] = '\0';

    for (i = 0; string[i] != '\0'; i++) {
        num++;
    }

    printf("A string possui %d caracteres.\n", num);

    return 0;
}

```

## Questão 04

```C
// código COM a função strcmp
#include <stdio.h>
#include <string.h>
#define TAMANHO 100

int main() {
    char string1[TAMANHO], string2[TAMANHO];

    printf("Digite a primeira string: ");
    fgets(string1, TAMANHO, stdin);

    printf("Digite a segunda string: ");
    fgets(string2, TAMANHO, stdin);

//a funcao strcspn busca o caractere de nova linha e o substituindo pelo caractere nulo,
//pois sem essa função fica contando +1 caractere no final
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

//a funcao strcmp retorna 0 se as strings forem iguais,
//negativo: Se a primeira string for lexicograficamente menor que a segunda.
//positivo: Se a primeira string for lexicograficamente maior que a segunda.
    if (strcmp(string1, string2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }
    return 0;
}

// código SEM a função strcmp
#include <stdio.h>
#include <string.h>
#define TAMANHO 100

int main() {
    char string1[TAMANHO], string2[TAMANHO];
    int i = 0, iguais = 1;

    printf("Digite a primeira string: ");
    fgets(string1, TAMANHO, stdin);

    printf("Digite a segunda string: ");
    fgets(string2, TAMANHO, stdin);

//a funcao strcspn busca o caractere de nova linha e o substituindo pelo caractere nulo,
//pois sem essa função fica contando +1 caractere no final
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

//compara cada caractere das duas strings
    while (string1[i] != '\0' && string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            iguais = 0;
            break;
        }
        i++;
    }

//para verifica se as strings têm o mesmo tamanho
    if (string1[i] != '\0' || string2[i] != '\0') {
        iguais = 0;
    }

    if (iguais) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
```

## Questão 05

```C
//codigo COM strcat()
#include <stdio.h>
#include <string.h>
#define TAMANHO 100

int main() {
    char string1[TAMANHO], string2[TAMANHO], resultado[TAMANHO * 2];

    printf("Digite a primeira string: ");
    fgets(string1, TAMANHO, stdin);

    printf("Digite a segunda string: ");
    fgets(string2, TAMANHO, stdin);

//a funcao strcspn busca o caractere de nova linha e o substituindo pelo caractere nulo,
//pois sem essa função fica contando +1 caractere no final
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    strcpy(resultado, string1); // Copia a primeira string para o resultado
    strcat(resultado, string2); // Concatena a segunda string ao resultado

    printf("A string concatenada é: %s\n", resultado);

    return 0;
}

//codigo SEM srtcat()
#include <stdio.h>
#include <string.h>
#define TAMANHO 100

int main() {
    char string1[TAMANHO], string2[TAMANHO], resultado[TAMANHO * 2];

    printf("Digite a primeira string: ");
    fgets(string1, TAMANHO, stdin);

    printf("Digite a segunda string: ");
    fgets(string2, TAMANHO, stdin);

//a funcao strcspn busca o caractere de nova linha e o substituindo pelo caractere nulo,
//pois sem essa função fica contando +1 caractere no final
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    // Concatena as strings
    strcpy(resultado, string1); // Copia a primeira string para o resultado
    strcat(resultado, string2); // Concatena a segunda string ao resultado

    printf("A string concatenada é: %s\n", resultado);

    return 0;
}
```
## Questão 06

```C
#include <stdio.h>
#include <string.h>
#define TAMANHO 100

int main() {
    char string[TAMANHO], inversa[TAMANHO];
    int i, j, tam = 0; //tam é tamanho

    printf("Digite uma string: ");
    fgets(string, TAMANHO, stdin);

    // Encontra o tamanho da string (excluindo o '\n')
    while (string[tam] != '\0' && string[tam] != '\n') {
        tam++;
    }

    // Inverte a string
    for (i = 0, j = tam - 1; j >= 0; i++, j--) {
        inversa[i] = string[j];
    }
    inversa[i] = '\0'; // Adiciona o caractere nulo no final da string invertida

    printf("A string invertida é: %s\n", inversa);

    return 0;
}


```

## Questão 07
```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAMANHO 3

int main() {
    int vetor[TAMANHO];
    int i;
    double soma = 0, produto = 1, media_aritmetica, media_geometrica;

    srand(time(NULL));

    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 20; 
        soma += vetor[i];
        produto *= vetor[i];
    }

    // Calcula as médias
    media_aritmetica = soma / TAMANHO;
    media_geometrica = pow(produto, 1.0 / TAMANHO);

    // Imprime os resultados
    printf("Vetor: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nMédia aritmética: %.2lf\n", media_aritmetica);
    printf("Média geométrica: %.2lf\n", media_geometrica);

    return 0;
}


```
## Questão 08
```C
//com Por SELECAO
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 100

void ordenacaoPorSelecao(int vetor[]) {
    int i, j, min, aux;
    for (i = 0; i < TAMANHO - 1; i++) {
        min = i;
        for (j = i + 1; j < TAMANHO; j++) {
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        if (min != i) {
            aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
        }
    }
}

int main() {
    int vetor[TAMANHO], i, inicio, fim;

    printf("Digite o início do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);

    srand(time(NULL));
    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = inicio + rand() % (fim - inicio + 1);
    }

    printf("Vetor antes da ordenação:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    ordenacaoPorSelecao(vetor);

    printf("Vetor ordenado por seleção:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

//com BUBBLE SORT
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 100

void ordenacaoPorBolha(int vetor[]) {
    int i, j, aux;
    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    int vetor[TAMANHO], i, inicio, fim;

    printf("Digite o início do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);

    srand(time(NULL));
    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = inicio + rand() % (fim - inicio + 1);
    }

    printf("Vetor antes da ordenação:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    ordenacaoPorSelecao(vetor);

    printf("Vetor ordenado por seleção:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

```
## Questão 09
```C
#include <stdio.h>
#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n"); 1 
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDiagonal principal:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", matriz[i][i]);
    }

    return 0;
}

```

## Questão 10
```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j, x, contador = 0;

   
    srand(time(NULL));

 
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 100; 
        }
    }

    
    printf("Matriz gerada:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

   
    printf("Digite o valor a ser procurado: ");
    scanf("%d", &x);

    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == x) {
                contador++;
            }
        }
    }

    printf("O valor %d aparece %d vezes na matriz.\n", x, contador);

    return 0; 
}

 
```

