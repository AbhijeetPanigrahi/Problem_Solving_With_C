/*
PROBLEM: Write a function that removes all blanks from a string.

ANALYSIS:
1. Take a string as input and create an output string without blanks.
2. Iterate through the input string and copy non-blank characters to the output string.

DATA REQUIREMENTS:
Problem Inputs:
- char input[]: Input string with blanks

Problem Outputs:
- char output[]: Output string without blanks

DESIGN:
1. Iterate through the input string.
2. Copy non-blank characters to the output string.
3. Null-terminate the output string.

IMPLEMENTATION:
*/

#include <stdio.h>
#include <string.h>

void deblank(char output[], const char input[]) {
    int j = 0;
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] != ' ') {
            output[j] = input[i];
            j++;
        }
    }
    output[j] = '\0'; // Null-terminate the output string
}

int main() {
    char input[] = "Hello World";
    char output[50];

    deblank(output, input);
    printf("Deblanked string: %s\n", output);

    return 0;
}
