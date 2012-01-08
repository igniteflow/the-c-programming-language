#include <stdio.h>

main()
{
  int c, value;

  value = (getchar() != EOF);

  if (value == 0 || value == 1) {
    printf("Verified that expression is either 0 or 1.  Value was: %d\n", value);
  } else {
    printf("Expression did not equal 0 or 1.  Value was: %d\n", value);
  }

  //while ((c = getchar()) != EOF)
  //  putchar(c);
}
