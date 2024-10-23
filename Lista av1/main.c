#include <stdio.h>

int main(void) {

  // Exercício 1
  
  // int idade1 = 0;
  // int idade2 = 0;
  // float mediaIdade = 0;

  // printf("Dígite a primeira Idade:");
  //   scanf("%d", &idade1);
  // printf("Dígite a segunda Idade:");
  //   scanf("%d", &idade2);

  // mediaIdade = (idade1 + idade2) / 2;
  //   printf("\nA Média de idade é: %.2f", mediaIdade);

  

  // Exercício 2 

  // int n = 0;
  // int ant = 0;
  // int suc = 0;

  // printf("Dígite o Número: ");
  //   scanf("%d", &n);

  //   suc = (n + 1);
  // printf("O sucessor é: %d", suc);

  //   ant = (n - 1);
  // printf("\nO Antecessor é: %d", ant);


  // Exercício 3

  float conta = 0;
  float valorTotal = 0;
  float taxa = 0;



  printf("Dígite o valor total da conta: ");
    scanf(" %f", &conta);

  taxa = (conta * 0.1);
  valorTotal = conta + taxa;

  printf("O Valor à ser pago é: %.2f", valorTotal);


  
  // Exercício 4

  // float raio = 0;
  // float p = 0;
  // float area = 0;

  // printf("Dígite o raio: ");
  // scanf(" %f", &raio);

  // p = (2 * 3.14 * raio);
  // area = (3.14 * raio * raio);

  // printf("\nO Perímetro é: %.2f", p);
  // printf("\nA área é: %.2f", area);


  
  // Exercício 5

  // float c = 0;
  // float f = 0;
  
  // printf("Dígite a temperatura(°C): ");
  // scanf(" %f", &c);

  // f = (9 * c + 160) / 5;
  // printf("A temperatura em Fahrenheit é: %.f°", f);


  
  // Exercício 6

  // int cod = 0;
  // float preco = 0;
  // float cons = 0;
  // float total = 0;
  // float totalMin = 0;
  
  // printf("Dígite o código do consumidor: ");
  // scanf("%d", &cod);
  // printf("\nPreço do KW: ");
  // scanf("%f", &preco);
  // printf("\nQuantidade consumido: ");
  // scanf("%f", &cons);
  
  // total = preco * cons;

  // if(total > 21.23){
  // total = total;
  // }
  // else{
  //   total = 21.23;
  // }

  // printf("\nCódigo: %d", cod);
  // printf("\nTotal a pagar: %.2f", total);

  
  
  // Exercício 7

  // float n1 = 0;
  // float n2 = 0;
  // float maior = 0;

  // printf("Dígite o primeiro número: ");
  // scanf(" %f", &n1);
  // printf("Dígite o segundo número: ");
  // scanf(" \n%f", &n2);

  
  // if(n1 > n2) {
  //   printf("O maior número é: %.f", n1);
  // }

  // else if(n2 > n1) {
  //   printf("O maior número é: %.f", n2);
  //  }

  // else{
  //   printf("Os números são iguais");
  // }

  
  
  // Exercício 8

  // float av1 = 0;
  // float av2 = 0;
  // float media = 0;

  // printf("Dígite a nota da AV1: ");
  //   scanf(" %f", &av1);
  // printf("Dígite a nota da AV2: ");
  //   scanf(" %f", &av2);

  // media = (av1 + av2) / 2;
  // printf("Média: %.2f\n\n", media);

  // if(media >= 6) {
  //   printf("AP", media);
  // }

  // else if(media >= 5) {
  //   printf("AV3", media);
  // }    
    
  // else {
  //   printf("RP", media);
  // }


  
  // Exercício 9

  // int n1 = 0;
  // int n2 = 0;
  // int n3 = 0;
  // int ordem = 0;

  // printf("Dígite o primeiro número: ");
  //   scanf("%d", &n1);
  // printf("Dígite o segundo número:  ");
  //   scanf("%d", &n2);
  // printf("Digite o terceiro número: ");
  //   scanf("%d", &n3);

  // if(n1 < n2) {
  //   ordem = n1;
  //   n1 = n2;
  //   n2 = ordem;
  //  }
  // if(n1 < n3) {
  //   ordem = n1;
  //   n1 = n3;
  //   n3 = ordem;
  // }
  // if(n2 < n3) {
  //   ordem = n2;
  //   n2 = n3;
  //   n3 = ordem;
  // }

  // printf("Os números em ordem decrescente: %d, %d, %d", n1, n2, n3);
  


  // Exercício 10

//   float n1 = 0;
//   char op;
//   float n2 = 0;
//   float total = 0;

//   printf("Digite o primeiro número: ");
//   scanf("%f", &n1);
//   printf("Digite a operação: ");
//   scanf(" %c", &op);
//     printf("Digite o segundo número: ");
//   scanf("%f", &n2);

//   switch(op) {
//     case '+':
//       total = n1 + n2;
//       printf("\nO total é: %.2f", total);break;
//     case '-':
//       total = n1 - n2;
//       printf("\nO total é: %.2f", total);break;
//     case '*':
//       total = n1 * n2;
//       printf("\nO total é: %.2f", total);break;
//     case '/':
//       if(n2 != 0) {
//       total = n1 / n2;
//       printf("\nO total é: %.2f", total);
//       }
//       else {
//       printf("\nNão pode dividir por zero");
//        }
//     break;
//     default:
//     printf("Operação Inválida");
// }


  
  // Exercício 11

  float conta = 0;
  char consumidor;
  float agua = 0;
  float taxa = 0;
  float adc = 0;
  float totalConta = 0;

  printf("Digite o tipo de consumidor:");
  scanf(" %c", &consumidor);
  printf("Digite o consumo de agua: ");
  scanf("%f", &agua);

  switch(consumidor) {
    case 'R':
      taxa = 5.00;
      adc = 0.05;
      totalConta = taxa + (adc * agua);
      printf("\nConta Residencial:\nO Valor a ser pago é: %.2f", totalConta);
      break;
    case 'C':
      taxa = 500;
      adc = 0.25;   
      if(agua <= 80) {
        totalConta = taxa;
        printf("\nConta Comercial:\nO Valor a ser pago é: %.2f", totalConta);
        }
      else{
        totalConta = taxa + (adc * (agua - 80));
        printf("\nConta Comercial:\nO Valor a ser pago é: %.2f", totalConta);
        }
    break;   
    case 'I':
      taxa = 800;
      adc = 0.04;
      if(agua <= 100){
        totalConta = taxa;
        printf("\nConta Industrial:\nO Valor a ser pago é: %.2f", totalConta);
      }
      else{
        totalConta = taxa + (adc * (agua - 100));
        printf("\nConta Industrial:\nO Valor a ser pago é: %.2f", totalConta);
      }
    break;
    default:
      printf("Inválido");
  }
  


  // Exercício 12

  // float precoNormal = 0;
  // char semana;
  // char categoria;
  // float totalPago = 0;

  // printf("Digite o preço da fita: ");
  // scanf("%f", &precoNormal);
  // printf("Digite o dia da semana(2,3,4,5,6,7): ");
  // scanf(" %c", &semana);
  // printf("Digite a categoria do filme: ");
  // scanf( " %c", &categoria);

  // switch(semana){
  //   case '1':
  //     if(categoria = 'L') {
  //       totalPago = (precoNormal * 0.15) + precoNormal;
  //      }
  //     else{
  //       totalPago = precoNormal;
  //     }
  //   break;
  //   case '2':
  //     if(categoria = 'L') {
  //       totalPago = (precoNormal * 0.15) + precoNormal * 0.4;
  //      }
  //     else{
  //       totalPago = precoNormal * 0.4;
  //     }
  //     break;       
  //   case '3':
  //    if(categoria = 'L') {
  //      totalPago = (precoNormal * 0.15) + precoNormal * 0.4;
  //     }
  //    else{
  //      totalPago = precoNormal * 0.4;
  //    }
  //    break;       
  //   case '4':
  //    if(categoria = 'L') {
  //        totalPago = (precoNormal * 0.15) + precoNormal;
  //       }
  //      else{
  //        totalPago = precoNormal;
  //      }
  //    break;
  //   case '5':
  //     if(categoria = 'L') {
  //       totalPago = (precoNormal * 0.15) + precoNormal * 0.4;
  //      }
  //     else{
  //       totalPago = precoNormal * 0.4;
  //     }
  //     break;       
  //   case '6':
  //    if(categoria = 'L') {
  //        totalPago = (precoNormal * 0.15) + precoNormal;
  //       }
  //      else{
  //        totalPago = precoNormal;
  //      }
  //    break;
  //   case '7':
  //    if(categoria = 'L') {
  //        totalPago = (precoNormal * 0.15) + precoNormal;
  //       }
  //      else{
  //        totalPago = precoNormal;
  //      }
  //    break;
  //   default:
  //     printf("Inválido");
  // }
  //   printf("O Total a ser pago é: R$%.2f", totalPago);


  
  // Exercício 13

  // char i;
  // float a = 0;
  // float b = 0;
  // float c = 0;
  // float ordem = 0;

  // printf("Dígite o valor de I: ");
  // scanf(" %c", &i);
  // printf("Dígite o valor de A: ");
  // scanf("%f", &a);
  // printf("Dígite o valor de B: ");
  // scanf("%f", &b);
  // printf("Dígite o valor de C: ");
  // scanf("%f", &c);

  // switch(i){
  //   case '1':
  //     if(a > b){
  //     ordem = a;
  //     a = b;
  //     b = ordem;
  //     }
  //     if(a > c){
  //     ordem = a;
  //     a = c;
  //     c = ordem;
  //     }
  //     if(b > c){
  //       ordem = b;
  //       b = c;
  //       c = ordem;
  //     }
  //     printf("Ordem: %.f, %.f, %.f", a , b, c);
  //   break;
  // case '2':
  //     if(a < b){
  //       ordem = a;
  //       a = b;
  //       b = ordem;
  //     }
  //     if(a < c){
  //       ordem = a;
  //       a = c;
  //       c = ordem;
  //     }
  //     if(b < c){
  //       ordem = b;
  //       b = c;
  //       c = ordem;
  //     }
  //   printf("Ordem: %.f, %.f, %.f", a , b, c);
  //   break;
  // case '3':
  //   if(b < a){
  //     ordem = b;
  //     b = a;
  //     a = ordem;
  //   }
  //   if(b < c){
  //     ordem = b;
  //     b = c;
  //     c = ordem;
  //   }
  //   printf("Ordem: %.f, %.f, %.f", a , b, c);
  //   break;
  //   default:
  //     printf("Inválido");
  // }


  
  // Exercício 14

//   float ent = 0;
//   char adc;
//   char continuar;
//   float adicional = 0;
//   float arCond = 0;
//   float pintMetalica = 0;
//   float vidroEletrico = 0;
//   float dirHidra = 0;
//   float valorTotal = 0;

//   printf("Dígite o valor de entrada: ");
//   scanf("%f", &ent);

//   do{
//     printf("Dígite o adicional:");
//     scanf(" %c", &adc);

//   switch(adc){
//     case 'a':
//       valorTotal = ent + 1750;
//       break;
//     case 'b':
//       valorTotal = ent + 800;
//       break;
//     case 'c':
//       valorTotal = ent + 1200;
//       break;
//     case 'd':
//       valorTotal = ent + 2000;
//       break;
//     default:
//         printf("Inválido");
// }

//   ent = valorTotal;
//   printf("Deseja continuar (s ou n)?");
//   scanf(" %c", &continuar);
// }while(continuar == 's');

//   printf("O valor total é: %.2f", valorTotal);
    


  // Exercício 15

  // char continuar;
  // int n = 0;
  // int soma = 0;
  
  // do{
  //   printf("Dígite o número: ");
  //   scanf("%d", &n);

  //   soma = soma + n;   
  // }while(n != 0);
  
  //   printf("%d", soma);


  // Exercício 16
  
  // float numero = 0;
  // float soma = 0;
  // float media = 0;
  // float qtdNum = 0;

  // do{
  //   printf("Número: ");
  //   scanf("%f", &numero);

  //   if(numero > 0){
  //     soma = soma + numero;
  //     qtdNum++;
  //   }
  // }while(numero != 0);

  // if(qtdNum > 0) {
  //   media = soma / qtdNum;
  //   printf("\nQuantidade de números digitados: %.f", qtdNum);
  //   printf("\nA média é: %.2f", media);
  // } 
  // else{
  //   printf("Inválido");
  // }

  // Exercício 17

  // int idade = 0;
  // float somaMaior = 0;
  // int qtdPessoas = 0;
  // int qtdPessoasMaior = 0;
  // float soma = 0;
  // float media = 0;
  // char continuar;

  // do{
  //   printf("Idade?: ");
  //   scanf("%d", &idade);
    
  //   if(idade >= 18){
  //     somaMaior = somaMaior + idade;
  //     qtdPessoasMaior++;
  //   }
  //   else{
  //     soma = soma + idade;
  //     qtdPessoas++;
  //   }
  
    
    
  // }while(idade != 0);

  //   media = somaMaior / qtdPessoasMaior;
  //   printf("Soma maior de idade: %.f", somaMaior);
  //   printf("\nMedia maior de idade: %.f", media);



  // Exercício 18

  // float preco = 0;
  // float numeroCons = 0;
  // float qtdCons = 0;
  // float consumoTotal = 0;
  // float consumoGeral = 0;
  // int maiorConsumo = 0;
  // int menorConsumo = __FLT_MAX__;
  // int qtdPessoas = 0;
  // float media = 0;
  

  // do{
  //   printf("N° do consumidor: ");
  //   scanf("%f", &numeroCons);
  //   if(numeroCons == 0)
  //     break;
  //   printf("Preço de kWh consumido: ");
  //   scanf("%f", &preco);
  //   printf("Quantidade de kWh consumido no mês: ");
  //   scanf("%f", &qtdCons);

  //   if(qtdCons > maiorConsumo){
  //     maiorConsumo = qtdCons;
  //   }
  //   if(qtdCons < menorConsumo || qtdCons == 0){
  //     menorConsumo = qtdCons;
  //   }
    
  //   consumoTotal = preco * qtdCons;
  //   consumoGeral = consumoGeral + qtdCons;
  //   qtdPessoas++;
    
  //   printf("\nTotal a pagar: %.3f: \n", consumoTotal);
  // }while(numeroCons != 0);

  // media = consumoGeral / qtdPessoas;
  
  // printf("\nMaior Consumo: %.3f", maiorConsumo);
  // printf("\nMenor Consumo: %.3f", menorConsumo);
  // printf("\nMedia de Consumo: %.3f", media);


  // Exercício 19

  // int numero = 0;
  // int i = 0;
  // int resultado = 0;

  // printf("Dígite o número: ");
  // scanf("%d", &numero);

  // while(i <= 10){
  //   resultado = numero * i;
  //   printf("%d x %d = %d \n", numero, i, resultado, numero * i == resultado);
  //   i++;    
  // }

  // Exercício 20

 //  int opc = 0;

  
 //  do{
 //    printf("Dígite a opção desejada(0 ou 1): ");
 //    scanf("%d", &opc);

 //    if(opc == 0){
 //      printf("\nOpção 0 escolhida\n\n");
 //    }
 //    if(opc == 1){
 //      printf("\nOpção 1 escolhida\n\n");
 //    }
 // }while(opc == 1 || opc == 0);

 //  printf("\nFim da execução");


  // int a = 0;
  // int b = 0;
  // int c = 0;

  // printf("\nDigite o primeiro inteiro: ");
  // scanf("%d", &a);
  // printf("\nDigite o segundo inteiro: ");
  // scanf("%d", &b);
  // c=b;
  // b=a;
  // a=c;
  // printf("\nValor da primeira variável: %d", a);
  // printf("\nValor da segunda variável: %d", b);

  
  return 0;
}