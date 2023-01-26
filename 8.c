#include <stdio.h>

// Function to perform addition of two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

// Function to perform multiplication of two numbers
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function to perform subtraction of two numbers
int subtract(int num1, int num2) {
    return num1 - num2;
}

// Function to perform division of two numbers
int divide(int num1, int num2) {
    return num1 / num2;
}

int main() {
    int first_number, second_number; // Declare variables to store the two numbers entered by the user
    printf("Enter two numbers: ");
    scanf("%d %d", &first_number, &second_number); // Read the two numbers from the user

    char operation_character; // Declare a variable to store the operation character entered by the user
    printf("Enter 1 for sum, 2 for multiplication, 3 for subtraction, 4 for division: ");
    scanf(" %c", &operation_character); // Read the operation character from the user

    int (*operations[256])(int, int) = {NULL}; // Declare an array of function pointers and initialize all elements to NULL
    operations['1'] = add; // Assign the add function to the '+' element of the array
    operations['2'] = multiply; // Assign the multiply function to the '*' element of the array
    operations['3'] = subtract; // Assign the subtract function to the '-' element of the array
    operations['4'] = divide; // Assign the divide function to the '/' element of the array

    int result;
    if (operations[operation_character]) { // Check if the operation character entered by the user is valid
        result = operations[operation_character](first_number, second_number); // Call the function stored in the array using the operation character as an index
        printf("Result=%d\n", result);
    } 
    else {
        printf("Invalid operation\n");
    }
    return 0;
}

