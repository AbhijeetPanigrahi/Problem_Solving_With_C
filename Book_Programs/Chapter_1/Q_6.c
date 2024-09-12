/*
PROBLEM: Predict the score needed on a final exam to achieve a desired grade.
ANALYSIS: To solve this problem, we need to get the desired grade, minimum average required, current average in the course, and how much the final exam counts as a percentage of the course grade. Using this information, we can calculate the score needed on the final.

FORMULA:
final_score_needed = (minimum_average_required - (current_average * (1 - final_percentage))) / final_percentage

DATA REQUIREMENTS:
Problem Inputs:
char desired_grade;        // Desired grade (e.g., A, B, C)
double min_average;        // Minimum average required for the desired grade
double current_average;    // Current average in the course
double final_percentage;   // Percentage weight of the final exam (in decimal form)

Problem Outputs:
double final_score_needed; // Score needed on the final exam

DESIGN:
INITIAL ALGORITHM:
Step1. Read the desired grade from the user.
Step2. Read the minimum average required for the desired grade.
Step3. Read the current average in the course.
Step4. Read the percentage of the course grade that the final exam counts for.
Step5. Calculate the score needed on the final exam using the formula:
       final_score_needed = (min_average - (current_average * (1 - final_percentage))) / final_percentage.
Step6. Display the score needed on the final exam to achieve the desired grade.

IMPLEMENTATION:
*/

#include <stdio.h>

int main() {
    // Variables
    char desired_grade;
    double min_average, current_average, final_percentage, final_score_needed;

    // Input: Get the desired grade and necessary course details
    printf("GRADE PREDICTOR\n");
    printf("Enter desired grade> ");
    scanf(" %c", &desired_grade);  // Step 1

    printf("Enter minimum average required> ");
    scanf("%lf", &min_average);    // Step 2

    printf("Enter current average in course> ");
    scanf("%lf", &current_average); // Step 3

    printf("Enter how much the final counts as a percentage of the course grade> ");
    scanf("%lf", &final_percentage); // Step 4

    // Convert percentage to a decimal
    final_percentage = final_percentage / 100;

    // Calculate the score needed on the final exam
    final_score_needed = (min_average - (current_average * (1 - final_percentage))) / final_percentage;  // Step 5

    // Output: Display the score needed on the final exam
    printf("You need a score of %.2f on the final to get a %c.\n", final_score_needed, desired_grade);  // Step 6

    return 0;
}


/*
Enter desired grade> B
Enter minimum average required> 79.5 
Enter current average in course> 74.6
Enter how much the final counts 
as a percentage of the course grade> 25
You need a score of 94.20 on the final to get a B.
*/