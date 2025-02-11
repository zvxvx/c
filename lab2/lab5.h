#ifndef LAB5_H
#define LAB5_H

extern const int MAX;

int readTotal();
void fillArray(int total, int *array);
void selectionSort(int *array, int total);
int calcMean(int total, int *array);
int calcMedian(int *array, int total);
void displayResults(int mean, int median);

#endif
