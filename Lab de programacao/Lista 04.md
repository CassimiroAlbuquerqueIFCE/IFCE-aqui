## Lista 04 do Laboratório de Programação

## Questão ÚNICA

```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX 255

unsigned char calculando_lbp(unsigned char img[MAX][MAX],int linhas, int colunas );
int calcula_histograma_lbp(unsigned char img_lbp[MAX][MAX], int linhas, int colunas, int histograma[]);

int main(){

    unsigned char img_entrada[MAX][MAX]; unsigned char img_copia[MAX][MAX]; unsigned char img_lbp[MAX][MAX];
    
//1 - GERANDO A IMAGEM DE entrada

    //criando a semente de numeros aleatorios
    srand(time(NULL));
    
    //gerando a imagem de entrada
    for (int i = 0; i < MAX +1; i++)   {
        for (int j = 0; j < MAX +1; j++)   {
            img_entrada[i][j] = rand() % 256;
            
        }
    }
    
    //salvando a matriz em outra
    for (int i = 0; i < MAX +1; i++)   {
        for (int j = 0; j < MAX +1; j++)   {
            img_copia[i][j] = img_entrada[i][j];
            
        }
    }

    //printando a matriz
    for (int i = 0; i < MAX +1; i++)   {
        for (int j = 0; j < MAX +1; j++)   {
            printf("%d\t", img_copia[i][j]);
            
        }
        printf("\n");
    }
    printf("\n");
//2 - CALCULANDO OS LBP DA IMAGEM

    //calculando o LBP para cada pixel
    for (int linhas = 1; linhas < MAX-1; linhas++){
        for (int colunas = 1; colunas < MAX-1; colunas++){
           img_lbp[linhas][colunas] = calculando_lbp(img_copia, linhas, colunas);
            
        }
    }




//3 - MOSTRANDO A IMAGEM LBP

    //imprimindo a imagem LBP
    for (int lin = 1; lin < MAX; lin++){
        for (int col = 1; col < MAX; col++){
           printf("%d ", img_lbp[lin][col]);
            
        }
        printf("\n");
    }

  int total_pixels = 0;
//4 - FAZENDO O HISTOGRAMA

    //fazendo o histograma
     int histograma[MAX+1]; // Vetor para armazenar o histograma

    // Calcula o histograma
    int calcula_histograma_lbp(unsigned char img_lbp[MAX][MAX], int linhas, int colunas, int histograma[]);
    
    // Imprime o histograma (opcional)
    for (int i = 0; i < MAX+1; i++) {
        printf("Valor LBP %d: %d ocorrências\n", i, histograma[i]);
    }
    
    //printf("Total de pixels: %d\n", total_pixels);
    
   
    printf("Total de pixels: %d\n", histograma);


    return 0;
}

unsigned char calculando_lbp(unsigned char img[MAX][MAX],int linhas, int colunas){
    
    int centro = img[linhas][colunas];
    int lbp = 0;
    
// deslocamentos em sentido horario
    int deslLin[8] = {-1,-1,-1,0,1,1,1,0};
    int deslCol[8] = {-1,0,1,1,1,0,-1,-1};
    
    for (int k; k < 8; k++){
        int vizinho_linha = linhas + deslLin[k];
        int vizinho_coluna = colunas + deslCol[k];
        
        if (vizinho_linha >= 0 && vizinho_linha < MAX && vizinho_coluna >= 0 && vizinho_coluna < MAX) {
            lbp |= (img[vizinho_linha][vizinho_coluna] >= img[linhas][colunas]) << k;
        
    }
    }
    
    return lbp;
}


int calcula_histograma_lbp(unsigned char img_lbp[MAX][MAX], int linhas, int colunas, int histograma[]) {
    // Inicializa o histograma com zeros
    for (int i = 0; i < MAX + 1; i++) {
        histograma[i] = 0;
    }
    // Percorre a imagem LBP e incrementa o histograma
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            histograma[img_lbp[i][j]]++;
        }
    for(int i; i<MAX+1;i++);{
        printf("O valor %d do histograma é %d\n",i ,histograma[i]);
    }
 }
    /*// Calcular o total de pixels
    int total_pixels = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            total_pixels++;
        }
    }
*/
    return histograma;

}
 
 

/*
METODO DE CORNO pro deslocamento em sentido horario
unsigned char vizinhos[8] = {
                image[lin - 1][col - 1], image[lin - 1][col], image[lin - 1][col + 1],
                image[lin][col + 1], image[lin + 1][col + 1], image[lin + 1][col],
                image[lin + 1][col - 1], image[lin][col - 1]
            };
*/

```
