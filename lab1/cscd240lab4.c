#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void printOddEvenZeros(int n);
bool isPrime(int n);
void printPrimes(int n);

int main(void) {
  int MENU_OPTION;
  int n;

  do {
    printf("--------------\n");
    printf("1. Enter a new positive integer.\n");
    printf("2. Print the number of odd digits, even digits, and zeros in the "
           "integer.\n");
    printf(
        "3. Print the prime numbers between 2 and the integer (inclusive)\n");
    printf("4. Quit the program.\n");
    printf("--------------\n");
    printf("Please select an option 1 -4.\n");
    scanf("%d", &MENU_OPTION);

    switch (MENU_OPTION) {
    case 1:
      printf("Please enter an integer: ");
      scanf("%d", &n);
      break;
    case 2:
      printOddEvenZeros(n);
      break;
    case 3:
      printPrimes(n);
      break;
    default:
      break;
    }
  } while (MENU_OPTION != 4);
}

void printOddEvenZeros(int n) {
  int e = 0, o = 0, z = 0;
  char *nString;
  sprintf(nString, "%d", n);    // store number as string in nString
  int length = strlen(nString); // store string length

  for (int i = 0; i < length; i++) {
    int number = nString[i] - '0'; // allows us to use the int value
    if (number % 2 == 0 && number != 0) {
      e++;
    } else if (number % 2 != 0) { // same thing here
      o++;
    } else {
      z++;
    }
  }
  printf("The number %d has %d even numbers, %d odd numbers, and %d zeros.\n",
         n, e, o, z);
}

bool isPrime(int n) {
  // we do not need extra checks since we use this function later in a loop
  // starting at 2.
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void printPrimes(int n) {
  printf("Prime numbers: ");
  for (int i = 2; i <= n; i++) {
    if (isPrime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");
}
