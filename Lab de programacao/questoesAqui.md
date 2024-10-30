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
    float altura, peso; char sexo;
    printf("Vamos calcular seu peso ideal!\n");
    printf("Digite o valor da sua altura, em metros: ");
    scanf("%f", &altura);
    printf("Qual o seu sexo? Digite M para masculinho e F para feminino: ");
    getchar();
    scanf("%c",&sexo);
    printf("Sua altura é: %.2f\nSeu sexo é: %c\n", altura, sexo);
    
    if(sexo=='M' || sexo == 'm'){
        peso = (72.7*altura) - 58;
        printf("Seu peso ideal é: %.2f\n", peso);
    }
    else if(sexo=='F' || sexo=='f'){
        peso = (62.1*altura) - 44.7;
        printf("Seu peso ideal é: %.2f\n", peso);
    }
    else{
        printf("Digite um sexo válido.\n");
    }

    return 0;
}
```
## Questão 6

```C
#include <stdio.h>

int main()
{
    int seg, min, horas, total;
    
    printf("Digite o total de horas:\n");
    scanf("%d", &horas);
    
    printf("Digite o total de minutos:\n");
    scanf("%d", &min);
    
    printf("Digite o total de segundos:\n");
    scanf("%d", &seg);
    
    total = (horas*3600) + (min*60) + seg;
    printf("O tempo total em segundos é: %d", total);
    
    return 0;
}
```

## Questão 7
```C
#include <stdio.h>

int main()
{
    int valor;
    
    printf("Digite o valor que deseja elevar ao quadrado:\n");
    scanf("%d", &valor);
    
    printf("O quadrado do valor é: %d",valor*valor);
   
    
    return 0;
}
```
## Questão 8
```C
#include <stdio.h>

int main()
{
    
    int valor;
    
    printf("Saber os números antecessor e sucessor.\n");
    printf("Digite o valor que deseja saber o antecessor e o sucessor:\n");
    scanf("%d", &valor);
    
    printf("O antecessor é %d\nO sucessor é %d",valor-1,valor+1);
   
    
    return 0;
}
```
## Questão 09
```C
#include <stdio.h>

int main()
{
    // Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
    //formula VOLUME = COMPRIMENTO * LARGURA * ALTURA.
    float altura, largura, comprimento;
    
    printf("Saber o volume de uma caixa.\n");
    printf("Digite o valor do comprimento (cm):\n");
    scanf("%f", &comprimento);
    
    printf("Digite o valor da largura (cm):\n");
    scanf("%f", &largura);
    
    printf("Digite o valor da altura (cm):\n");
    scanf("%f", &altura);
    
    printf("O volume da caixa é %.2f",comprimento*largura*altura);
   
    
    return 0;
}
```

## Questão 10
```C
#include <stdio.h>

int main()
{

    float cotacao, reais;
    
    printf("Converter reais para dolar.\n");
    printf("Digite o valor da cotacao do dolar:\n");
    scanf("%f", &cotacao);
    
    printf("Digite o valor, em reais, que deseja converter:\n");
    scanf("%f", &reais);
    
    printf("O valor convertido em dolares é %.2f",reais/cotacao);
   
    
    return 0;
}
```

## Questão 11
```C
#include <stdio.h>

int main()
{
    float num1, num2,divisao,frac,resto;
    
    //printf("titulo.\n");
    printf("Digite o valor do primeiro numero:\n");
    scanf("%f", &num1);
    
    printf("Digite o valor do segundo numero:\n");
    scanf("%f", &num2);
    
    //Para achar o resto de dois numeros float precisa-se fazer uma abordagem diferente já que
    //o operador % é para numeros inteiros, que deve-se pegar a parte fracionada e multiplicar
    //pelo divisor
    
    divisao = num1 / num2;

    frac = divisao - (int)divisao;

    resto = frac * num2;
    
    printf("A soma é %.2f\n",num1 + num2);
    printf("O produto é %.2f\n",num1*num2);
    printf("A diferença é %.2f(prevalecendo a ordem de entrada dos numeros)\n",num1-num2);
    printf("O quociente é %.2f(prevalecendo a ordem de entrada dos numeros)\n",divisao);
    printf("O resto da divisao é %.2f(prevalecendo a ordem de entrada dos numeros)\n",resto);
   
    
    return 0;
}
```

## Questão 12
```C
#include <stdio.h>

int main()
{
    int a, b;
    //usando XOR
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Depois da troca:\na = %d\nb = %d", a,b);


    return 0;
}
```

## Questão 13
```C
#include <stdio.h>

int main() {
    float cel, fah;
   
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &cel);
  
    fah = (9 * cel + 160) / 5;

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", cel, fah);

    return 0;
}
```

## Questão 14
```C
#include <stdio.h>

int main() {
    int dias;
    float diaria = 50.25;
    float bruto, gratific, imposto, liquido;

    printf("Digite o número de dias trabalhados:\n ");
    scanf("%d", &dias);

    bruto = dias * diaria;

    //gratificação
    if (dias <= 10) {
        gratific = 0;
    } else if (dias <= 20) {
        gratific = bruto * 0.2;
    } else {
        gratific = bruto * 0.3;
    }

    imposto = (bruto + gratific) * 0.1;

    liquido = bruto + gratific - imposto;
    
    printf("O total bruto é %.2f\n",bruto + gratific);
    printf("O total do imposto é %.2f", imposto);
    printf("O salário líquido a ser pago: R$ %.2f", liquido);

    return 0;
}
```

## Questão 15
```C
#include <stdio.h>

int main() {
    float valorhoras, horas, bruto, inss, liquido, valorinss;


    printf("Digite o valor da hora-aula: R$ ");
    scanf("%f", &valorhoras);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horas);

    printf("Digite o percentual de desconto do INSS (em decimal, exemplo: 0.075, 0.12, 0.14): ");
    scanf("%f", &inss);

    bruto = valorhoras * horas;

    valorinss = bruto * inss;

    liquido = bruto - valorinss;

    printf("\nSalário Bruto: R$ %.2f\n", bruto);
    printf("Valor do INSS: R$ %.2f\n", valorinss);
    printf("Salário Líquido: R$ %.2f\n", liquido);

    return 0;
}
```

## Questão 16
```C
#include <stdio.h>
#include <math.h>

int main() {
    int num, valor;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Utilizando a função fabs() para obter o valor absoluto em ponto flutuante
    valor = (int)fabs(num);

    printf("O valor absoluto de é %d\n", valor);
    return 0;
}
```

## Questão 17
```C
#include <stdio.h>

int main() {
    const float pi = 3.14159;
    float raio;
    
    printf("Digite o raio do círculo: \n");
    scanf("%f", &raio);

    printf("Diâmetro: %.2f\n", 2 * raio);
    printf("Circunferência: %.2f\n", 2 * pi * raio);
    printf("Área: %.2f\n", pi * raio * raio);

    return 0;
}
```

## Questão 18
```C
#include <stdio.h>
/*

void retangulo() {
    printf(
    "********\n"
    "*      *\n"
    "*      *\n"
    "*      *\n"
    "*      *\n"
    "*      *\n"
    "*      *\n"
    "*      *\n"
    "********\n\n"
    );
    }

void elipse() {
    printf(
    "   *** \n"
    " *     *\n"
    "*       *\n"
    "*       *\n"
    "*       *\n"
    "*       *\n"
    "*       *\n"
    " *     *\n"
    "   *** \n\n"
    );
    }

void seta() {
    printf(
    "  * \n"
    " *** \n"
    "*****\n"
    "  *\n"
    "  *\n"
    "  *\n"
    "  *\n"
    "  *\n"
    "  *\n\n"
    );
    }
    
void losango() {
    printf(
    "    * \n"
    "   * * \n"
    "  *   *\n"
    " *     *\n"
    "*       *\n"
    " *     *\n"
    "  *   *\n"
    "   * * \n"
    "    * \n\n"
    

    );
    }
    
*/

void todos(){
    printf(
    "********       ***            *         * \n"
    "*      *     *     *         ***       * * \n"
    "*      *    *       *       *****     *   *\n"
    "*      *    *       *         *      *     *\n"
    "*      *    *       *         *     *       *\n"
    "*      *    *       *         *      *     *\n"
    "*      *    *       *         *       *   *\n"
    "*      *     *     *          *        * * \n"
    "********       ***            *         * \n"
    );
    
    
    
    
}

int main() {
    //retangulo();
    //elipse();
    //seta();
    //losango();
    todos();
    
    return 0;
}
```

## Questão 19
```C
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // usando operador ternario
    printf("%d %s\n", numero, (numero % 2 == 0) ? "é par" : "é ímpar");

    return 0;
}
```

## Questão 20
```C
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // usando operador ternario
    printf("%d %s múltiplo de %d\n", num1, (num1 % num2 == 0) ? "é" : "não é", num2);

    return 0;
}
```

## Questão 21
```C
#include <stdio.h>

int main() {
    printf("A: %d\n", 'A');
    printf("B: %d\n", 'B');
    printf("C: %d\n", 'C');
    printf("a: %d\n", 'a');
    printf("b: %d\n", 'b');
    printf("c: %d\n", 'c');
    printf("0: %d\n", '0');
    printf("1: %d\n", '1');
    printf("2: %d\n", '2');
    printf("$: %d\n", '$');
    printf("*: %d\n", '*');
    printf("+: %d\n", '+');
    printf("/: %d\n", '/');
    printf("Espaço em branco: %d\n", ' ');

    return 0;
}
```

## Questão 22
```C

#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, numeroInvertido;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);

    // Separando os dígitos
    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = numero / 100;

    // Reconstruindo o número invertido
    numeroInvertido = unidade * 100 + dezena * 10 + centena;

    printf("O número invertido é: %d\n", numeroInvertido);

    return 0;
}
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
