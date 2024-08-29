#include <stdio.h>

int main() {

    int var =10; //Declaring the var
    int *p= &var; //Declaring the pointer that stores the address of the var


    //Output of the value and address of var
    printf("The value of var is %d\n", var);
    printf("The address of the var is %p\n",(void*)&var); //    While rv "(void*)" u will still get the same result
    printf("The value store in the pointer p is %p\n", (void*)p);
    printf("The value pointed to the pointer p is %d\n",*p);
    return 0;
}
