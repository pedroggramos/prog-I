#include <stdio.h>

int main(void) {
  float valorTotalVendas[5];
  int qtdCamisasVendidas[5];
  int codigoVenda[5];
  int codVendaTot = 0;
  char tamanho[5];
  int tipoVenda[5];
  int qtdCamisasTot = 0;
  char escolha;
  int pesquisa = 0;
  char continuar;
  float valorTotalP = 0;
  float valorTotalM = 0;
  float valorTotalG = 0;
  float valorTotalSoma = 0;
  float valorTotalMedia = 0;
  int qtdCamisasP = 0;
  int qtdCamisasG = 0;
  int qtdCamisasM = 0;
  int qtdVendaTipo[5] = {0};//comeca do 0
  int maiorCem = 0;
  int pMaisVendido = 0;
  float vendasAbaixoValor = 0;
  int tipoMaisVendido = 0;
  int TipoMaisVendido = 0;
  int somaImpar = 0;
  float valorTotalImpar = 0;

  int numeroAbaixoValor = 0;

  //------------Cadastro de Vendas-----------------
  for (int i = 0; i < 5; i++) {
    printf(" --- Venda Número %d ---\n\n", i + 1);

    printf("Tipo de Venda(1 a 5): ");
    scanf("%d", &tipoVenda[i]);

    while (tipoVenda[i] < 1 || tipoVenda[i] > 5) {
      printf("\n⚠️ Tipo de venda inválida, digite um código entre 1 e "
             "5.\n\n");
      printf("Tipo de Venda: ");
      scanf("%d", &tipoVenda[i]);
    }

    printf("Código de Venda: ");
    scanf("%d", &codVendaTot);

    while (codVendaTot < 0) {
      printf("\n⚠️ Código de venda inválido, digite um código entre 1 e "
             "5.\n\n");
      printf("Código de Venda: ");
      scanf("%d", &codVendaTot);
    }

    // verificaçao código de venda já cadastrado
    for (int j = 0; j < i; j++) {
      if (codVendaTot == codigoVenda[j]) {
        printf("\n🚨 Código de venda já cadastrado\n\n")
        ;
        printf("Digite um novo código da venda: ");
        scanf("%d", &codVendaTot);
        j = -1; // reinicia a verificação
      }
    }
    codigoVenda[i] = codVendaTot; // guardar o código de venda

    // Pedir o tamanho da camisa
    printf("Digite o tamanho da Camisa: ");
    scanf(" %c", &tamanho[i]);

    
    while (tamanho[i] != 'P' && tamanho[i] != 'M' && tamanho[i] != 'G' &&
           tamanho[i] != 'p' && tamanho[i] != 'm' && tamanho[i] != 'g') {
      printf("\n⚠️ Tamanho de camisa inválido. Por favor, informe P, M ou "
             "G.\n\n");
      printf("Digite o tamanho da Camisa: ");
      scanf(" %c", &tamanho[i]);
    }
    printf("Digite a quantidade de camisas: ");
    scanf("%d", &qtdCamisasVendidas[i]);
    while (qtdCamisasVendidas[i] < 1) {
      printf("\n⚠️ Digite um número maior que 0.\n\n");
      printf("Digite a quantidade de camisas: ");
      scanf("%d", &qtdCamisasVendidas[i]);
    }
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas[i]);

    while (valorTotalVendas[i] < 0) {
      printf("\n⚠️ Digite um número maior que 0.\n\n");
      printf("Digite o valor total das vendas: ");
      scanf("%f", &valorTotalVendas[i]);
    }
    if (tamanho[i] == 'P' || tamanho[i] == 'p') {
      qtdCamisasP += qtdCamisasVendidas[i];
      valorTotalP += valorTotalVendas[i];
    } else if (tamanho[i] == 'M' || tamanho[i] == 'm') {
      qtdCamisasM += qtdCamisasVendidas[i];
      valorTotalM += valorTotalVendas[i];
    } else {
      qtdCamisasG += qtdCamisasVendidas[i];
      valorTotalG += valorTotalVendas[i];
    }

    qtdCamisasTot += qtdCamisasVendidas[i];

    if (tipoVenda[i] == 1) {
      qtdVendaTipo[0] += 1;
    } else if (tipoVenda[i] == 2) {
      qtdVendaTipo[1] += 1;
    } else if (tipoVenda[i] == 3) {
      qtdVendaTipo[2] += 1;
    } else if (tipoVenda[i] == 4) {
      qtdVendaTipo[3] += 1;
    } else if (tipoVenda[i] == 5) {
      qtdVendaTipo[4] += 1;
    }
    if (valorTotalVendas[i] > 100) {
      maiorCem++;
    }

    valorTotalSoma += valorTotalVendas[i];

    
    printf("\n✨Cadastro realizado com sucesso!✨\n\n");
  }
  valorTotalMedia = valorTotalSoma / 5;

  for (int i = 0; i < 5; i++) {
    if (tipoVenda[i] % 2 != 0) {
      valorTotalImpar += valorTotalVendas[i];
    }
  }

  int maxVendas = qtdVendaTipo[0];
  tipoMaisVendido = 0; // começa com 0

  for (int i = 0; i < 5; i++) {
    if (qtdVendaTipo[i] >= maxVendas) {
      maxVendas = qtdVendaTipo[i];
      tipoMaisVendido = i + 1;
    }
  }

  if (maxVendas == 0) {
    tipoMaisVendido =
        0; // se nenhum tipo de venda ser contabilizado ajustar o valor para 0
  }

  // ----------------------------

  do {
    printf("\n--- Menu de consulta ---\n");
    printf("\nDeseja ver todos os pedidos (T) ou pedido único (U)?: ");
    scanf(" %c", &escolha);
    while (escolha != 'T' && escolha != 'U' && escolha != 't' &&
           escolha != 'u') {
      printf("⚠️ Opção inválida. Por favor, escolha T ou U.\n");
      scanf(" %c", &escolha);
    }
    if (escolha == 'u' || escolha == 'U') {
      printf("\nDigite o código de venda:");
      scanf("%d", &pesquisa);

      int codCadastrado = 0; //nao cadastrado
      for (int i = 0; i < 5; i++) {
        if (pesquisa == codigoVenda[i]) {
          codCadastrado = 1; //cadastrado
          printf("\n\nCódigo de venda %d\n", codigoVenda[i]);
          printf("Tamanho: %c\n", tamanho[i]);
          printf("Número de camisas: %d\n", qtdCamisasVendidas[i]);
          printf("Valor total: %.2f\n", valorTotalVendas[i]);
          printf("Tipo de venda: %d", tipoVenda[i]);
          break;
        }
      }

      if (codCadastrado == 0) {
        printf("⚠️Código não cadastrado, insira um código válido\n");
      }

    } else {
      printf("\nValor Desejado: ");
      scanf("%f", &vendasAbaixoValor);

      for (int i = 0; i < 5; i++) {
        if (valorTotalVendas[i] < vendasAbaixoValor) {
          numeroAbaixoValor++;
          printf("\nCódigo de venda %d:", codigoVenda[i]);
          printf("\nValor total das vendas: %.2f\n", valorTotalVendas[i]);
        }
      }
      printf("\nNúmero de vendas abaixo do valor desejado: %d\n",
             numeroAbaixoValor);
      printf("\nVendas acima de 100 reais: %d\n", maiorCem);
      printf("\nMédia de vendas: %.2f\n", valorTotalMedia);
      printf("Quantidade de camisas P: %d\n", qtdCamisasP);
      printf("Quantidade de camisas M: %d\n", qtdCamisasM);
      printf("Quantidade de camisas G: %d\n", qtdCamisasG);
      printf("Quantidade total de camisas: %d\n", qtdCamisasTot);
      printf("\nVendas ímpares:\n");
      for (int i = 0; i < 5; i++) {
        if (tipoVenda[i] == 1 || tipoVenda[i] == 3 || tipoVenda[i] == 5) {
          printf("\nR$%.2f", valorTotalVendas[i]);
        }
      }

      printf("\n\nValor total das vendas ímpares: %.2f\n", valorTotalImpar);

      printf("\n\nO tipo de venda que mais foi vendido foi o TIPO %d, ",
             tipoMaisVendido);
      printf("que foi vendido %d vezes! \n", maxVendas);
    }

    printf("\nDeseja retornar ao menu? (S ou N): ");
    scanf(" %c", &continuar);
    while (continuar != 'S' && continuar != 'N' && continuar != 's' &&
           continuar != 'n') {
      printf("⚠️Valor inválido, deseja voltar ao menu? (S ou N): ");
      scanf(" %c", &continuar);
    }

  } while (continuar == 'S' || continuar == 's');

  printf("\n✨Programa encerrado✨\n");

  return 0;
}
