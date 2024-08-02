#include <stdio.h>

/*
 * Modify the temperature conversion program (Temp-Convert.c) to display in reverse from 300 to 0
 */

int main(void){
  float fahr, celsius;
  int lower = 0;
  int upper = 300;
  int step = 20;

  celsius = upper;

  printf("celsius\tFahrenheit\n");
  printf("----------------------\n");

  while (celsius >= lower){
    fahr = (9.0 / 5.0) * celsius +32.0f;
    printf("%3.0f\t%6.1f\t\n", celsius, fahr);
    celsius -= step;
  }
  return 0;
}
