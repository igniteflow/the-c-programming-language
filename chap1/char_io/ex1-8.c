#include <stdio.h>

/*
  Counts tabs, blanks and newlines
*/
main()
{
  int c, tabs, blanks, newlines;

  c = tabs = blanks = newlines = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++newlines;
    else if (c == ' ')
      ++blanks;
    else if (c == '\t')
      ++tabs;
  printf("newlines: %d\nblanks: %d\ntabs: %d\n", newlines, blanks, tabs);
}
