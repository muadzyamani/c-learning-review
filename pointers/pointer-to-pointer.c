#include <stdio.h>

int main() {
  int x = 5;
  int *p;
  p = &x;

  printf("%ld\n", p);
  printf("%ld\n", x);
  printf("%ld\n", *p);
}