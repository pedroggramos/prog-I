#include <stdio.h>
#include <string.h>

int main(void) {

  // Exercício 1

  // int n = 0;
  // int total = 0;

  // printf("Informe o numero: ");
  // scanf("%d", &n);

  // for (int i = 0; i < 11; i++){
  //   total = n * i;
  //   printf("\n%d x %d = %d", n, i, total);
  // }

  // Exercício 2

  // int n = 0;
  // int maior = 0;
  // int menor = 0;

  // for (int i = 0; i < 21; i++) {
  //   printf("Digite o número: ");
  //   scanf("%d", &n);

  //   if (n > maior) {
  //     maior = n;
  //   }

  //   if (n < menor || menor == 0) {
  //     menor = n;
  //   }
  // }

  // printf("\nO maior número é: %d", maior);
  // printf("\nO menor número é: %d", menor);

  // Exercício 3

  // float altura = 0;
  // float alturaHomens = 0;
  // char sexo;
  // float maiorAltura = 0;
  // float menorAltura = 0;
  // float media = 0;
  // float soma = 0;
  // float somaH = 0;
  // int qtdMulheres = 0;
  // int qtdHomens = 0;

  // for (int i = 0; i < 5; i++) {
  //   printf("Dígite sua Altura: ");
  //   scanf("%f", &altura);
  //   printf("Dígite seu sexo: ");
  //   scanf(" %c", &sexo);

  //   soma = altura + soma;

  //   if (altura > maiorAltura) {
  //     maiorAltura = altura;
  //   }

  //   if (altura < menorAltura || menorAltura == 0) {
  //     menorAltura = altura;
  //   }

  //   if (sexo == 'F' || sexo == 'f') {
  //     qtdMulheres++;
  //   }

  //   if (sexo == 'M' || sexo == 'm') {
  //     alturaHomens = altura;
  //     somaH = alturaHomens + somaH;
  //     qtdHomens++;
  //   }
  // }

  // media = somaH / qtdHomens;

  // printf("\nA maior altura é: %.2f", maiorAltura);
  // printf("\nA menor altura é: %.2f", menorAltura);
  // printf("\nA quantidade de mulheres é: %d", qtdMulheres);
  // printf("\nA media de altura dos homens é: %f", media);

  // Exercício 4

  // char sexo;
  // char resposta;
  // int pessoasSim = 0;
  // int mulheresSim = 0;
  // int homensSim = 0;
  // int pessoasNao = 0;
  // int mulheresNao = 0;
  // int homensNao = 0;
  // float porcentagemMulheresSim = 0;
  // float porcentagemHomensNao = 0;

  // for (int i = 0; i < 10; i++) {
  //   printf("Você gostou do produto?: ");
  //   scanf(" %c", &resposta);
  //   printf("Dígite seu sexo: ");
  //   scanf(" %c", &sexo);
  //   switch (sexo) {
  //   case 'F':
  //     if (resposta == 's' || resposta == 'S') {
  //       pessoasSim++;
  //       mulheresSim++;
  //     }
  //     if (resposta == 'n' || resposta == 'N') {
  //       pessoasNao++;
  //       mulheresNao++;
  //     }
  //     break;

  //   case 'M':
  //     if (resposta == 's' || resposta == 'S') {
  //       pessoasSim++;
  //       homensSim++;
  //     }
  //     if (resposta == 'n' || resposta == 'N') {
  //       pessoasNao++;
  //       homensNao++;
  //     }
  //     break;
  //     case 'f':
  //       if (resposta == 's' || resposta == 'S') {
  //         pessoasSim++;
  //         mulheresSim++;
  //       }
  //       if (resposta == 'n' || resposta == 'N') {
  //         pessoasNao++;
  //         mulheresNao++;
  //       }
  //       break;

  //     case 'm':
  //       if (resposta == 's' || resposta == 'S') {
  //         pessoasSim++;
  //         homensSim++;
  //       }
  //       if (resposta == 'n' || resposta == 'N') {
  //         pessoasNao++;
  //         homensNao++;
  //       }
  //       break;

  //     default:
  //       printf("\nInválido\n\n");
  //     break;
  //   }
  // }

  // porcentagemMulheresSim = ((float) mulheresSim / 10) * 100;
  // porcentagemHomensNao = ((float) homensNao / 10) * 100;

  // printf("\nNumero de pessoas que responderam sim: %d", pessoasSim);
  // printf("\nNumero de pessoas que responderam não: %d", pessoasNao);
  // printf("\nPorcentagem de mulheres que responderam sim: %.1f",
  // porcentagemMulheresSim); printf("\nPorcentagem de homens que responderam
  // não: %.1f", porcentagemHomensNao);

  // Exercício 5

  // float alturas [5];
  // float media = 0;
  // float soma = 0;

  // for(int i = 0; i < 5; i++){
  //   printf("Dígite a altura: ");
  //   scanf("%f", &alturas[i]);
  //   soma = alturas[i] + soma;
  // }

  // for(int i = 0; i < 5; i++){
  //   printf("\n%.2f", alturas[i]);
  // }

  // media = soma / 5;
  // printf("\n\nA média de altura é: %.2f", media);

  // Exercício 6

  // float salarios[4];
  // float soma = 0;
  // float media = 0;
  // float abaixo[4];

  // for(int i = 0; i < 4; i++){
  //   printf("Dígite seu salário: ");
  //   scanf("%f", &salarios[i]);
  //   soma = salarios[i] + soma;
  // }

  // for(int i = 0; i < 4; i++){
  //   printf("\n%.2f", salarios[i]);
  // }

  // media = soma / 4;
  // printf("\n\nMédia dos salários: %.2f", media);

  // printf("\n\nSalários abaixo da média:");
  // for(int i = 0; i < 4; i++){
  //   if (salarios[i] < media) {
  //     printf("\n%.2f", salarios[i]);
  //   }
  // }

  // Exercício 7

  // int idade[5];
  // float altura[5];
  // int idadeMaisAlta = 0;
  // float alturaMaisAlta = 0;

  // for(int i = 0; i < 5; i++){
  //   printf("Dígite sua idade: ");
  //   scanf("%d", &idade[i]);
  //   printf("Dígite sua altura: ");
  //   scanf("%f", &altura[i]);

  //   if(altura[i] > alturaMaisAlta){
  //     alturaMaisAlta = altura[i];
  //     idadeMaisAlta = idade[i];
  //   }
  // }

  // printf("\nIdade da pessoa mais alta: %d", idadeMaisAlta);

  // Exercício 8

  // char nomes[5][30];
  // int tam = 0;
  // int maior = 0;

  // for (int i = 0; i < 5; i++) {
  //   printf("Dígite seu nome: ");
  //   scanf("%s", nomes[i]);
  //   tam = strlen(nomes[i]);
  //   if (tam > maior) {
  //     maior = tam;
  //   }
  // }

  // for (int i = 0; i < 5; i++) {
  //   printf("\n%s", nomes[i]);
  // }

  // printf("\n\nO maior nome tem %d Letras", maior);

  // Exercicio 9

  // char cargos[5][30];
  // int comp = 0;
  // int diretor = 0;

  // for (int i = 0; i < 5; i++) {
  //   printf("Dígite seu cargo: ");
  //   scanf("%s", cargos[i]);
  //   comp = strcmp(cargos[i], "Diretor");
  //   if (comp == 0) {
  //     diretor++;
  //   }
  // }

  // if(diretor > 0){
  //   printf("\nO cargo Diretor foi informado.");
  // }

  // else{
  //   printf("\nO cargo Diretor não foi informado.");
  // }

  // Exercício 10

  // int habitantes [4];
  // char estados[4][20];
  // int menorHabitantes = 0;
  // char estadoMenorHabitantes[20];

  // for(int i = 0; i < 4; i++){
  //   printf("Dígite seu estado: ");
  //   scanf(" %s", estados[i]);
  //   printf("Dígite seus habitantes: ");
  //   scanf("%d", &habitantes[i]);

  //   if(habitantes[i] < menorHabitantes|| menorHabitantes == 0){
  //     menorHabitantes = habitantes[i];
  //     strcpy(estadoMenorHabitantes, estados[i]);
  //   }
  // }

  // printf("\nEstado com menor número de habitantes: %s",
  // estadoMenorHabitantes);

  // Exercício 11

  // char nome[5][30];
  // char paises[5][30];
  // char nomePais[50];

  // for(int i = 0; i < 5; i++){
  //   printf("Dígite seu nome: ");
  //   scanf("%s", nome[i]);
  //   printf("Dígite seu país: ");
  //   scanf("%s", paises[i]);

  // }

  // for(int i = 0; i < 5; i++){
  //   strcpy(nomePais, nome[i]);
  //   strcat(nomePais, "-");
  //   strcat(nomePais, paises[i]);
  //   printf("\n%s", nomePais);
  // }

  // Exercício 12

  // float salarios[2][4];
  // float salariosMaior[2][4];

  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     printf("Salário: ");
  //     scanf("%f", &salarios[i][j]);
  //   }
  // }

  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     if (salarios[i][j] > 1000) {
  //       salariosMaior[i][j] = salarios[i][j];
  //       printf("\nSalário maior que 1000: %.2f", salarios[i][j]);
  //     }
  //   }
  // }

  return 0;
}