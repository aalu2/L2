#include <stdio.h>

int main() {
    int number; // Declare a variable to store the number entered by the user
    printf("Enter a number: ");
    scanf("%d", &number); // Read the number from the user

    int sum = (number*(number+1))/2; // using sigma operator to calculate the sum of numbers from 1 to entered number
    // formula for the sum of numbers from 1 to n is (n*(n+1))/2
    printf("Sum = %d\n", sum); // Print the final sum

    return 0;
}
