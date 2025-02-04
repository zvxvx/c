#include <stdio.h>

int main(void) {
  int MENU_OPTION;
  int n;
  do {
    printf("--------------");
    printf("1. Enter a new positive integer.");
    printf("2. Print the number of odd digits, even digits, and zeros in the "
           "integer.");
    printf("3. Print the prime numbers between 2 and the integer (inclusive)");
    printf("4. Quit the program.");
    printf("--------------");
    printf("Please select an option 1 -4.");
    scanf("%d", &MENU_OPTION);

    switch (MENU_OPTION) {
    case 1:
      scanf("%d", &n);
      break;
    }
  } while (MENU_OPTION != 4);
}
