#include <stdio.h>


// Recursive function to reverse the digits of a given number
void reverseNumber(long originalNum) {
    // base case: when the number is 0, return
    if (originalNum == 0) {
        return;
    }
    // print the last digit of the number
    printf("%ld", originalNum % 10);
    // call the function again with the number divided by 10
    // to remove the last digit
    reverseNumber(originalNum / 10);
}

int main() {
    long inputNum;
    // prompt user to enter a number
    printf("Enter a number: ");
    scanf("%ld", &inputNum);
    printf("The reversed number is: ");
    // call the function to reverse the digits of the number
    reverseNumber(inputNum);
    return 0;
}
