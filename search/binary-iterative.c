#include <stdio.h>

long binary_search(long a[], long n, long q) {
  long start = 0;
  long end = n - 1;
  while (start <= end) {
    long mid = (start + end) / 2;
    if (a[mid] == q) {
      return mid;
    }
    if (q < a[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return -1;
}

int main() {
  long a[] = {1, 5, 6, 23, 61, 75, 96, 120};
  long len = sizeof(a) / sizeof(a[0]);
  long q = 6;

  long found = binary_search(a, len , q);
  printf("%ld", found);
}