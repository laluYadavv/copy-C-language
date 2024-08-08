/* Write a program using recursion to calculate n th element of Fibonacci series. */

#include <stdio.h>

int fibonacci(int num){
    if(num==0){
        return 0;
    }else if(num==1){
        return 1;
    }else{
    return fibonacci(num-1)+fibonacci(num-2);
    }
}

int main() {
    int num;
    
    printf("Enter your desire num:\n");
    scanf("%d", &num);

    printf("Fibonacci sequence up to %d:\n", num);
    for(int i=0; i<num; i++){
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;

}
