#include <stdio.h>

/*
...a work in progress...
Reads a C file and removes comments
*/

main()
{
  FILE *fp;
  fp=fopen("/home/ptysoe/Code/c-sandbox/chap1/index.html", "r");
  fprintf(fp, "Testing...\n");
  fclose(fp);
}
