#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10] = "123";
    int num = atoi(str);
    printf("O valor numérico da string é: %d\n", num);
    return 0;
}

// int my_atoi(char *str)
// {
//     int res = 0;
//     for (int i = 0; str[i] != '\0'; ++i)
//         res = res * 10 + str[i] - '0';
//     return res;
// }

// int main()
// {
//     char str[10] = "123";
//     int num;
//     num = my_atoi(str);
//     printf("O valor numérico da string é: %d\n", num);
//     return 0;
// }
