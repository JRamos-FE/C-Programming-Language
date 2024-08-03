#include <stdio.h>

/*
 * Write a program that prints its input one word per line
 */

int main(void){
  int c = 0;
  char word[20];

  while((c = getchar(c)) != EOF){
    if (c == ' ' || c == '\t' || c == '\n'){
      break;
    }
    else {
      word += putchar(c);
      printf("%s\n", word);
    }
  }
  return 0;
}
