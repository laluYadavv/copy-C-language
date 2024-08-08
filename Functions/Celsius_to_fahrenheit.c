/* Write a function to convert Celsius temperature into Fahrenheit. */

/* 
Formula to Convert celsius to fahrenheit
F = C×(9/5)+32
*/

 #include <stdio.h>

int temp_converter(int c) {
    return (c * 9 / 5) + 32;
}

int main() {
    int result = temp_converter(100);
    printf("The temperature in Fahrenheit is %d°F\n", result);
    return 0;
}