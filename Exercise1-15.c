#include <stdio.h>

/*
 * Rewrite the temperature converison program of Section 1.2(Temp-Convert) to use a function for conversion
 */

float temp_convert(int celsius){
  return (9.0 / 5.0) * celsius +32.0f; 
}

int main(void){
  float celsius, fahr;
  int lower = 0;
  int upper = 300;
  int step = 20;

  printf("Celsius\tFahrenheit\n");
  printf("----------------------\n");

  celsius = lower;

  while (celsius <= upper){
    fahr = temp_convert(celsius);
    printf("%3.0f\t\t%6.1f\n", celsius, fahr);
    celsius += step;
  }
  return 0;
}
