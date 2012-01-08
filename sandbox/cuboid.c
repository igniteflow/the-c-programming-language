#include <stdio.h>

/*
  Takes cuboid dimensions as input from user, calculates the volume and prints the result
*/

main() 
{
  int l, w, h;

  printf("Please enter the dimensions of your cuboid.  There's no error checking so if you enter a non-integer your screen will melt.\n");

  printf("Length: ");
  scanf("%d", &l);

  printf("Width: ");
  scanf("%d", &w);

  printf("Height: ");
  scanf("%d", &h);
  
  printf("Volume: %d\n", (l * w * h));
}
