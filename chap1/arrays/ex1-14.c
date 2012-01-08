#include <stdio.h>

// [a-z] ASCII 97-122 : simply expand bounds to support upper case etc
#define LOWER_BOUND 	97
#define UPPER_BOUND	123 // +1 to account for array indexing  

/*
  Keep counts against chars input
*/
main() 
{
  int c, x;
  int histogram[UPPER_BOUND];

  // set array values to 0
  for (x = 0; x < UPPER_BOUND; ++x) 
    histogram[x] = 0;

  // gather input and do calculations
  while ((c = getchar()) != EOF) 
    histogram[c] = ++histogram[c];

  for (x = LOWER_BOUND; x < UPPER_BOUND; ++x) {
    putchar(x); 
    printf(": %d\n", histogram[x]);
  }
}
