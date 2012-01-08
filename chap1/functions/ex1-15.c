#include <stdio.h>

/*
  Prints a Fahrenheit -> Celsius conversion table using a function
  [°C] = ([°F] − 32) × 5⁄9
*/
int fahr_to_celsius(int fahr);

main() 
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 10;

  fahr = lower;

  printf("  F      C\n");
  printf("==========\n");
 
  while (fahr <= upper) {
    celsius = fahr_to_celsius(fahr);
    printf("%3.0f %6.1f\n", fahr, celsius); // first field 3 digits wide, second 6 digits
    fahr = fahr + step;
  } 
}

int fahr_to_celsius(int fahr)
{
   return ( 5.0 / 9.0 ) * (fahr - 32);
}
