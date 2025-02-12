#ifndef LAB5_H
#define LAB5_H

extern const int MAX;

int readTotal(void);
void fillArray(int total, int *array);
void selectionSort(int *array, int total);
double calcMean(int total, int *array);
double calcMedian(int *array, int total);
void displayResults(double mean, double median);

#endif
