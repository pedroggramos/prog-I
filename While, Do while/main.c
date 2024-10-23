#include <stdio.h>

int main(void) {

  // Escreva números de 1 a 100
  // Escreva números de 1 a 100 pulando de 3 em 3
  // Escreva números pares de 1 a 100
  // Escreva números múltiplos de 3 de 1 a 100
  
  int i = 1;

  do{
    printf("%d\n", i);
    i++;
    
    // printf("%d\n", i);
    // i = i + 3;

    // if(i % 2 == 0){
    //   printf("%d\n", i);
    // }
    // i++;

    // if(i % 3 == 0){
    //   printf("%d\n", i);
    // }
    // i++;
    
  }while(i<=100);


  //imc

  // float peso = 0;
  // float imc = 0;
  // float altura = 0;

  // do{
  //   printf("\nPeso: ");
  //   scanf("%f", &peso);
  //   if(peso != 0){
  //     printf("Altura: ");
  //     scanf("%f", &altura);
  
  //     imc = peso / (altura * altura);
  
  //     printf("\nIMC: %.2f", imc);
  //   }
  // }while(peso != 0);
  // printf("\nPrograma encerrado");


  //maior e menor

  // int maior = 0;
  // int menor = 0;
  // int num = 0;

  // do{
  //   printf("Digite um número: ");
  //   scanf("%d", &num);
  //   if(num != 0){
  //     if(num > maior){
  //       maior = num;
  //     }
      
  //     if(num < menor || menor == 0){
  //       menor = num;
  //     }
  //   }
  // }while(num != 0);

  // printf("\nMaior: %d", maior);
  // printf("\nMenor: %d", menor);


  //3

  // char continuar;

  // do{

  //   printf("Deseja continuar (s ou n)?");
  //   scanf(" %c", &continuar);
  // }while(continuar == 's');
  
  return 0;
}