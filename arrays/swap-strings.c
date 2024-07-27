#include <stdio.h>
#include <string.h>

int main() {
  char x[15] = "water";
  char y[15] = "milk";

  printf("Initial x: %s, y: %s\n", x, y);

  char temp[15];

  strcpy(temp, x);
  strcpy(x, y);
  strcpy(y, temp);

  printf("Swapped x: %s, y: %s\n", x, y);


  return 0;
}