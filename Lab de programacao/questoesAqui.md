# Lista 01 do Laboratório de Programação

## Questão 01

#include <stdio.h>

int main() {
    
    int decimal;

    printf("Entre com o valor decimal: ");
    scanf("%d", &decimal);

    printf("Hexadecimal: %X\n", decimal);
    printf("Octal: %o\n", decimal);

    return 0;
}

