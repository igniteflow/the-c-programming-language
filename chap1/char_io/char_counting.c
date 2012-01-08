#include <stdio.h>

main()
{
  double nc;
  
  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc); // press CTRL+D when done to see the output
}
