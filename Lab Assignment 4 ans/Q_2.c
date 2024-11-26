/* 
PROBLEM: Determine the following information about each value in a list of positive integers.
a. Is the value a multiple of 7, 11, or 13?
b. Is the sum of the digits odd or even?
c. Is the value a prime number?

ANALYSIS:
The program should take a list of positive integers and determine if each value is a multiple of 7, 11, or 13, if the sum of the digits is odd or even, and if the value is a prime number.

DATA REQUIREMENTS:
Problem Inputs:
- int value: A positive integer

Problem Outputs:
- int is_multiple: 1 if the value is a multiple of 7, 11, or 13, 0 otherwise
- int is_sum_odd: 1 if the sum of the digits is odd, 0 if even
- int is_prime: 1 if the value is a prime number, 0 otherwise

DESIGN:
1. Prompt the user to enter a positive integer.
2. For each value entered:
   a. Check if the value is a multiple of 7, 11, or 13.
   b. Check if the sum of the digits is odd or even.
   c. Check if the value is a prime number.
3. Display the results for each value.
4. Repeat steps 1 to 3 until the user chooses to stop.

IMPLEMENTATION:
*/

#include <stdio.h>

// Function to check if a value is a multiple of 7, 11, or 13
void check_multiple(int value, int *is_multiple) {
    *is_multiple = (value % 7 == 0 || value % 11 == 0 || value % 13 == 0);
}

// Function to check if the sum of the digits is odd or even
void check_sum_odd(int value, int *is_sum_odd) {
    int sum = 0;
    while (value > 0) {
        sum += value % 10;
        value /= 10;
    }
    *is_sum_odd = (sum % 2 != 0);
}

// Function to check if a value is a prime number
void check_prime(int value, int *is_prime) {
    if (value <= 1) {
        *is_prime = 0;
        return;
    }
    for (int i = 2; i <= value / 2; i++) {
        if (value % i == 0) {
            *is_prime = 0;
            return;
        }
    }
    *is_prime = 1;
}

int main() {
    int value;
    int is_multiple, is_sum_odd, is_prime;

    while (1) {
        // Prompt the user to enter a positive integer
        printf("Enter a positive integer (or -1 to stop): ");
        scanf("%d", &value);
        if (value == -1) {
            break;
        }

        // Check the conditions using pointers
        check_multiple(value, &is_multiple);
        check_sum_odd(value, &is_sum_odd);
        check_prime(value, &is_prime);

        // Display the results for the entered value
        printf("Value: %d\n", value);
        printf("Multiple of 7, 11, or 13: %s\n", is_multiple ? "Yes" : "No");
        printf("Sum of digits is odd: %s\n", is_sum_odd ? "Yes" : "No");
        printf("Prime number: %s\n", is_prime ? "Yes" : "No");
        printf("\n");
    }

    return 0;
}
