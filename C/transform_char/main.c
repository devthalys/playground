#include <stdio.h>

char transform(char uppercase);

int main(){
  char uppercase = 'Z';
  printf("%c\n", transform(uppercase));
  return 0;
}

char transform(char uppercase){
    return uppercase + 'a' - 'A';
}