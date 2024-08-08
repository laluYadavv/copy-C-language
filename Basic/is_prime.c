/* Write a program to check whether a given number is prime or not using loops. */

/* #include <stdio.h>

int main() {
    int num,i, isPrime=1;

    // Asking for the input
    printf("Enter you desire num:\n");
    scanf("%d", &num);

    // If num is less then 1 then it isn't prime 
    if(num<=1){
        isPrime=0;
    }else{
        // Now check for num 2 and above till (n-1)
        for(i=2; i<num; i++){
            if(num%2==0){
                isPrime=0;// If num is divisible by i, it's not prime
                break;// No need to check further
            }
        }
        
    }

    // Printing the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
} */


// Now same code using while loop:

/* #include <stdio.h>

int main() {
    int num,i=2, isPrime=1;

    // Asking for the input
    printf("Enter your desire num:\n");
    scanf("%d",&num);

    // If num is less then 1 then it isn't prime 
    if(num<=1){
        isPrime=0;
    }else{
        // Now check for num 2 and above till (n-1)
        while (i<num){
            if (num%i==0){// Check if num is divisible by i
                isPrime=0;
                break;
            }
            i++;// Increment i for the next iteration
        }
    
    }
      // Printing the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

 */

// Now same thing usign do-while loop:

#include <stdio.h>

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
}


/* Happy Coding !!

 From Divyansh Btech CS 2nd year!!

 */