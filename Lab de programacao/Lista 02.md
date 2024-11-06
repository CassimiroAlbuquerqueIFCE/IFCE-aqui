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
    float divi,num1, num2;
 
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

## Questão 13
```C

```

## Questão 14
```C

```

## Questão 15
```C

```

## Questão 16
```C

```

## Questão 17
```C

```

## Questão 18
```C

```

## Questão 19
```C

```

## Questão 20
```C

```

## Questão 21
```C

```

## Questão 22
```C

```

## Questão 23
```C

```

## Questão 24
```C

```

## Questão 25
```C

```

## Questão 26
```C

```

## Questão 27
```C

```

## Questão 28
```C

```

