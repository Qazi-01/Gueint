#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("__________________________________\n");
    printf("\n");
    printf("              GUEINT\n");
    printf("__________________________________\n");
    printf("\n");
    printf("You have 7 chances to guess the\nnumber(1-100), make them count!\n");

    int secret;
    srand(time(NULL));
    secret = (rand() % 100) + 1;

    int guess;
    int irtn;
    int ch;
    for (int i = 0; i < 7; i++) {
        irtn = 0;
        while (irtn != 1) {
            printf("Guess the number(%d/7): ", i + 1);
            irtn = scanf("%d", &guess);

            if (irtn != 1) {
                while ((ch = getchar()) != '\n' && ch != EOF) {
                }
            }
            else {
                break;
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