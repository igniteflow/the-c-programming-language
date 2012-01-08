#include <stdio.h>

#define IN 		1
#define OUT		0
#define HISTOGRAM_SIZE	10

/*
  Counts lines, words and chars in input
*/
main() 
{
  int c, nl, nc, state, i, j, current_word_len, word_count;
  int histogram[HISTOGRAM_SIZE];


  // set array values to 0
  for (i = 0; i < HISTOGRAM_SIZE; ++i) 
    histogram[i] = 0;

  nl = nc = current_word_len = word_count = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
      state = IN;
      ++current_word_len;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } 
    if ((state == OUT) && (current_word_len > 0)) {
      histogram[word_count] = current_word_len - 1;
      current_word_len = 0;
      ++word_count;
    }
  }

  // print the results
  printf("New lines: %d\nWords: %d\nChars: %d\n", nl, word_count, nc);

  printf("Horizontal Histogram: \n\n");
  for (i = 0; i < HISTOGRAM_SIZE; ++i) { 
    printf("%3d", (i + 1));  // y axis labels
    for (j = 0; j < histogram[i]; ++j) {
      printf(" + ");
    }
    printf("\n");
  }
  // print the x-axis labels
  printf("  ");
  for (i = 0; i < 20; ++i)
    printf("%3d", (i + 1));
  printf("\n\n                     length of word\n\n"); // not very intelligent spacing
}
