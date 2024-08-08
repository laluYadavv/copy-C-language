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

    int main(){
        // Initialize the Random number generator
        srand(time(0));

        // Generator Random num from 1 to 100
        int radomNumber=(rand()%100)+1;//By deafult it generate num between 0 to 1k that's why we are doing this step
        int no_of_guesses=0;
        int guessed;

        // Print the random number
        // printf("Random Number: %d\n", randomNumber);

        do
        {
            printf("Guess the number");
            scanf("%d",&guessed);
            if (guessed>radomNumber){
                printf("Lower number please!\n");
            }else{
                printf("Higher number please!\n");
            }
            no_of_guesses++;

        } while (guessed!=radomNumber);//We aren't using the while at all

        printf("Congurlations!!\n");

        printf("You guessed the number in %d guesses", no_of_guesses);
        

    return 0;
    }

