#include <stdio.h>

#define IN 		1
#define OUT		0
#define HISTOGRAM_SIZE	10
#define MAX_WORDS	20

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

  // gather input and do calculations
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

  /*
    horizontal histogram
  */
  printf("\n\nHorizontal Histogram: \n\n");
  for (i = 0; i < HISTOGRAM_SIZE; ++i) { 
    printf("%3d", (i + 1));  // y axis labels
    for (j = 0; j < histogram[i]; ++j) {
      printf(" + ");
    }
    printf("\n");
  }
  
  // print the x-axis labels
  printf("  ");
  for (i = 0; i < MAX_WORDS; ++i)
    printf("%3d", (i + 1));
  printf("\n\n                     length of word\n\n"); // not very intelligent spacing



  /*
    vertical histogram
    @note the horizontal chart could be displayed this way too, but left the original workings
    for memory's sake
    @todo flip the chart
    @bug word lengths are being listed in descending order, was working previously
  */
  int array[10][10];
  int x, y; // x is horizontal, y is vertical

  printf("\n\nVertical Histogram: \n\n");
  printf("\n\n           word order \n\n"); // not very intelligent spacing

  // populate the matrices
  for(x = 0; x < 10; ++x) {
    for(y = 0; y < 10; ++y) {
      if (y < histogram[x]) {
        array[y][x] = 1;
      } else {
        array[y][x] = 0;
      } 
    }
  } 

  // print the key
  for(x = 0; x < 10; x++) 
    printf("%3d", (x + 1));
  printf("\n");

  // print the matrix
  for(x = 0; x < 10; ++x) {
    for(y = 0; y < 10; ++y) {
      if (array[x][y] == 1)
	printf("  +");      
    }
    printf("\n");
  }
}
