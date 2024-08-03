#include <stdio.h>

/*
 * Pointers as function arguments, calling by reference
 */

void increment(int *p){ // Function that has an integer pointer p as paramter argument
  *p += 1; // Dereferencing pointer p to add 1 to the value of the memory it points to from main
}

int main(){
  int a;
  a = 10;
  increment(&a); // Passing the memory value of int a to the function increment
  printf("a = %d\n", a); // Printing the now modified value of a
}
