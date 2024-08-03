#include <stdio.h>

/*
 * Pointers review by Harsh YouTube video
 */

int main(){
  int x = 5; // Regular int value holding 5
  int *p = &x; // Int pointer holding memory at x
  *p = 6; // Dereferencing pointer p to modify value at memory x to 6

  int **q = &p; // Int pointer holding memory of int pointer p
  int ***r = &q; // Int pointer holding memory of int pointer q

  printf("%d\n", *p); // Dereferencing pointer p
  printf("%d\n", *q); // Dereferencing pointer q
  printf("%d\n", **q); // 2nd Degree Dereferencing pointer q
  printf("%d\n", *r); // Dereferencing pointer r 
  printf("%d\n", **r); // 2nd Degree Dereferencing pointer r 
  printf("%d\n", ***r); // 3rd Degree Dereferencing pointer r
  printf("%d\n", x);
  ***r = 10; // Dereferencing pointer r to modify value at memory x to 10
  printf("%d\n", x);
  **q = *p + 2; // Pointer q equivalent to derference pointer p, 6, plus 2
  printf("%d\n", **q); // 2nd Degree Dereferencing pointer q
}
