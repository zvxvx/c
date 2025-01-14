#include <stdio.h>

int main(void) {
  int i;
  int *p = &i;
  for (int i = 0; i < 10; i++) {
    printf("Hi\n.");
  }
  printf("i's address is %p\n", p);
}
