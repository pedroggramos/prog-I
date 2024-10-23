#include <stdio.h>

int main(void) {

  // int matriz[3][3];

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     printf("Digite o número: ");
  //     scanf("%d", &matriz[i][j]);
  //   }
  // }

  // printf("\n\n");

  // for(int i = 0; i < 3; i++){
  //   for(int j = 0; j < 3; j++){
  //     printf("[%d] ", matriz[i] [j]);
  //   }
  //   printf("\n");
  // }

  // Exerício aula

  // float matriz[2][5];
  // float media = 0;
  // float soma = 0;

  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 5; j++) {
  //     printf("Digite o número: ");
  //     scanf("%f", &matriz[i][j]);
  //     soma = soma + matriz[i][j];

  //   }
  // }
  // printf("\n");

  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 5; j++) {
  //     if(matriz[i][j] > media){
  //       printf("\n%.2f", matriz[i][j]);
  //     }
  //     printf("\n");
  //   }
  // }

  // media = soma / 10;
  // printf("\nmedia: %.2f", media);

  // Exercício 1 Slide

  // int matrizA[3][3];
  // int matrizB[3][3];
  // int matrizC[3][3];
  // int soma = 0;

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     printf("Dígite um número: ");
  //     scanf("%d", &matrizA[i][j]);
  //   }
  // }

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     printf("[%d]", matrizA[i][j]);
  //   }
  //   printf("\n");
  // }

  // printf("\n");

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     printf("Dígite um número: ");
  //     scanf("%d ", &matrizB[i][j]);
  //   }
  // }

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     printf("[%d] ", matrizB[i][j]);
  //   }
  //   printf("\n");
  // }

  // printf("\n");
  // printf("\nMatriz C: \n");

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
  //     printf("[%d] ", matrizC[i][j]);
  //   }
  //   printf("\n");
  // }

  int matriz[3][5];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      
      if(j % 2 == 0){
        printf("_");
        if(j != 2){
          printf("|");
        }
      }
      else {
        printf("|");
      }
    }
  }

  return 0;
}