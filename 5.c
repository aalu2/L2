#include <stdio.h>

int main() {
    int inputNum; // Declare a variable to hold the input number
    printf("Enter a number: "); // Ask user to enter a number
    scanf("%d", &inputNum); // Store the input number in the variable

    /*
    Use bitwise operator to check if the input number is even or odd
    If the last bit of the number is set (1), it is an odd number,
    otherwise it is an even number
    */
    if (inputNum & 1) {
        printf("%d is an odd number.\n", inputNum);
    } else {
        printf("%d is an even number.\n", inputNum);
    }
    return 0; // Exit the program
}
