#include <stdio.h> // include the standard input/output header file

int checkLeap(int year) { // function to check if a year is a leap year
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) { // check if the year is divisible by 4 and not divisible by 100 or divisible by 400
        return 1; // return 1 if the year is a leap year
    } else {
        return 0; // return 0 if the year is not a leap year
    }
}

int main() {
    int inYear; // Declare a variable to hold the input year
    printf("Enter a year: "); // Ask user to enter a year
    scanf("%d", &inYear); // Store the input year in the variable

    if(checkLeap(inYear)) { // call the checkLeap function to check if the input year is a leap year
        printf("%d is a leap year.\n", inYear); // print that the input year is a leap year
    } else {
        printf("%d is not a leap year.\n", inYear); // print that the input year is not a leap year
    }

    return 0; // Exit the program
}


