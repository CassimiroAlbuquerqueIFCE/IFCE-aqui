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


```

## Questão 05

```C


```
## Questão 06

```C



```

## Questão 07
```C


```
## Questão 08
```C



```
## Questão 09
```C


```

## Questão 10
```C


 
```

