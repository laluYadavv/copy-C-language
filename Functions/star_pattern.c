/* Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * * */

#include <stdio.h>

// Function to print the pattern
void printPattern(int n) {
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("* ");
        }
 
        printf("\n");
    }
}

int main() {
    int n;


    printf("Enter the number of lines: ");
    scanf("%d", &n);

 
    printPattern(n);

    return 0;
}