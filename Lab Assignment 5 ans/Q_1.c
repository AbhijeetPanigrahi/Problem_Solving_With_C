/*
PROBLEM: Verify a 12-digit UPC code by calculating its check digit and comparing it to the provided check digit.

ANALYSIS:
1. Calculate the sum of the digits in the odd-numbered positions and multiply this sum by 3.
2. Calculate the sum of the digits in the even-numbered positions and add this to the previous result.
3. If the last digit of the result from step 2 is 0, then 0 is the check digit. Otherwise, subtract the last digit from 10 to calculate the check digit.
4. Compare the calculated check digit to the final digit of the UPC.

DATA REQUIREMENTS:
Problem Inputs:
- int upc[12]: Array of integers representing the 12-digit UPC code

Problem Outputs:
- Validation message indicating whether the UPC is correct or not

DESIGN:
1. Get the 12-digit UPC code from the user.
2. Calculate the check digit using the described algorithm.
3. Compare the calculated check digit to the provided check digit and print the result.

IMPLEMENTATION:
*/

#include <stdio.h>

void verify_upc(int upc[12]) {
    int odd_sum = 0, even_sum = 0, total_sum, check_digit, i;

    // Step 1: Sum of odd-positioned digits (1st, 3rd, ..., 11th) multiplied by 3
    for (i = 0; i < 11; i += 2) {
        odd_sum += upc[i];
    }
    odd_sum *= 3;

    // Step 2: Sum of even-positioned digits (2nd, 4th, ..., 10th) added to the previous result
    for (i = 1; i < 11; i += 2) {
        even_sum += upc[i];
    }
    total_sum = odd_sum + even_sum;

    // Step 3: Calculate the check digit
    check_digit = (10 - total_sum % 10) % 10;

    // Step 4: Compare the check digit with the final digit of the UPC
    if (check_digit == upc[11]) {
        printf("%d%d%d%d%d%d%d%d%d%d%d%d validated.\n", upc[0], upc[1], upc[2], upc[3], upc[4], upc[5], upc[6], upc[7], upc[8], upc[9], upc[10], upc[11]);
    } else {
        printf("%d%d%d%d%d%d%d%d%d%d%d%d error in barcode.\n", upc[0], upc[1], upc[2], upc[3], upc[4], upc[5], upc[6], upc[7], upc[8], upc[9], upc[10], upc[11]);
    }

    printf("Step 1 result: %d\n", odd_sum);
    printf("Step 2 result: %d\n", total_sum);
}

int main() {
    int barcodes[4][12] = {
        {0, 7, 9, 4, 0, 0, 8, 0, 4, 5, 0, 1},
        {0, 2, 4, 0, 0, 0, 1, 6, 2, 8, 6, 0},
        {0, 1, 1, 1, 1, 0, 8, 5, 6, 8, 0, 7},
        {0, 5, 1, 0, 0, 0, 1, 3, 8, 1, 0, 1}
    };

    for (int i = 0; i < 4; i++) {
        verify_upc(barcodes[i]);
    }

    return 0;
}
