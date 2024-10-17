#include <stdio.h>

// Function to check if a year is a leap year
int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

// Function to calculate the day number in a year
int day_number(int day, int month, int year) {
    // Array for number of days in each month in a normal year
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Adjust February for leap years
    if (leap(year)) {
        days_in_month[1] = 29;
    }
    
    // Sum days of previous months
    int day_num = 0;
    for (int i = 0; i < month - 1; i++) {
        day_num += days_in_month[i];
    }
    
    // Add the current day of the month
    day_num += day;
    
    return day_num;
}

int main() {
    int day, month, year;
    
    // Get input from user
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    
    // Calculate the day number
    int result = day_number(day, month, year);
    printf("Day number: %d\n", result);
    
    return 0;
}
