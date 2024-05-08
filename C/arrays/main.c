#include <stdio.h>

int main() {
    // primeira definição
    int prices[5];
    printf("Valores do array após a primeira definição:\n");
    for (int i = 0; i < 5; i++) {
        printf("prices[%d] = %d\n", i, prices[i]);
    }
    
    // usando uma constante para definição do tamanho do array
    const int SIZE = 5;
    int prices_const[SIZE];
    printf("\nValores do array com definição de tamanho constante:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("prices_const[%d] = %d\n", i, prices_const[i]);
    }

    // inicializando um array no momento da definição
    int prices_init[5] = {1, 2, 3, 4, 5};
    printf("\nValores do array inicializado no momento da definição:\n");
    for (int i = 0; i < 5; i++) {
        printf("prices_init[%d] = %d\n", i, prices_init[i]);
    }

    // atribuindo valor após definição
    int prices_assign[5];
    prices_assign[0] = 1;
    prices_assign[1] = 2;
    prices_assign[2] = 3;
    prices_assign[3] = 4;
    prices_assign[4] = 5;
    printf("\nValores do array após atribuição de valores:\n");
    for (int i = 0; i < 5; i++) {
        printf("prices_assign[%d] = %d\n", i, prices_assign[i]);
    }

    // usando um laço para atribuir os valores
    int prices_loop[5];
    for (int i = 0; i < 5; i++) {
        prices_loop[i] = i + 1;
    }
    printf("\nValores do array após uso de laço para atribuição:\n");
    for (int i = 0; i < 5; i++) {
        printf("prices_loop[%d] = %d\n", i, prices_loop[i]);
    }

    // determinando o valor dos índices
    int prices_index[5];
    for (int i = 0; i < 5; i++) {
        prices_index[i] = i + 1;
    }
    printf("\nValores específicos de índices do array:\n");
    printf("prices_index[0] = %d\n", prices_index[0]);
    printf("prices_index[1] = %d\n", prices_index[1]);

    return 0;
}
