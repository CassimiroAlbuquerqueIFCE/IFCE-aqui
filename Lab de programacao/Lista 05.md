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

## Questão 11
```C


 
```

## Questão 12
```C


 
```
