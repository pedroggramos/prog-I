#include <stdio.h>

int main(void) {

// Exemplo vetores

  float alturas[5];
  int qtd = 0;

  for(int i = 0; i < 5; i++){
    printf("Digite uma altura: ");
    scanf("%f", &alturas[i]);
  }

  for(int i = 4; i >= 0; i--){
    if(alturas[i] >=3){
      qtd++;
      printf("\n%.2f", alturas[i]);
    }
  }
  printf("\nQtd: %d", qtd);

  return 0;
}