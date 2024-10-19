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