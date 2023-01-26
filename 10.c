#include <stdio.h>

int main() {
    int total_rows = 7; // Total number of rows in the pattern
    int i, j, k; 
    // i will be used to iterate through the rows 
    // j will be used to print the spaces 
    // k will be used to print the stars 

    for (i = 1; i <= total_rows; i++) {
        if (i <= total_rows / 2 + 1) {
            /* 
            In the upper half of the pattern, 
            the number of spaces is decreasing while the number of stars is increasing.
            */
            for (j = 1; j <= total_rows / 2 + 1 - i; j++) {
                printf(" "); //print spaces
            }
            for (k = 1; k <= 2 * i - 1; k++) {
                printf("*"); //print stars
            }
        } else {
            /* 
            In the lower half of the pattern,
            the number of spaces is increasing while the number of stars is decreasing.
            */
            for (j = 1; j <= i - total_rows / 2 - 1; j++) {
                printf(" "); //print spaces
            }
            for (k = 1; k <= 2 * (total_rows - i + 1) - 1; k++) {
                printf("*"); //print stars
            }
        }
        printf("\n"); //move to the next row
    }
    return 0;
}

