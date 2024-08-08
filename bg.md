**Makning an#include <stdio.h>
dsflgn
int main() {
    int num, i = 2, isPrime = 1;

    // Asking for the input
    printf("Enter your desired number:\n");
    scanf("%d", &num);

    // If num is less than 1 then it isn't prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Now check for num 2 and above till (n-1)
        do {
            if (num % i == 0) { // Check if num is divisible by i
                isPrime = 0;
                break;
            }
            i++; // Increment i for the next iteration
        } while (i < num);
    }

    // Printing the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
} isprime cdoe:

1.if num<=1:
