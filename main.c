#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("__________________________________\n");
    printf("\n");
    printf("              GUEINT\n");
    printf("__________________________________\n");
    printf("\n");
    printf("You have 7 chances, make\nthem count!\n");

    int secret;
    srand(time(NULL));
    secret = (rand() % 100) + 1;

    int guess;
    int ch;
    for (int i = 0; i < 7; i++) {
        printf("Guess the secret number(%d/7): ", i + 1);
        scanf("%i", &guess);
        while (guess != 1) {
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
        }

        if (guess > secret) {
            printf("Lower\n");
        }
        else if (guess < secret) {
            printf("Higher\n");
        }
        else {
            printf("You Won!\n");
            return 0;
        }
    }

    printf("You lost :(\n");
    return 0;
}