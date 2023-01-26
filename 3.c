#include <stdio.h>

int main() { 
    double x, y, z; // Declaring three variables to store the numbers

    printf("Enter first number: "); 
    scanf("%lf", &x); // Using scanf to store the user input in the variable x

    printf("Enter second number: "); 
    scanf("%lf", &y); // Using scanf to store the user input in the variable y

    printf("Enter third number: "); 
    scanf("%lf", &z); // Using scanf to store the user input in the variable z

    double largest = x; // Assigning the value of x to the variable largest
    /*
    Comparing the value of y and z with the variable largest 
    and assigning the larger number to the variable largest 
    */
    if (y >= largest) {
        largest = y;
    } 
    if (z >= largest) {
        largest = z;
    }

    printf("%.2lf is the largest number.", largest); // Printing the largest number
    return 0; // Exiting the program with a return value of 0 indicating successful execution
}
