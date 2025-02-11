#include "lab5.h"

int main(void) {
  int total, array[MAX], value;
  double mean, median;
  total = readTotal();
  while (total != 999) {
    fillArray(total, array);
    selectionSort(array, total);
    mean = calcMean(total, array);
    median = calcMedian(array, total);
    displayResults(mean, median);
    total = readTotal();
  }
  return 0;
}