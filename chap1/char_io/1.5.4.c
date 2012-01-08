#include <stdio.h>

#define IN 	1
#define OUT	0

/*
  Counts lines, words and chars in input
*/
main() 
{
  int c, nl, nw, nc, state;

  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("New lines: %d\nWords: %d\nChars: %d\n", nl, nw, nc);
}
