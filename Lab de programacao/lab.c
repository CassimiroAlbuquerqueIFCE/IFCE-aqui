#include <stdio.h>


int main(){
    float altura; char sexo;
    printf("Digite o valor da sua altura, em metros: ");
    scanf("%f", &altura);
    printf("Qual o seu sexo? Digite M para masculinho e F para feminino: ");
    getchar();
    scanf("%c",&sexo);
    printf("Sua altura é: %.2f\nSeu sexo é: %c\n", altura, sexo);
    //TERMINAR DE FAZER

    return 0;
}