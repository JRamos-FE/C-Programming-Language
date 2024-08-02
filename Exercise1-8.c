#include <stdio.h>

/*
 * Write a program to count blanks, tabs and newlines
 */

int main(void){
  int c, nlines, ntabs, nblanks = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nlines;
    else if (c == '\t')
      ++ntabs;
    else if (c == ' ')
      ++nblanks;
   }
  printf("Number Lines: %d\n", nlines);
  printf("Number Tabs: %d\n", ntabs);
  printf("Number Blanks: %d\n", nblanks);

  return 0;
}
