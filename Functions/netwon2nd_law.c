/* Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s 2 . */

#include <stdio.h>

int force(int mass){
    return mass*9.8;
}

int main() {
    int mass;
    printf("Enter the mass of the body in kg:\n");
    scanf("%d", &mass);


    int result= force(mass);
    printf("The force acting on the body is %.2f N\n", result*1.0);//We divided the result to "1.0" to convert our int value to float.
    return 0;
}
