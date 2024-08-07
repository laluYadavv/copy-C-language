/* We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
Hint: Use loop & use a random number generator. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Initialize random number generator
    int numberToGuess = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess, numberOfTries = 0;

    printf("Welcome to the number guessing game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        numberOfTries++;

        if (guess < numberToGuess) {
            printf("Higher number please!\n");
        } else if (guess > numberToGuess) {
            printf("Lower number please!\n");
        }
    } while (guess != numberToGuess);

    printf(" Congratulations! You found the number in %d tries.\n", numberOfTries);

    return 0;
}