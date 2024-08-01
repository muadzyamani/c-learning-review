#include <stdio.h>
#include <ctype.h>

// Function to clear the input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char questions[][100] = {"1. What year did the C language debut?: ",
                             "2. Who is credited with creating C?: ",
                             "3. What is the predecessor of C?: "};

    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                           "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                           "A. Objective C", "B. B", "C. C++", "D. C#"};

    char answers[3] = {'B', 'A', 'B'};

    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("********************\n");
        printf("%s\n", questions[i]);
        printf("********************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", options[j]);
        }

        printf("Guess: ");
        scanf(" %c", &guess); // Notice the space before %c
        clearInputBuffer(); // Clear the input buffer

        guess = toupper(guess);

        if (guess == answers[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong!\n");
        }
    }

    printf("********************\n");
    printf("Final score: %d/%d\n", score, numberOfQuestions);
    printf("********************\n");

    return 0;
}
