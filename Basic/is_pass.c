/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/




#include<stdio.h>
int main(){
    float mark1, mark2, mark3,total_percentage;

    // Taking input from the user

    printf("Enter mark for subject1:\n");
    scanf("%f", &mark1);
    printf("Enter mark for subject2:\n");
    scanf("%f", &mark2);
    printf("Enter mark for subject3:\n");
    scanf("%f", &mark3);

    total_percentage=(mark1+mark2+mark3)/3;


    if (mark1>=33 && mark2>=33 && mark3>=33 &&  total_percentage>= 40){
        printf("You passed the exam!!\n");
    }else{
        printf("You failed!!\n");
    }

    return 0 ;

}