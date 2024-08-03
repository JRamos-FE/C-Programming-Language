#include <stdio.h>

/*
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal, much harder to draw them vertical
 */

int main(void){
  int c = 0;
  
  while ((c = getchar()) != EOF) {
    if (c != ' ' || c != '\t' || c != '\n'){
      putchar(c);
      printf("-");
    }
    else {
      printf("\t");
      printf("\n");
    }
  }
  return 0;
}
