# Desafio 01
## Resolução do desafio.

```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    unsigned char armarios = 0; 
    int opcao, armario;

    srand(time(NULL));

    do {
        printf("\nMenu:\n");
        printf("1. Ocupar armario\n");
        printf("2. Liberar armario\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                do {
                    armario = rand() % 8; 
                } while (armarios & (1 << armario)); 
                armarios |= (1 << armario); 
                printf("Armario %d ocupado.\n", armario + 1);
                break;
            case 2:
                printf("Digite o numero do armario a ser liberado (de 1 a 8): ");
                scanf("%d", &armario);
                if (armario >= 1 && armario <= 8) {
                    armarios &= ~(1 << (armario - 1));
                    printf("Armario %d liberado.\n", armario);
                } else {
                    printf("Numero de armario invalido.\n");
                }
                break;
            case 3:
                printf("Finalizado.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

        
        printf("Estado dos armarios: ");
        for (int i = 7; i >= 0; i--) {
            printf("%d", (armarios >> i) & 1);
        }
        printf("\n");

    } while (opcao != 3);

    return 0;

```
