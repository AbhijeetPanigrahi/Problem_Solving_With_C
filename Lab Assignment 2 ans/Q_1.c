#include <stdio.h>

// Function to convert compass heading to bearing
void convertToBearing(double heading) {
    if (heading < 0 || heading > 360) {  // Step 2: Check if heading is valid
        printf("Invalid compass heading.\n");
        return;
    }

    double angle;
    
    if (heading > 0 && heading < 90) {  // Step 3: Heading between 0 and 90
        angle = heading;
        printf("North %.1f degrees East\n", angle);
    } else if (heading > 90 && heading < 180) {  // Step 3: Heading between 90 and 180
        angle = 180 - heading;
        printf("South %.1f degrees East\n", angle);
    } else if (heading >= 180 && heading < 270) {  // Step 3: Heading between 180 and 270
        angle = heading - 180;
        printf("South %.1f degrees West\n", angle);
    } else if (heading >= 270 && heading < 360) {  // Step 3: Heading between 270 and 360
        angle = 360 - heading;
        printf("North %.1f degrees West\n", angle);
    } else if (heading == 0 || heading == 360) {  // Step 4: Special case for 0 or 360
        printf("North 0.0 degree East/West\n");
    } else if (heading == 90) {  // Step 4: Special case for 90
        printf("East 90.0 degrees\n");
    } else if (heading == 180) {  // Step 4: Special case for 180
        printf("South 0.0 degree East/West\n");
    } else if (heading == 270) {  // Step 4: Special case for 270
        printf("West 90.0 degrees\n");
    }
}

// Main function
int main() {
    double heading;
    printf("Enter compass heading in degrees (0 to 360): ");  // Step 1: Read input
    scanf("%lf", &heading);
    convertToBearing(heading);  // Step 5: Display result
    return 0;
}
