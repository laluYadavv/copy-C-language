#include <stdio.h>

int factorials(int x) {
    int f;
    if (x==0 || x==1){
        return 1;
    }else{
        return x*factorials(x-1);
    }
}
int main(){
    int result=factorials(3);
    printf("Factorial of 3 is %d\n", result);
    return 0;
}

/* 

Happy Coding!!

from, Divyansh_tiwari

 */