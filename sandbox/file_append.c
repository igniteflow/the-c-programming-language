#include <stdio.h>

/*
Appends a string to file
*/

main()
{
  FILE *fp;
  fp=fopen("/home/phil/Code/c-sandbox/chap1/end_of_chap/index.html", "a");
  if(fp == NULL)
  {
    printf( "Error opening file: %s\n", strerror( errno ) );
  }
  fprintf(fp, "Testing...\n");
  fclose(fp);
}
