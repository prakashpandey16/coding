#include <stdio.h>
#include <string.h>

#define MAX_QUESTIONS 5
#define MAX_OPTIONS 4

int main() {
    char questions[MAX_QUESTIONS][100];
    char options[MAX_QUESTIONS][MAX_OPTIONS][50];
    char answers[MAX_QUESTIONS];
    int score = 0;

    // Input questions, options, and answers
    for (int i = 0; i < MAX_QUESTIONS; i++) {
        printf("Enter question %d: ", i + 1);
        fgets(questions[i], 100, stdin);
        strtok(questions[i], "\n"); // Removing newline character

        for (int j = 0; j < MAX_OPTIONS; j++) {
            printf("Enter option %c: ", 'a' + j);
            fgets(options[i][j], 50, stdin);
            strtok(options[i][j], "\n"); // Removing newline character
        }

        printf("Enter correct answer (a, b, c, etc.): ");
        scanf(" %c", &answers[i]);
        getchar(); // consume newline character
    }

    // Display questions and options, get answers from user
    printf("\n\nWelcome to the Quiz Game!\n\n");
    for (int i = 0; i < MAX_QUESTIONS; i++) {
        printf("Question %d: %s\n", i + 1, questions[i]);
        for (int j = 0; j < MAX_OPTIONS; j++) {
            printf("%c) %s\n", 'a' + j, options[i][j]);
        }
        printf("Your answer: ");
        char answer;
        scanf(" %c", &answer);
        getchar(); // consume newline character

        if (answer == answers[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect!\n");
        }
    }

    // Display final score
    printf("\nYour final score is: %d out of %d\n", score, MAX_QUESTIONS);

    return 0;
}
