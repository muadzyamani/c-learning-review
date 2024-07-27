#include <stdio.h>
#include <string.h>

int main() {
  char cars[][10] = {"Volvo", "BMW", "Ford", "Mazda"};

  int numberOfCars = sizeof(cars) / sizeof(cars[0]);

  for (int i = 0; i < numberOfCars; i++) {
    printf("%s\n", cars[i]);
  }

  printf("---\n");

  // Change 'Volvo' to 'Toyota'
  strcpy(cars[0], "Toyota");

  for(int j = 0; j < numberOfCars; j++) {
    printf("%s\n", cars[j]);
  }

  return 0;
}