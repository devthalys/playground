#include <stdio.h>

// 6 + 4 + 2 + 4 = 14 bytes
int main()
{
  struct infos
  {
    char nome[6]; // 6 bytes
    /*
    após o char nome[6], o compilador adiciona 2 bytes de preenchimento para
    que o int idade comece em um endereço que seja múltiplo de 4.
    */
    int idade;  // 4 bytes
    float nasc; // 4 bytes
  };

  struct infos data = {"Thalys", 22, 29.12};

  printf("Nome: %s\n", data.nome);
  printf("Idade: %d\n", data.idade);
  printf("Data de Nascimento: %.2f\n", data.nasc);

  printf("O tamanho da struct infos é: %lu bytes\n", sizeof(struct infos));

  return 0;
}
