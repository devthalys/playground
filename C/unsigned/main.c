#include <stdio.h>

int main(void)
{
  unsigned char j = 255;
  j = j + 10;
  printf("%u\n", j); /* 9 */

  char i = 117;
  i = i + 10;
  printf("%u\n", i); /* 127 */
}