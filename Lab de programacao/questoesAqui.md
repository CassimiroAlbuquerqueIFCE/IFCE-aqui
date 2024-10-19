# Lista 01 do Laboratório de Programação

## Questão 01

```C
#include <stdio.h>

int main() {
    
    int decimal;

    printf("Entre com o valor decimal: ");
    scanf("%d", &decimal);

    printf("Hexadecimal: %#X\n", decimal);
    printf("Octal: %o\n", decimal);

    return 0;
}
```

## Questão 02

```C
int main()
{
    float numero;
    printf("Digite um numero com ate 3 casa decimais: \n");
    scanf("%f", &numero);
    printf("o numero com uma casa decimal é %.1f", numero);

    return 0;
}
```

## Questão 03

```C
#include <stdio.h>
int main(){
    int inteiro, triplo , quad, meio;
    printf("Digite um inteiro: ");
    scanf("%d", &inteiro);
   
    printf("int: %d\n", inteiro);
    printf("triplo: %d\n", inteiro*3);
    printf("quadrado: %d\n", inteiro*inteiro);
    printf("metade: %d\n", inteiro/2);

    return 0;
}
```

## Questão 04

```C
int main(){
    float conta;
    printf("Digite o valor da conta: ");
    scanf("%f", &conta);
    printf("O valor total a ser pago é: %.2f\n", conta + (conta*0.1));
    return 0;
} 
```

## Questão 05

```C
#include <stdio.h>


int main(){
    float altura; char sexo;
    printf("Digite o valor da sua altura, em metros: ");
    scanf("%f", &altura);
    printf("Qual o seu sexo? Digite M para masculinho e F para feminino: ");
    getchar();
    scanf("%c",&sexo);
    printf("Sua altura é: %.2f\nSeu sexo é: %c\n", altura, sexo);
   
   TERMINAR DE FAZER

    return 0;
} 
```
