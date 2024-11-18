#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char name[64];
  int age;
};

/*
  * @brief Create a person.
  * @param name The name of the person.
  * @param age The age of the person.
  * @return A pointer to the person.
  */
struct Person *create_person(char name[], int age) {
  struct Person *person = malloc(sizeof(struct Person));
  strcpy(person->name, name);
  person->age = age;
  return person;
}

int main() {
  // Create a person.
  struct Person *person = create_person("John", 30);
  // Print the person's name and age.
  printf("Name: %s\n", person->name);
  printf("Age: %d\n", person->age);

  free(person);
}