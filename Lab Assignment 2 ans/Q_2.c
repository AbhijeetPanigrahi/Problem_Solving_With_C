#include <stdio.h>

// Function to display the bread-making process for White bread
void processWhiteBread(int isDouble, int isManual) {
    printf("Primary kneading: 15 minutes\n");
    printf("Primary rising: 60 minutes\n");
    printf("Secondary kneading: 18 minutes\n");
    printf("Secondary rising: 20 minutes\n");
    printf("Loaf shaping: 2 seconds\n");

    if (isManual) {
        printf("Manual baking selected. Please remove the dough after loaf shaping.\n");
        return;
    }

    printf("Final rising: 75 minutes\n");

    // Baking time adjustment for double loaf size
    int bakingTime = 45;
    if (isDouble) {
        bakingTime = bakingTime * 1.5;
    }
    printf("Baking: %d minutes\n", bakingTime);
    printf("Cooling: 30 minutes\n");
}

// Function to display the bread-making process for Sweet bread
void processSweetBread(int isDouble, int isManual) {
    printf("Primary kneading: 20 minutes\n");
    printf("Primary rising: 60 minutes\n");
    printf("Secondary kneading: 33 minutes\n");
    printf("Secondary rising: 30 minutes\n");
    printf("Loaf shaping: 2 seconds\n");

    if (isManual) {
        printf("Manual baking selected. Please remove the dough after loaf shaping.\n");
        return;
    }

    printf("Final rising: 75 minutes\n");

    // Baking time adjustment for double loaf size
    int bakingTime = 35;
    if (isDouble) {
        bakingTime = bakingTime * 1.5;
    }
    printf("Baking: %d minutes\n", bakingTime);
    printf("Cooling: 30 minutes\n");
}

// Main function to take user inputs and control the flow
int main() {
    char bread_type, loaf_size, baking_method;
    int isDouble = 0, isManual = 0;

    printf("Enter the type of bread (W for White, S for Sweet): ");
    scanf(" %c", &bread_type); // Step 1: Read bread type

    printf("Is the loaf size double? (Y for Yes, N for No): ");
    scanf(" %c", &loaf_size); // Step 2: Read loaf size
    if (loaf_size == 'Y' || loaf_size == 'y') {
        isDouble = 1;
    }

    printf("Is the baking manual? (M for Manual, A for Automatic): ");
    scanf(" %c", &baking_method); // Step 3: Read baking method
    if (baking_method == 'M' || baking_method == 'm') {
        isManual = 1;
    }

    // Step 4: Process based on bread type
    if (bread_type == 'W' || bread_type == 'w') {
        processWhiteBread(isDouble, isManual); // Process White bread
    } else if (bread_type == 'S' || bread_type == 's') {
        processSweetBread(isDouble, isManual); // Process Sweet bread
    } else {
        printf("Invalid bread type.\n");
    }

    return 0;
}
