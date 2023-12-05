#include <stdio.h>

int main(void)
{
  char nome[20];
  int idade;
  printf("Digite o seu nome: ");
  scanf("%s", nome);
  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Nome: %s\nIdade: %d\n", nome, idade);
}