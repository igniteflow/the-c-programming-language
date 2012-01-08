#include <stdio.h>

/*
   Prints a Celsius -> Fahrenheit conversion table
   [°F] = [°C] × 9⁄5 + 32
*/

main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 10;

  celsius = lower;

  printf("  C      F\n");
  printf("==========\n");

  while (celsius <= upper) {
    fahr = (celsius * (9.0 / 5.0) + 32);
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
