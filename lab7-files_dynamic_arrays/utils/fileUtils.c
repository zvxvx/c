#include "fileUtils.h"
#include <stdio.h>

const int MAXIMUM = 100;

void readFileName(char *fn) {
  printf("Please enter the name of the input file ");
  fgets(fn, MAXIMUM, stdin);
  strip(fn);

} // end readFileName

FILE *openInputFile(char *fn) // will ensure the file is opened. If not reprompt
                              // by calling readFileName
{
  FILE *fin = NULL;
  fin = fopen(fn, "r");
  return fin;

} // end openInputFile

void strip(char *array) {
  int len = strlen(array);
  int x = 0;

  while (x < len) {
    if (array[x] == '\r')
      array[x] = '\0';

    else if (array[x] == '\n')
      array[x] = '\0';

    x++;
  } // end while

} // end strip
