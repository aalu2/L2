#include <stdio.h>

int main(){
    // Declaring two variables to store the numbers
    int var1, var2;
    
    // Prompting the user to enter two numbers
    printf("Please enter two integers: ");
    // Using scanf to store the user input in the variables var1 and var2
    scanf("%d %d", &var1, &var2);

    // Using arithmetic operators to swap the values of the two numbers
    // Adding the two numbers and storing the result in var1
    // This does not cause overflow as we are working with integers
    var1 = var1 + var2;
    // Subtracting var2 from var1 and storing the result in var2
    // This results in var2 holding the value of var1
    var2 = var1 - var2;
    // Subtracting var2 from var1 and storing the result in var1
    // This results in var1 holding the value of var2
    var1 = var1 - var2;

    // Printing the swapped numbers
    printf("The swapped integers are: %d and %d\n", var1, var2);

    // Return 0 to indicate successful completion of the program
    return 0;
}
