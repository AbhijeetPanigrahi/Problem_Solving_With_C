/*  
PROBLEM: Calculate the equation of the perpendicular bisector of a line segment between two points in a 2D plane. 

ANALYSIS:
The program should prompt for and input the coordinates of two points. It will compute:
- The slope of the line connecting the points.
- The midpoint of the line segment.
- The slope of the perpendicular bisector (negative reciprocal of the line's slope).
- The y-intercept of the perpendicular bisector.
Finally, the program will output the equation of the perpendicular bisector in the form `y = mx + b`.

DATA REQUIREMENTS:
Problem Inputs:
- double x1, y1: Coordinates of the first point.
- double x2, y2: Coordinates of the second point.

Problem Outputs:
- double midpoint_x, midpoint_y: Coordinates of the midpoint.
- double slope, perp_slope: Slope of the original line and the perpendicular bisector.
- double y_intercept: Y-intercept of the perpendicular bisector.
- The equation of the perpendicular bisector in the form `y = mx + b`.

DESIGN:
1. Input the coordinates of the two points.
2. Calculate the slope of the line connecting the points.
3. Calculate the midpoint of the line segment.
4. Compute the slope of the perpendicular bisector (negative reciprocal of the slope).
5. Calculate the y-intercept of the perpendicular bisector using the point-slope form of a line.
6. Output the equation of the perpendicular bisector.

IMPLEMENTATION:
*/


#include <stdio.h>

int main() {
    double x1, y1, x2, y2, slope, midpoint_x, midpoint_y, perp_slope, y_intercept;

    // Step 1: Input the coordinates of the two points
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Step 2: Compute the slope of the line
    slope = (y2 - y1) / (x2 - x1);

    // Step 3: Compute the midpoint
    midpoint_x = (x1 + x2) / 2;
    midpoint_y = (y1 + y2) / 2;

    // Step 4: Compute the slope of the perpendicular bisector
    perp_slope = -1 / slope;

    // Step 5: Compute the y-intercept of the perpendicular bisector
    y_intercept = midpoint_y - perp_slope * midpoint_x;

    // Step 6: Output the equation of the perpendicular bisector
    printf("\nThe equation of the perpendicular bisector is: \n");
    printf("y = %.2lfx + %.2lf\n", perp_slope, y_intercept);

    return 0;
}


