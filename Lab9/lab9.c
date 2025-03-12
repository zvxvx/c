#include "lab9.h"

#include <signal.h>

#include "./utils/utils.h"

extern const int MAX;

int menu() {
	int num;
	do {
		printf("Please choose from the following\n");
		printf("1) Sort by Symbol\n");
		printf("2) Sort by Company Name\n");
		printf("3) Sort by Price\n");
		printf("4) Quit\n");
		printf("Choice --> ");
		scanf("%d", &num);
		while (fgetc(stdin) != '\n');
	} while (num < 1 || num > 4);

	return num;
} // end menu


Stock *fillArray(FILE *fin, int total) {
	Stock *array = calloc(total, sizeof(Stock));
	if (fin == NULL) {
		printf("Cannot read from file.");
		return NULL;
	}
	if (array == NULL) {
		printf("Cannot read from array.");
		return NULL;
	}
    for (int i = 0; i < total; i++) {
    	array[i].symbol = calloc(10, sizeof(char));
    	array[i].name = calloc(30, sizeof(char));
	    fscanf(fin, "%s %30[^\n] %lf", array[i].symbol, array[i].name, &array[i]
	    .price);
    }
	return array;
}


void symbolSort(Stock array[], int total) {
    for (int i = 0; i < total - 1; i++) {
	    for (int j = i + 1; j < total; j++) {
		    if (strcmp(array[i].symbol, array[j].symbol) > 0) {
			    struct stock temp = array[i];
		    	array[i] = array[j];
		    	array[j] = temp;
		    }
	    }
    }
}


void printArray(Stock array[], int total) {
	for (int x = 0; x < total; x++)
		printf("%s - %s - $%.2lf\n\n", array[x].name, array[x].symbol,
		       array[x].price);
}


void companySort(Stock array[], int total) {
    for (int i = 0; i < total - 1; i++) {
	    for (int j = i + 1; j < total; j++) {
		    if (strcmp(array[i].name, array[j].name) > 0) {
			    struct stock temp = array[i];
		    	array[i] = array[j];
		    	array[j] = temp;
		    }
	    }
    }
} // end companySort


void priceSort(int total, Stock array[]) {
    for (int i = 0; i < total - 1; i++) {
	    for (int j = i + 1; j < total; j++) {
		    if (array[i].price > array[j].price) {
			    struct stock temp = array[i];
		    	array[i] = array[j];
		    	array[j] = temp;
		    }
	    }
    }
} // end priceSort


void cleanUp(Stock *array, int total) {
	for (int i = 0; i < total; i++) {
	free(array[i].name);
	free(array[i].symbol);
	}
} // end cleanUp
