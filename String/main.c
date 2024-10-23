#include <stdio.h>
#include <string.h>

int main(void) {
  // char nome[30];
  // char nomes[3][30];
  // printf("Digite seu nome: ");
  // scanf("%s", nome);
  // printf("\nSeu nome é: %s", nome);

  // for(int i = 0; i < 3; i++){
  //   printf("Digite seu nome: ");
  //   scanf("%s", nomes[i]);
  // }

  // for(int i = 0; i < 3; i++){
  //   printf("\nSeu nome é: %s", nomes[i]);
  // }

  // char paises[3][20];
  // int tam = 0;
  // int maior = 0;
  // int comp = 0;
  // int qtdBrasil = 0;
  // int idades[3];
  // int menorIdade = 0;
  // char paisNovo[20];
  
  // for(int i = 0; i< 3; i++){
  //   printf("Digite o país: ");
  //   scanf("%s", paises[i]);
  //   printf("Digite a idade do país: ");
  //   scanf("%d", &idades[i]);

  //   //strlen
  //   tam = strlen(paises[i]);
  //   if(tam > maior){
  //     maior = tam;
  //   }

  //   //strcmp
  //   comp = strcmp(paises[i], "Brasil");
  //   if(comp == 0){
  //     qtdBrasil++;
  //   }

  //   if(idades[i] < menorIdade || menorIdade == 0){
  //     menorIdade = idades[i];
  //     strcpy(paisNovo, paises[i]);
  //   }

  //   if(tam >= 5 ){
  //     strcat(paises[i], "Grande");
  //   }
  //   else{
  //     strcat(paises[i], "Pequeno");
  //   }
    
  // }
  
  // printf("\nMaior tamanho: %d", maior);
  // printf("\nQtd de brasileiros: %d", qtdBrasil);
  // printf("\nPaís mais novo: %s", paisNovo);

  // for(int i = 0; i< 3; i++){
  //   printf("\nPaís: %s", paises[i]);
  // }

  //Nome-Sobrenome
  char nomes[3][20];
  char sobrenomes[3][20];
  char nomeCompleto[40];

  for(int i = 0; i < 3; i++){
    printf("\nDigite o nome: ");
    scanf("%s", nomes[i]);
    printf("Digite o sobrenome: ");
    scanf("%s", sobrenomes[i]);

    strcpy(nomeCompleto, nomes[i]);
    strcat(nomeCompleto, "-");
    strcat(nomeCompleto, sobrenomes[i]);
    printf("\nNome completo: %s", nomeCompleto);
  }

  return 0;
}