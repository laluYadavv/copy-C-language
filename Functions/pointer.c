#include<stdio.h>
int add;
int arr[] ={0,1,2,3,4,5,6,7,8,9,};
void getValue(int a){
    printf("The value of a is %d\n",arr[a]);
}
int main(){
    printf("Enter the address of element\n");
    scanf("%d",&add);
    getValue(add);
    return 0;
}