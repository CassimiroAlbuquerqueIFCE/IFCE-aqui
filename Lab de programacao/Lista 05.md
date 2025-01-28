## Lista 03 do Laboratório de Programação

## Questão 01

```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int num1 = 10, num2 = 20, soma;

    soma = num1 + num2;

    int *p1 = &num1;
    int *p2 = &num2;
    int *psoma = &soma;

    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    printf("soma: %d\n", soma);
    printf("end do p1: %p\n", p1);
    printf("end do p2: %p\n", p1);
    printf("end da soma: %p\n", soma);

    return 0;
}
```

## Questão 02

```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void changeNumPointer( int *p1, int *p2);

int main(){
    
    
    //Escreva um programa que troque o valor de dois n ́umeros utilizando ponteiros.

    int num1 = 10, num2 = 20;
    int *p1 = &num1, *p2 = &num2;

    printf("num 1: %d\nnum2: %d\n", num1, num2 );
    changeNumPointer( &num1, &num2);
    puts("TROCA FEITA");
    printf("num 1: %d\nnum2: %d\n", num1, num2 );

    free(p1);
    free(p2);

    return 0;
}


void changeNumPointer( int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}



```

## Questão 03

```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    
    int num, menor, *pmenor = &menor;
    char continuar;

    printf("Digite um número: \n");
    scanf("%d", &num);

    *pmenor = num;

    do{
        printf("Digite 'x' para sair ou qualquer outra coisa para continuar:\n");
        scanf(" %c", &continuar);

        if (continuar != 'x'){
            printf("Digite o novo numero:\n");
            scanf("%d", &num);

            if (num < *pmenor){
                *pmenor = num;
            }
        }} while (continuar != 'x');

    printf("\nO menor numero foi %d", *pmenor);

    return 0;
}


```

## Questão 04

```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main(){
    
    int vetor[TAM]; 
    int *p = vetor;

    puts("Digite 5 numeros:");

    for(int i = 0; i < TAM; i++){
        scanf("%d", p);
        printf("Valor: %d\nEndereco: %p\n",*p, p);
        p++;
    }

    puts("programa finalizado");
    free(p);
    return 0;
}




```

## Questão 05

```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int tamanhoStr(const char *text);

int main(){
    
    char text[TAM];
    
    printf("Digite uma string: ");
    fgets(text, sizeof(text), stdin);

    int tam = tamanhoStr(text);
    printf("O tamanho da sua string e: %d\n", tam);
    puts("programa finalizado");
    
    
    return 0;
}

int tamanhoStr(const char *text){
    int tamanho = 0;
    while(*text != '\0' && *text != '\n'){
        tamanho++;
        text++;
    }
    return tamanho;
}





```
## Questão 06

```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TAM 100

void copyStr( char *text_final, const char *text);

int main(){
    
    char text[TAM], text_final[TAM];
    
    puts("Digite um texto: ");
    fgets(text, sizeof(text),stdin);

    text[strcspn(text, "\n")] = '\0';
    copyStr(text_final, text);

    printf("A string copiada e: %s", text_final);
    
    
    return 0;
}

void copyStr( char *text_final, const char *text){
    while(*text != '\0'){
        *text_final = *text;
        text++;
        text_final++;
    }
    *text_final = '\0';
}




```

## Questão 07
```C
#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

int main() {
    char string1[TAMANHO_MAX], string2[TAMANHO_MAX];
    char resultado[TAMANHO_MAX * 2]; 

  
    char *ptr1 = string1;
    char *ptr2 = string2;
    char *ptrResultado = resultado;


    printf("Digite a primeira string: ");
    fgets(string1, TAMANHO_MAX, stdin);
    string1[strcspn(string1, "\n")] = '\0'; //para tirar o '\n' do final

    printf("Digite a segunda string: ");
    fgets(string2, TAMANHO_MAX, stdin);
    string2[strcspn(string2, "\n")] = '\0'; //para tirar o '\n' do final


    while (*ptr1 != '\0') {
        *ptrResultado = *ptr1;
        ptr1++;
        ptrResultado++;
    }


    while (*ptr2 != '\0') {
        *ptrResultado = *ptr2;
        ptr2++;
        ptrResultado++;
    }

//colocando o nulo ao final da string resultante
    *ptrResultado = '\0';

 
    printf("Resultado da concatenação: %s\n", resultado);

    return 0;
}


```
## Questão 08
```C
#include <stdio.h>
#include <ctype.h> // Para usar tolower()

#define TAMANHO_MAX 100

int main() {
    char string[TAMANHO_MAX];
    char caractere;
    char *ptr = string;
    int encontrado = 0;

    printf("Digite uma string: ");
    fgets(string, TAMANHO_MAX, stdin);
    string[strcspn(string, "\n")] = '\0';

    printf("Digite o caractere a ser buscado: ");
    scanf("%c", &caractere);


    caractere = tolower(caractere);

    while (*ptr != '\0') {
        if (tolower(*ptr) == caractere) { // Converte cada caractere da string para minúsculo
            encontrado = 1;
            break;
        }
        ptr++;
    }

    if (encontrado) {
        printf("O caractere '%c' foi encontrado na string (ignorando maiúsculas/minúsculas).\n", caractere);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", caractere);
    }

    return 0;
}

```
## Questão 09
```C
#include <stdio.h>

#define TAMANHO 10

void trocar(int *a, int *b);
void bubbleSort(int *vetor, int tamanho);
void imprimirVetor(int *vetor, int tamanho);

int main() {
    int vetor[TAMANHO] = {64, 34, 25, 12, 22, 11, 90, 88, 45, 1};

    printf("Vetor original:\n");
    imprimirVetor(vetor, TAMANHO);

    bubbleSort(vetor, TAMANHO);

    printf("Vetor ordenado:\n");
    imprimirVetor(vetor, TAMANHO);

    return 0;
}


void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSort(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (*(vetor + j) > *(vetor + j + 1)) {
                trocar(vetor + j, vetor + j + 1);
            }
        }
    }
}

void imprimirVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor + i));
    }
    printf("\n");
}

```

## Questão 10
```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15 

int main() {
    int X[N], F[N];
    int i;

    
    srand(time(NULL));

  
    for (i = 0; i < N; i++) {
        X[i] = rand() % N;
    }

   
    for (i = 0; i < N; i++) {
        F[i] = 0;
    }

   
    for (i = 0; i < N; i++) {
        F[X[i]]++;
    }

   
    printf("Vetor X: ");
    for (i = 0; i < N; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    printf("Vetor F (contagem de ocorrências): ");
    for (i = 0; i < N; i++) {
        printf("%d ", F[i]);
    }
    printf("\n");

    return 0;
}

 
```

## Questão 11
```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 7 

int main() {
    int X[N], Y[N], M[N][N];
    int i, j;

 
    srand(time(NULL));

    for (i = 0; i < N; i++) {
        X[i] = rand() % N;
        Y[i] = rand() % N;
    }


    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            M[i][j] = 0;
        }
    }

 
    for (i = 0; i < N; i++) {
        M[X[i]][Y[i]]++;
    }

    // Imprime a matriz M
    printf("Matriz M:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}

 
```

## Questão 12
```C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 7 // Tamanho dos vetores e matriz

int main() {
    int X[N], Y[N], M[N][N];
    int i, r;

  
    srand(time(NULL));

   
    for (i = 0; i < N; i++) {
        X[i] = rand() % N;
    }

   
    for (i = 0; i < N; i++) {
        r = rand() % 10 + 1; // Gera um número aleatório entre 1 e 10
        if (r <= 3) {
            Y[i] = X[i];
        } else if (r <= 5) {
            Y[i] = X[i] - 1;
        } else if (r <= 7) {
            Y[i] = X[i] + 1;
        } else if (r <= 9) {
            Y[i] = X[i] - 2;
        } else {
            Y[i] = X[i] + 2;
        }
       
        Y[i] = (Y[i] + N) % N;
    }

   
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            M[i][j] = 0;
        }
    }

   
    for (i = 0; i < N; i++) {
        M[X[i]][Y[i]]++;
    }

  
    printf("Matriz M:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 
```
