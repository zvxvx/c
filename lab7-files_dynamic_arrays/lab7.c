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
  fscanf(fin, "%d", &days);
  return days;
}

int *fillArray(int total, FILE *fin) {
  int *temp = NULL;

  return temp;
}

void displayMaxTemp(int *array, int total) {}

void displayMinTemp(int *array, int total) {}

void displayAvgTemp(int *array, int total) {}

void displayMedianTemp(int *array, int total) {}

void cleanUp(int *array) {}

void printArray(int *array, int total) {
  int x;
  printf("[");
  for (x = 0; x < total - 1; x++)
    printf("%d, ", array[x]);

  printf("%d]\n", array[total - 1]);
}
