#include <stdio.h>

/*
 * print Fahrenheit to Celsius Table
 * for fahr = 0, 20, ... , 300
 */
int main(){
int fahr, celsius;
int lower, upper, step;

lower = 0; // lower limit of temperature Table
upper = 300; // upper limit
step = 20; // increment size

fahr = lower;
printf("Fahrenheit\tCelsius\n");
while (fahr <= upper){
  celsius = 5 * (fahr - 32) / 9;
  printf("%d\t\t%d\n", fahr, celsius);
  fahr = fahr + step;
}
}
