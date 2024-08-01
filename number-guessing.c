#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  const int MIN = 1;
  const int MAX = 100;
  int guess;
  int guesses;
  int answer;

  // uses the current time as a seed to generate some random numbers
  srand(time(0));

  // generate a random number between MIN and MAX
  answer = (rand() % MAX) + MIN;

  do {
    printf("Enter a guess: ");
    scanf("%d", &guess);

    if (guess > answer) {
      printf("Too high!\n");
    } else if (guess < answer) {
      printf("Too low!\n");
    } else {
      printf("Correct!\n");
    }

    guesses++;

  } while (guess != answer);

  printf("************************\n");
  printf("Answer: %d\n", answer);
  printf("Guesses: %d\n", guesses);
  printf("************************");

  return 0;
}