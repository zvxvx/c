#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int readTotal() {
  int input;
  do {
    printf("Please enter a number 1-25: ");
    scanf("%d", &input);
    if (input == 999) {
      printf("Goodbye!\n");
      break;
    }
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
  printf("Unsorted array: ");
  arrayPrinter(total, array);
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
  printf("Sorted array: ");
  arrayPrinter(total, array);
}

double calcMean(int total, int *array) {
  int sum = 0;
  for (int i = 0; i < total; i++) {
    sum += array[i];
  }
  return (double)sum / total;
}

double calcMedian(int *array, int total) {
  if (total % 2 == 0) {
    int indexOne = total / 2;
    int indexTwo = indexOne - 1;
    return (double)((array[indexOne] + array[indexTwo]) / 2);
  } else {
    int middleIndex = total / 2;
    return (double)array[middleIndex];
  }
}

void displayResults(double mean, double median) {
  printf("The mean of the array %f and the median is %f.\n", mean, median);
}
// 1 2 3 4 5 6
// 0 1 2 3 4 5
//-----|-|
// add those two values and divide by 2 to get median