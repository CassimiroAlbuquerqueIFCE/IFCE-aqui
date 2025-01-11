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

## Questão 11
```C


 
```

## Questão 12
```C


 
```
