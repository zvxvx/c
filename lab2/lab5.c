#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int readTotal() {
  int input;
  do {
    printf("Please enter a number 1-25: ");
    scanf("%d", &input);
  } while (input <= 0 || input > 25);
  return input;
}

void arrayPrinter(int total, int *array) {
  printf("[");
  for (int i = 0; i < total; i++) {
    if (i == total - 1) {
      printf("%d", array[i]);
    } else {
      printf("%d ", array[i]);
    }
  }
  printf("]\n");
}

void fillArray(int total, int *array) {
  int num;
  for (int i = 0; i < total; i++) {
    printf("Enter a number to put in the array: ");
    scanf("%d", &num);
    array[i] = num;
  }
}

void selectionSort(int *array, int total) {
  for (int i = 0; i < total; i++) {
    for (int j = i + 1; j < total; j++) {
      if (array[i] > array[j]) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

// 4 6 8