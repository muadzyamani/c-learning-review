#include <stdio.h>

int main() {

  int numbers[3][3];

  numbers[0][0] = 1;
  numbers[0][1] = 2;
  numbers[0][2] = 3;
  numbers[1][0] = 4;
  numbers[1][1] = 5;
  numbers[1][2] = 6;
  numbers[2][0] = 7;
  numbers[2][1] = 8;
  numbers[2][2] = 9;

  int rows = sizeof(numbers) / sizeof(numbers[0]);
  int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

  printf("rows: %d\n", rows);
  printf("columns: %d\n", columns);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }

  /*
  int numbers2[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  for (int k = 0; k < 3; k++) {
    for (int l = 0; l < 3; l++) {
      printf("%d ", numbers2[k][l]);
    }
    printf("\n");
  }
  */

  return 0;
}