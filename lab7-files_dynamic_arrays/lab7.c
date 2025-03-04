#include "lab7.h"
#include <stdio.h>

extern const int MAX;

int menu() {
  int choice;
  do {
    printf("Please enter a menu choice\n");
    printf("1) Display Max Temp\n");
    printf("2) Display Min Temp\n");
    printf("3) Display Average Temp\n");
    printf("4) Display Median Temp\n");
    printf("5) Fill an array by reading from a new file\n");
    printf("6) Quit\n");
    printf("Choice --> ");
    scanf("%d", &choice);
  } while (choice < 1 || choice > 6);

  return choice;
}

int readDays(FILE *fin) {
  int days;
  if (fin) {
      fscanf(fin, "%d", &days);
      return days;
  }
  return -1;
}

int* fillArray(int total, FILE *fin) {
  int *numArray = malloc(total * sizeof(int));
  if (numArray == NULL) {
    return NULL;
  }
  int i = 0;
  while (i < total && fscanf(fin, "%d", &numArray[i]) == 1) {
    i++;
  }
  return numArray;
}

void displayMaxTemp(int *array, int total) {
  int MAX = -99999;
  for (int i = 0; i < total; i++) {
    if (array[i] > MAX) {
      MAX = array[i];
    }
  }
  printf("%d\n",MAX);
}

void displayMinTemp(int *array, int total) {
  int MIN = 99999;
  for (int i = 0; i < total; i ++) {
    if (array[i] < MIN) {
      MIN = array[i];
    }
  }
  printf("%d\n", MIN);
}

void displayAvgTemp(int *array, int total) {
  int sum = 0;
  for (int i = 0; i < total; i++) {
    sum += array[i];
  }
  int avg = sum / total;
  printf("%d\n", avg);
}

void displayMedianTemp(int *array, int total) {
  double med;
  if (total % 2 == 0) {
    int mid = array[(total / 2)];
    int midMinusOne = array[((total / 2) - 1)];
    med = ((double)(mid + midMinusOne) / 2);
  } else {
    med = (double) array[(total/2)];
  }
  printf("%.2f\n", med);
}

void cleanUp(int *array) {
  free(array);
}

void printArray(int *array, int total) {
  int x;
  printf("[");
  for (x = 0; x < total - 1; x++)
    printf("%d, ", array[x]);

  printf("%d]\n", array[total - 1]);
}
