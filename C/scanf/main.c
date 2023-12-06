#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  char nome[50];
  char idadeStr[4];
  int idade;
  int i, isNumber;

  printf("Digite o seu nome: ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = 0;

  while (1)
  {
    printf("Digite a sua idade: ");
    fgets(idadeStr, sizeof(idadeStr), stdin);
    idadeStr[strcspn(idadeStr, "\n")] = 0;

    isNumber = 1;
    for(i = 0; i < strlen(idadeStr); i++)
    {
      if (!isdigit(idadeStr[i]))
      {
        isNumber = 0;
        break;
      }
    }

    if (isNumber)
    {
      sscanf(idadeStr, "%d", &idade);
      break;
    }
    else
    {
      printf("Por favor, digite apenas números para a idade.\n");
    }
  }

  printf("Nome: %s\nIdade: %d\n", nome, idade);
}
