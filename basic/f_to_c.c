#include <stdio.h>

main() 
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 10;

  fahr = lower;

  // print Fahrenheit -> Celsius table
  printf("  F      C\n");
  printf("==========\n");
 
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%3.0f %6.1f\n", fahr, celsius); // first field 3 digits wide, second 6 digits
    fahr = fahr + step;
  } 
}
