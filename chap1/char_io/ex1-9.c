#include <stdio.h>

/*
  Copies input to output, trimming multiple blanks to a single blank
*/
main()
{
  int c, blank;

  c = blank = 0;
  while ((c = getchar()) != EOF) {
    if ((blank == 1) && (c == ' ')) {
      ;
    } else if ((c == ' ') && (blank == 0)) {
      putchar(c);
      blank = 1;
    } else {
      putchar(c);
      blank = 0;
    }
  }
}
