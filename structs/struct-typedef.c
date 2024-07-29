#include <stdio.h>
#include <string.h>

typedef struct {
  char name[25];
  char password[12];
  int id;
} User;

int main() {
  // typedef = reserved keyword that gives an existing keyword a "nickname", ususally used in conjunction with struct

  User user1 = {"Hassan", "password123", 123456789};
  User user2 = {"Ali", "123password", 987654321};

  printf("%s, %s, %d\n", user1.name, user1.password, user1.id);
  printf("%s, %s, %d\n", user2.name, user2.password, user2.id);

}