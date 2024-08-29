/* Pointers can be used to navigate through memory. Pointer arithmetic is useful when dealing with arrays. */

#include <stdio.h>

int main() {
    int arr[5]= {10, 20, 30, 40, 50};
    int *p= arr;

    for (int i=0; i<5; i++){
         printf("Value at arr[%d]: %d\n", i, *(p + i));
    }

}
