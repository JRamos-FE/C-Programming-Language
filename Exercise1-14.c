#include <stdio.h>

/*
 * Write a program to print a histogram of the frequencies of differenct characters in its input
 */

#define NUM_CHAR 128
#define IN_WORD 1 
#define OUT_WORD 0

int main(void){

  int c, i;
  int char_frequencies[NUM_CHAR + 1];
  
  for (i = 0; i <= NUM_CHAR; ++i)
    char_frequencies[i] = 0;

  printf("Input String: \t\n");
  while ((c = getchar()) != EOF)
    ++char_frequencies[c];

  printf("\n ASCII | COUNT\n");
  for (i = 0; i <= NUM_CHAR; ++i)
    if (char_frequencies[i] > 0)
      printf("%5d : %5d\n", i, char_frequencies[i]);

  return 0;
}
