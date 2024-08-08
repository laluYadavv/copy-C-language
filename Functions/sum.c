#include <stdio.h>

// Function to calculate the sum of two integers
int sum(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int main() {
    // Initialize d by calling the sum function within main
    int d = sum(2, 3);
    
    // Print the result
    printf("The sum of 2 and 3 is: %d\n", d);
    
    return 0;
}