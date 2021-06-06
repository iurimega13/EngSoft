#include <stdio.h>
#include <stdlib.h>

int main()
{
  int joao = 0, maria = 0, ze = 0, nuloVereador = 0, zureta = 0, gomes = 0, nuloPrefeito = 0, opcao, voto, condition = 1;

  do
  {
    printf("\n 1 - Votar \n 2 - Apuração dos votos \n 3 - Sair\n");
    printf(" Opção: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
      // Votar
    case 1:
      printf("\e[H\e[2J");
      printf(" 111 - Vereador Joao do Frete \n 222 - Vereador Maria da Pamonha \n 333 - Vereador Ze da Farmacia \n 444 - Voto Nulo\n");
      printf(" Opção: ");
      scanf("%d", &voto);

      // Válidação do voto para vereador e contagem
      switch (voto)
      {
      case 111:
        joao++;
        break;
      case 222:
        maria++;
        break;
      case 333:
        ze++;
        break;
      case 444:
        nuloVereador++;
        break;
      default:
        printf(" Voto para vereador inválido!");
        break;
      };

      printf("\e[H\e[2J");
      printf(" 11 - Prefeito Dr. Zureta \n 22 - Prefeito Senhor Gomes \n 44 - Voto Nulo\n");
      printf(" Opção: ");
      scanf("%d", &voto);

      // Válidação do voto para prefeito e contagem
      switch (voto)
      {
      case 11:
        zureta++;
        break;
      case 22:
        gomes++;
        break;
      case 44:
        nuloPrefeito++;
        break;
      default:
        printf(" Voto para prefeito inválido!");
        break;
      }
      break;

      // Apuração de votos
    case 2:
      printf("\e[H\e[2J");
      printf(" Apuração de votos:\n\n Votos para vereador: \n\n");
      printf(" Vereador Joao do Frete: %d votos \n", joao);
      printf(" Vereador Maria da Pamonha: %d votos \n", maria);
      printf(" Vereador Ze da Farmacia: %d votos \n", ze);
      printf(" Voto nulo vereador: %d votos \n\n", nuloVereador);

      printf(" Votos para prefeito: \n\n Prefeito Dr. Zureta: %d votos \n", zureta);
      printf(" Prefeito Senhor Gomes: %d votos \n", gomes);
      printf(" Voto nulo prefeito: %d votos \n", nuloPrefeito);

      break;
      // Sair
    case 3:
      condition = 0;
      break;

    default:
      printf("Opção inválida!");
      break;
    };

  } while (condition);

  return 0;
};