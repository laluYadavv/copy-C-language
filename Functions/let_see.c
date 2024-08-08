/* What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++); */

#include <stdio.h>

int main() {
    int a=4;

/* 
1. First it will just print the a.
2. Second it will first add one two times bcoz their is ++ before a then print a (1+1+a(4)).
3.Third it will print 4 then add one twice.
 */

    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}
