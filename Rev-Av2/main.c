#include <stdio.h>
#include <string.h>

int main(void) {

  // int idades[2][5];

  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 5; j++) {
  //     printf("Idade?: ");
  //     scanf("%d", &idades[i][j]);
      
  //   }
  // }

  //  printf("\n");

  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 5; j++) {
  //     printf("[%d]", idades[i][j]);
  //   }
  //   printf("\n");
  // }


  
  // char pais[30];

  // printf("País?: ");
  // scanf("%s", pais);

  // printf("\n%s", pais);


//   char paises[3][20];
//   char paisMaior[20];
//   int tam = 0;
//   int comp = 0;
//   int alemaos = 0;
//   int maiorTam = 0;

//   for(int i = 0; i < 3; i++){
//     printf("País?:");
//     scanf("%s", paises[i]);

//     tam = strlen(paises[i]);
//     comp = strcmp(paises[i], "Alemanha");
//     if(comp == 0){
//       alemaos++;
//     }

//     if(tam > maiorTam){
//       maiorTam = tam;
//       strcpy(paisMaior, paises[i]);
//     }
//   }




//   printf("País maior: %s", paisMaior);
//   printf("Qtd de alemaos: %d", alemaos);
  

  // for(int i = 0; i < 3; i++){
  //   printf("\n%s", paises[i]);
  // }
  


// ------------------------





  // Ex1-------------------

  // int n = 0;
  // int total = 0;

  //   for(int i = 0; i < 1; i++){
  //     printf("Informe qual numero vc quer a tabuada: ");
  //     scanf("%d", &n);
  //   }

  //   for(int i = 0; i < 11; i++){
  //     printf("\n%d x %d = %d", n, i, total = n * i);
  //   }

  // Ex2------------------

  // int n = 0;
  // int maior = 0;
  // int menor = 0;

  // for (int i = 0; i < 20; i++) {
  //   printf("Informe o número: ");
  //   scanf("%d", &n);

  //   if (n > maior) {
  //     maior = n;
  //   }

  //   if (n < menor || menor == 0) {
  //     menor = n;
  //   }
  // }

  // printf("\nMenor Número: %d", menor);
  // printf("\nMaior Número: %d", maior);

  // Ex3----------------

  // char prof[4][30];
  // float salario[4];
  // float horas[4];
  // float maiorSalario = 0;
  // char profMaior[30];
  // for(int i = 0; i < 4; i++){
  //   printf("Dígite o nome do professor: ");
  //   scanf(" %s", prof[i]);
  //   printf("Dígite as horas: ");
  //   scanf("%f", &horas[i]);

  //   salario[i] = horas[i] * 30;

  //   if(salario[i] > maiorSalario){
  //     maiorSalario = salario[i];
  //     strcpy(profMaior, prof[i]);
  //   }
  // }

  // printf("\nO maior salário é R$%.2f do professor(a) %s", maiorSalario,
  // profMaior);

  // Ex4----------------

  // int matrizA[3][3];
  // int matrizB[3][3];
  // int matrizC[3][3];

  // for(int i = 0; i < 3; i++){
  //   for(int j = 0; j < 3; j++){
  //     printf("Dígite o numero: ");
  //     scanf("%d", &matrizA[i][j]);
  //     printf("\n");
  //   }
  // }

  // for(int i = 0; i < 3; i++){
  //   for(int j = 0; j < 3; j++){
  //     printf("Dígite o numero: ");
  //     scanf("%d", &matrizB[i][j]);
  //     printf("\n");
  //   }
  // }

  // for(int i = 0; i < 3; i++){
  //   for(int j = 0; j < 3; j++){
  //    matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
  //    printf("[%d]", matrizC[i][j]);
  //   }
  //   printf("\n");
  // }

  // Ex5-----------

  float matriz[2][5];
  float media = 0;
  float maior = 0;
  float soma = 0;
  // float total = 0;
  int qtd = 0;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      printf("Dígite o numero: ");
      scanf("%f", &matriz[i][j]);
      qtd++;

      soma = soma + matriz[i][j];
    }
  }

  media = soma / qtd;
   printf("\nNúmeros acima da média:");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      if (matriz[i][j] > media){
        maior = matriz[i][j];
        printf("\n%.2f", maior);
      }
    }
  }

  printf("\nMédia é: %.2f", media);



  

  return 0;
}