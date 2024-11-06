## Lista 02 do Laboratório de Programação

## Questão 01

```C
#include <stdio.h>

int main()
{
    int dia;
    printf("Selecionar dia da semana\n");
    do {
        printf("Selecione o dia da semana, de 1 (domingo) até 7 (sábado) e 0 para sair:\n");
        scanf("%d",&dia);
        
        switch (dia){
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda-feira\n");
                break;
            case 3:
                printf("Terça-feira\n");
                break;
            case 4:
                printf("Quarta-feira\n");
                break;
            case 5:
                printf("Quinta-feira\n");
                break;
            case 6:
                printf("Sexta-feira\n");
                break;
            case 7:
                printf("Sábado\n");
                break; 
            case 0:
            printf("Programa finalizado.");
                break;
            default:
                printf("Número de dia não válido.\n");
                break;

        }
    } while (dia !=0);

    return 0;
}
```

## Questão 02

```C
#include <stdio.h>

int main() {
    int dia;

    printf("Selecione o dia da semana, de 1 (domingo) até 7 (sábado) e 0 para sair:\n");
    scanf("%d", &dia);

    while (dia != 0) {
        switch (dia) {
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda-feira\n");
                break;
            case 3:
                printf("Terça-feira\n");
                break;
            case 4:
                printf("Quarta-feira\n");
                break;
            case 5:
                printf("Quinta-feira\n");
                break;
            case 6:
                printf("Sexta-feira\n");
                break;
            case 7:
                printf("Sábado\n");
                break;
            default:
                printf("Número de dia não válido.\n");
                break;
        }

        printf("Digite um numero de 1 a 7 para o dia da semana (0 para sair): ");
        scanf("%d", &dia);
    }

    printf("Programa finalizado.\n");
    return 0;
}
}
```

## Questão 03

```C
#include <stdio.h>

int main() {

	int F,fat=1;
	puts("Digite um numero inteiro positivo F para saber seu fatorial:");
	scanf("%d",&F);
	
    if (F < 0) {
        printf("Número inválido. Precisa ser número positivo.\n");
    } else {
        for (int i = 1; i <= F; ++i) {
            fat *= i;
        }

        printf("O fatorial de %d é %d\n", F, fat);
    }

	return 0;
}
}
```

## Questão 04

```C
#include <stdio.h>

int main() {
    int altura_jose = 150;
    int altura_pedro = 110;
    int anos = 0;

    while (altura_pedro <= altura_jose) {
        altura_jose += 2;
        altura_pedro += 3;
        anos++;
    }
    printf("Altura de Pedro é %d cm e a altura de Jose é %d cm.\n",altura_pedro,altura_jose);
    printf("Pedro será mais alto que José em %d anos.\n", anos);

    return 0;
}
} 
```

## Questão 05

```C
#include <stdio.h>

int main() {
    int num, maior, menor, check = 1;
    
    puts("Comparação entre n numeros. Coloque quantos numeros quiser até digitar 0!");
    puts("Digite um número (0 para finalizar): ");
    scanf("%d", &num);

    if (num != 0) {
        maior = num;
        menor = num;
        check = 0;
    }

    while (num != 0) {
        printf("Digite outro número (0 para finalizar): ");
        scanf("%d", &num);

        if (num != 0) {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    if (check == 0) {
        printf("O maior número é: %d\n", maior);
        printf("O menor número é: %d\n", menor);
    } else {
        printf("Nenhum número para comparar.\n");
    }

    return 0;
}
```
## Questão 06

```C
\\ FALTA
\\ FAZER
\\ ESSA
```

## Questão 07
```C
#include <stdio.h>

int main() {
    float num1, num2;
 
    puts("Divisão de dois numeros. Numero 1 pelo numero 2");
    puts("Insira o valor do numerador:");
    scanf("%f",&num1);
    do {
        puts("Insira o valor do divisor: ");
        scanf("%f",&num2);
        if (num2==0){
            puts("Valor do divisor nao pode ser 0. Insira outro valor.");
            
        };
        
    } while (num2 == 0);
    
    printf("O resultado da divisão de %.2f po %.2f é %.2f.", num1,num2, num1/num2);
 
    return 0;
}
```
## Questão 08
```C
#include <stdio.h>
#include <math.h>

int main() {
    float mercadoria, prestacao, entrada;

    puts("Digite o valor da mercadoria: R$ ");
    scanf("%f", &mercadoria);

    prestacao = floor(mercadoria / 3);

    entrada = mercadoria - 2 * prestacao;

    printf("Valor da entrada: R$ %.2f\n", entrada);
    printf("Valor de cada prestação: R$ %.2f\n", prestacao);

    return 0;
}
```
## Questão 09
```C
#include <stdio.h>

int main() {
    int termo1 = 1, termo2 = 1, proximoTermo, i;

    puts("Os 20 primeiros termos da sequência de Fibonacci são:");

    for (i = 1; i <= 20; ++i) {
        printf("\n%d: %d ", i, termo1);

        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    return 0;
}
```

## Questão 10
```C

#include <stdio.h>

int main() {
    int num;
    
    puts("Quadrados dos multiplos de 4 entre 15 e 90.");
    
    for (num=16;num<=90;num+=4){
    printf("%d ",num*num);
    }
    
 
    return 0;
} 
```

## Questão 11
```C
\\ QUESTAO
\\ COM ENUNCIADO
\\ ERRADO ???
```

## Questão 12
```C
#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &num);

    printf("Tabuada do %d:\n", num);

    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
```

## Questão 13
```C
\\ FALTA
\\ FAZER
\\ ESSA
```

## Questão 14
```C
\\ FALTA
\\ FAZER
\\ ESSA
```

## Questão 15
```C
#include <stdio.h>

int main() {
    int base = 3, expo, resultado;

    printf("Potências de 3 de 0 a 7:\n");

    for (expo = 0; expo <= 7; expoente++) {
        resultado = 1;
        for (int i = 1; i <= expo; i++) {
            resultado *= base;
        }
        printf("3 elevado a %d = %d\n", expo, resultado);
    }

    return 0;
}
```

## Questão 16
```C
#include <stdio.h>

int main() {
    int somadiv3 = 0, somadiv5 = 0;

    for (int i = 0; i <= 200; i++) {
        if (i <= 100) {
            if (i % 3 == 0) {
                somadiv3 += i;
            }
        } else {
            if (i % 5 == 0) {
                somadiv5 += i;
            }
        }
    }

    printf("Soma dos números divisíveis por 3 no intervalo [0, 100]: %d\n", somadiv3);
    printf("Soma dos números divisíveis por 5 no intervalo ]100, 200]: %d\n", somadiv5);

    return 0;
}
```

## Questão 17
```C
#include <stdio.h>

int main() {
    float cel, fah;

    printf("Conversão de Celsius para Fahrenheit:\n\n");

    for (cel = 10; cel <= 100; cel += 10) {
        fah = (cel * 9/5) + 32;
        printf("%.2f °C = %.2f °F\n", cel, fah);
    }

    return 0;
}
```

## Questão 18
```C

```

## Questão 19
```C
#include <stdio.h>

int main() {
    float media, inicio, fim, soma = 0, quantidade = 0;

    printf("Digite o início do intervalo: ");
    scanf("%f", &inicio);

    printf("Digite o fim do intervalo: ");
    scanf("%f", &fim);

    if (fim <= inicio) {
        printf("O fim do intervalo deve ser maior que o início.\n");
        return 1; 
    }

    for (int i = inicio; i <= fim; i++) {
        soma += i;
        quantidade++;
    }

    media = soma / quantidade;

    printf("A média aritmética dos números entre %.2f e %.2f é: %.2f\n", inicio, fim, media);

    return 0;
}
```

## Questão 20
```C
#include <stdio.h>

int main() {
    int num, fat;

    printf("Fatoriais dos números ímpares de 1 a 10:\n");

    for (num = 1; num <= 10; num += 2) {
        fat = 1;
        for (int i = 2; i <= num; i++) {
            fat *= i;
        }
        printf("O fatorial de %d é: %d\n", num, fat);
    }

    return 0;
}
```

## Questão 21
```C

```

## Questão 22
```C
#include <stdio.h>

int main() {
    int num, digit, contadorSete = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (digit == 7) {
            contadorSete++;
        }
        num /= 10;
    }

    printf("O número possui %d dígitos 7.\n", contadorSete);

    return 0;
}
```

## Questão 23
```C

```

## Questão 24
```C
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Triplas pitagóricas até 500:\n");

    for (a = 1; a <= 500; a++) {
        for (b = 1; b <= 500; b++) {
            c = sqrt(a*a + b*b);
            if (c <= 500 && c == (int)c) {
                printf("(%d, %d, %d)\n", a, b, c);
            }
        }
    }

    return 0;
}
```

## Questão 25
```C
#include <stdio.h>

int main() {
    double pi = 0.0;
    int i, n;

    printf("Digite o número máximo de termos: ");
    scanf("%d", &n);

    printf("Termos\tAproximação de Pi\n");
    for (i = 1; i <= n; i++) {
        pi += 4.0 * ((i % 2 == 1) ? 1 : -1) / (2 * i - 1);
        printf("%d\t%.10lf\n", i, pi);
    }

    return 0;
}
```

## Questão 26
```C
#include <stdio.h>

int main() {
    printf("Decimal\tOctal\tHexadecimal\n");
    for (int i = 1; i <= 256; ++i) {
        printf("%d\t%o\t%#x\n", i, i, i);
    } // faltando o binario
    return 0;
}
```

## Questão 27
```C
#include <stdio.h>
#include <limits.h>

int main() {
    int numero, maior = INT_MIN, menor = INT_MAX;

    printf("Digite números inteiros (digite um número negativo e par para sair, como -2):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero < 0 && numero % 2 == 0) {
            break;
        }

        
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    if (maior == INT_MIN && menor == INT_MAX) {
        printf("Nenhum número válido foi digitado.\n");
    } else {
        printf("O produto do maior (%d) pelo menor (%d) é: %d\n", maior, menor, maior * menor);
    }

    return 0;
}
```

## Questão 28
```C

```

