/* Pointers can be passed to functions to modify the original variable's value.Pointers can be passed to functions to modify the original variable's value. */

#include <stdio.h>

void increment (int *p){
    (*p)++;
}

int main() {
    int x=5 ;
    printf("The value of x before increment is %d\n", x);
    increment(&x);

    printf("The value of x after increment is %d\n", x);

    return 0;
}
