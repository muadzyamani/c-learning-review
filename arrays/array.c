#include <stdio.h>

int main() {
  double prices[] = { 9.99, 19.99, 29.99, 39.99 };

  printf("%d bytes\n", sizeof(prices));
  printf("%d byte\n", sizeof(prices[0]));
  printf("%d elements\n", sizeof(prices) / sizeof(prices[0]));

  int lengthOfPricesArray = sizeof(prices) / sizeof(prices[0]);
  
  for (int i = 0; i < lengthOfPricesArray; i++) {
    printf("$%.2lf\n", prices[i]);
  }
  

  return 0;
}