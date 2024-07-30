#include <stdio.h>

/*
 * Write a program to print from celsius to farenheit
 */

int main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Celsius\t\tFahrenheit\n");
  printf("-------------------------\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0f;
    printf("%3.0f\t\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
