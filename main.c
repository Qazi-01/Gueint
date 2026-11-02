#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// main function
int main(void) {
    printf("______________________\n");
    printf("\n");
    printf("        GUEINT\n");
    printf("______________________\n");
    printf("\n");

    int secret;
    srand(time(NULL));
    secret = (rand() % 100) + 1;

    int guess;
    for (int i = 0; i < 5; i++) {
        scanf("%i", &guess);

        if (guess > secret) {
            printf("Lower\n");
        }
        else if (guess < secret) {
            printf("Higher\n");
        }
        else {
            printf("You Won!\n");
        }
    }
    // compare ints
    // feedback until correct
    // final result
    return 0;
}