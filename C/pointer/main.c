#include <stdio.h>

int main()
{
  // int age = 37;
  // int *address = &age;
  // printf("%u", *address); /* 37 */

  // int age;
  // int *address = &age;
  // *address = 37;
  // printf("%u", *address); /* 37 */

  int prices[3] = {5, 4, 3};
  printf("%u", *(prices + 1)); /* 4 */
}
