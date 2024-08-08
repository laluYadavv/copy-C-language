/* Write a program to calculate the factorial of a given number using a for loop. */


// Using for loop:

/* #include <stdio.h>

int main() {
    int num,i , factorial=1;

    printf("Enter your desire num:\n");
    scanf("%d",&num);
    
    for(i=1;i<=num; i++){
    factorial=factorial*i;
    }
    printf("The factorial of giving num is %d\n",factorial);
    return 0;
}
 */

// Using while loop:

#include <stdio.h>

int main() {
    int i=1,num,factorial=1;

    printf("Enter your desire num:\n");
    scanf("%d",&num);

    while (i<=num)
    {
        factorial=factorial*i;
        i++;
    }
    printf("The factorial of giving num is %d\n", factorial);
    
    return 0;
}
