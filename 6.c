
#include <stdio.h>

int main() {
    int original_data; // Declare a variable to store the original data
    printf("Enter an integer: ");
    scanf("%d", &original_data); // Read the original data from user

    int shifted_data = original_data * 8; // Multiply the original data by 2^3 to shift it to left by 3 bits

    printf("Shifted data: %d\n", shifted_data); // Print the shifted data

    return 0;
}

