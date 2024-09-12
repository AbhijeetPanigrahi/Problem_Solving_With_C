/*
PROBLEM: Calculate the time required to cut the grass in a rectangular yard, excluding the area occupied by a rectangular house.
ANALYSIS: To solve this problem, we need to calculate the area of the yard and the area of the house, subtract the area of the house from the area of the yard to get the area of the grass, and then calculate the time required to cut the grass at a rate of 2 square feet per second.

FORMULA:
yard_area = yard_length * yard_width
house_area = house_length * house_width
grass_area = yard_area - house_area
time_to_cut_grass = grass_area / 2 (since 2 square feet per second)

DATA REQUIREMENTS:
Problem Inputs:
double yard_length, yard_width;  // Dimensions of the yard
double house_length, house_width;  // Dimensions of the house

Problem Outputs:
double time_to_cut_grass;  // Time required to cut the grass (in seconds)

DESIGN:
INITIAL ALGORITHM:
Step1. Read the length and width of the yard from the user.
Step2. Read the length and width of the house from the user.
Step3. Calculate the area of the yard: yard_area = yard_length * yard_width.
Step4. Calculate the area of the house: house_area = house_length * house_width.
Step5. Calculate the grass area by subtracting the house area from the yard area.
Step6. Calculate the time to cut the grass at a rate of 2 square feet per second.
Step7. Display the time required to cut the grass.

IMPLEMENTATION:
*/

#include <stdio.h>

int main() {
    // Variables for yard and house dimensions
    double yard_length, yard_width, house_length, house_width;
    double yard_area, house_area, grass_area, time_to_cut_grass;

    // Input: Get the dimensions of the yard from the user
    printf("Enter the length of the yard (in feet): ");  // Step 1
    scanf("%lf", &yard_length);

    printf("Enter the width of the yard (in feet): ");  // Step 1
    scanf("%lf", &yard_width);

    // Input: Get the dimensions of the house from the user
    printf("Enter the length of the house (in feet): ");  // Step 2
    scanf("%lf", &house_length);

    printf("Enter the width of the house (in feet): ");  // Step 2
    scanf("%lf", &house_width);

    // Calculate the area of the yard and the house
    yard_area = yard_length * yard_width;  // Step 3
    house_area = house_length * house_width;  // Step 4

    // Calculate the area of the grass
    grass_area = yard_area - house_area;  // Step 5

    // Calculate the time required to cut the grass (2 square feet per second)
    time_to_cut_grass = grass_area / 2;  // Step 6

    // Output: Display the time required to cut the grass
    printf("Time required to cut the grass: %.2f seconds\n", time_to_cut_grass);  // Step 7

    return 0;
}


/*
Enter the length of the yard (in feet): 100
Enter the width of the yard (in feet): 50
Enter the length of the house (in feet): 30
Enter the width of the house (in feet): 20
Time required to cut the grass: 1700.00 seconds
*/