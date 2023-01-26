
#include <stdio.h>

int main() {
    char user_input; // Declare a variable to store the input from user
    printf("Enter m for Monday, t for Tuesday, w for Wednesday, h for Thursday, f for Friday, s for Saturday, u for Sunday: ");
    scanf(" %c", &user_input); // Read the input from user

    if(user_input == 'm') // Check if input is 'm'
        printf("Monday\n"); // Print Monday if the input is 'm'
    else if(user_input == 't') // Check if input is 't'
        printf("Tuesday\n"); // Print Tuesday if the input is 't'
    else if(user_input == 'w') // Check if input is 'w'
        printf("Wednesday\n"); // Print Wednesday if the input is 'w'
    else if(user_input == 'h') // Check if input is 'h'
        printf("Thursday\n"); // Print Thursday if the input is 'h'
    else if(user_input == 'f') // Check if input is 'f'
        printf("Friday\n"); // Print Friday if the input is 'f'
    else if(user_input == 's') // Check if input is 's'
        printf("Saturday\n"); // Print Saturday if the input is 's'
    else if(user_input == 'u') // Check if input is 'u'
        printf("Sunday\n"); // Print Sunday if the input is 'u'
    else // If input is none of the above
        printf("Invalid input\n"); // Print Invalid input

    return 0;
}

