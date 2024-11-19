#include <stdio.h>

typedef struct box {
  int x;
} box;

void modify(box *b) {
  b->x = 2;
}

void modify_again(box b) {
  b.x = 3;
}

struct box modify_some_more(box b) {
  b.x = 4;
  return b;
}

int main() {
  box a;
  a.x = 1;
  
  modify(&a);
  printf("%ld\n", a.x);
  modify_again(a);
  printf("%ld\n", a.x);
  a = modify_some_more(a);
  printf("%ld\n", a.x);
}