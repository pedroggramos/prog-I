#include <stdio.h>

int main(void) {
  //1
  // char sexo;
  // float altura = 0;
  // float pesoIdeal = 0;

  // printf("Digite seu sexo: ");
  // scanf(" %c", &sexo);
  // printf("Digite sua altura: ");
  // scanf("%f", &altura);

  // if(sexo == 'm' || sexo == 'M'){
  //   pesoIdeal = (72.7*altura) - 58;
  // }
  // else{
  //   pesoIdeal = (62.1*altura) - 44.7;
  // }

  // pesoIdeal = sexo == 'm'? (72.7*altura) - 58: (62.1*altura) - 44.7;
  // printf("Peso ideal: %.2f", pesoIdeal);

  
  //2

  // int numero = 0;

  // printf("Digite um número: ");
  // scanf("%d", &numero);

  // if(numero % 2 == 0){
  //   printf("%d é par", numero);
  // }
  // else{
  //    printf("%d é ímpar", numero);
  // }

  
  //3

  // float pesoPescado = 0;
  // float pesoExc = 0;
  // float valorMulta = 0;

  // printf("Digite o peso pescado: ");
  // scanf("%f", &pesoPescado);

  // if(pesoPescado > 50){
  //   pesoExc = pesoPescado - 50;
  //   valorMulta = pesoExc * 4;
  //   printf("\nPeso excedente: %.2f\nValor da multa: R$ %.2f",pesoExc, valorMulta);
  // }
  // else{
  //   printf("Não paga multa");
  // }

  
  // Exemplo ternário
  // float media = 8;

  // if(media >= 6){
  //   printf("Passou");
  // }
  // else{
  //   if(media >=5){
  //     printf("Recuperação");
  //   }
  //   else{
  //     printf("Reprovou");
  //   }
  // }

  // media >=6? printf("Passou"): printf("Reprovou");

  // media >= 6? printf("Passou"): media >=5? printf("Recuperação"): printf("Reprovou");


  //-------------------------------------------------------------------
  //Switch

  //1

  // char categoria;

  // printf("Digite a categoria: ");
  // scanf(" %c", &categoria);

  // switch(categoria){
  //   case 'a':
  //     printf("5 a 7 anos"); break;
  //   case 'b':
  //     printf("8 a 11 anos"); break;
  //   case 'c':
  //     printf("12 a 13 anos"); break;
  //   case 'd':
  //     printf("14 a 17 anos"); break;
  //   case 'e':
  //     printf("Maior de 18 anos"); break;
  //   default:
  //     printf("Categoria inválida");
  // }

  //2

  float numero1 = 0;
  float numero2 = 0;
  float total = 0;
  char operador;

  printf("Digite o primeiro número: ");
  scanf("%f", &numero1);
  printf("Digite o operador (+, *, /, -): ");
  scanf(" %c", &operador);
  printf("Digite o segundo número: ");
  scanf("%f", &numero2);

  switch(operador){
    case '+':
      total = numero1 + numero2;
      break;
    case '-':
      total = numero1 - numero2;
      break;
    case '*':
      total = numero1 * numero2;
      break;
    case '/':
      if(numero2 != 0){
         total = numero1 / numero2;
      }
      else{
        printf("Não pode dividir por zero");
      }
      break;
    default:
      printf("Operação inválida");
  }

  printf("\nTotal: %.2f", total);
  
  
  return 0;
}


// --------------------------------
