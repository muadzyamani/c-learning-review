#include <stdio.h>

void change_x(long **q) {
  **q = 10;
}

int main() {
  long x = 5;
  long *p;
  long **q;
  p = &x;
  q = &p;

  change_x(q);
  printf("%ld\n", *p);
  printf("%ld\n", x);

}