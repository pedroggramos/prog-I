#include <stdio.h>

int main(void) {

  // char resposta;
  // int idade = 0;
  // char sexo;
  // float salario = 0;
  // float soma = 0;
  // float media = 0;
  // int qtdPessoas = 0;
  // int maiorIdade = 0;
  // int menorIdade = 0;
  // int qtdMulheres = 0;
  // float menorSalario = 0;
  // char sexoEstagiario;
  // int idadeEstagiario = 0;

  // do{
  //   printf("\nIdade? ");
  //   scanf("%d", &idade);
  //   printf("Sexo? ");
  //   scanf(" %c", &sexo);
  //   printf("Salário? ");
  //   scanf("%f", &salario);

  //   soma = soma + salario;
  //   qtdPessoas++;

  //   if(idade > maiorIdade){
  //     maiorIdade = idade;
  //   }

  //   if(idade < menorIdade || menorIdade == 0){
  //     menorIdade = idade;
  //   }

  //   if(sexo == 'f'){
  //     qtdMulheres++;
  //   }

  //   if(salario < menorSalario || menorSalario == 0){
  //     menorSalario = salario;
  //     sexoEstagiario = sexo;
  //     idadeEstagiario = idade;
  //   }

  //   printf("Deseja continuar? ");
  //   scanf(" %c", &resposta);
  // }while(resposta == 's');

  // media = soma / qtdPessoas;

  // printf("\nMédia: %.2f", media);
  // printf("\nMaior Idade: %d", maiorIdade);
  // printf("\nMenor idade: %d", menorIdade);
  // printf("\nQtd mulheres: %d", qtdMulheres);
  // printf("\nIdade menor salário: %d", idadeEstagiario);
  // printf("\nSexo menor salário: %c", sexoEstagiario);


  //Classroom

  char continuar;
  int numero = 0;
  int maior = 0;
  int menor = 0;
  float media = 0;
  float soma = 0;
  int qtd = 0;
  int qtdMultiplos = 0;
  int qtdEntre10e20 = 0;
  float mediaMomento = 0;
  int acimaMedia = 0;
  
  do{

    printf("Numero? ");
    scanf("%d", &numero);

    if(numero > maior){
      maior = numero;
    }

    if(numero < menor || menor == 0){
      menor = numero;
    }

    soma = soma + numero;
    qtd++;

    if(numero % 3 == 0){
      qtdMultiplos++;
    }

    if(numero >= 10 && numero <= 20){
      qtdEntre10e20++;
    }

    mediaMomento = soma /qtd;
    if(numero > mediaMomento){
      acimaMedia++;
    }
    
    
    
    printf("Deseja continuar? ");
    scanf(" %c", &continuar);
  }while(continuar == 's');

  media = soma / qtd;
  
  return 0;
}