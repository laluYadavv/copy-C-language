/* This is the Basic Syntax of C language for Functions */
/* 
#include <stdio.h>
// Function prototype
void display();
int main() {
int a; // Variable declaration
display(); // Function call
return 0; // Return statement
}
// Function definition
void display() {
printf("hi i am display\n"); // Printing the message
}
 */


/* #include <stdio.h>

int main(void) {
    printf("Hello world\n");
    return 0;
}
 */

#include <stdio.h>

void display();

int main() {
    
    int  a;
    display();
    return 0;
}

void display(){
    printf("Hi i am divyans_htiwari!!\n");
}