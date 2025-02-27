#include <stdio.h>
#include <stdlib.h>

void printNumbers(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int* addToArray(int* arr, int* size, int value) {
  int* newArr = malloc((*size + 1) * sizeof(int));
  if (newArr == NULL) {
    printf("Memory allocation failed\n");
    return arr;
  }
  for (int i = 0; i < *size; i++) {
    newArr[i] = arr[i];
  }
  newArr[*size] = value;
  (*size)++;
  return newArr;
}

int main() {
  int* numbers = calloc(5, sizeof(int));
  if (numbers == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }
  int size = 5;
  // Initializing the array
  for (int i = 0; i < size; i++) {
    numbers[i] = i * 10;
  }
  printNumbers(numbers, size);
  // Adding a new number to the array
  numbers = addToArray(numbers, &size, 55);
  printNumbers(numbers, size);
  return 0;
}