#include <stdio.h>

/*
Reads a C file and removes multiline comments
*/

main()
{
    FILE * input_file;
    FILE * output_file;
    int c;
    int prev_char = 0;
    int in_comment = 0;
    
    input_file = fopen("input.c","r");
    output_file = fopen("output.c","w");
    
    if (input_file == NULL) 
        perror ("Error opening input file");
    else if (output_file == NULL) 
        perror ("Error opening output file");
    else
    {
        while (c != EOF) {
            c = fgetc (input_file);
            if (prev_char == '/' && c == '*')
                in_comment = 1;
            if (prev_char == '*' && c == '/')
                in_comment = 0;
            if (in_comment == 0 || c != '/')
                /* @todo allow for '/' when not in comment context */
                fputc(c, output_file);
            prev_char = c;
        };
        fclose (input_file);
        fclose (output_file);
  }
  return 0;
}

