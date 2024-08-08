/* Write a program using function to find average of three numbers. */

#include <stdio.h>

int sum_of_three(int a, int b, int c){
    
    return a+b+c;
}

int main() {
    int result=sum_of_three(1,1,1);
    printf("%d\n    ",result);
    return 0;
}
