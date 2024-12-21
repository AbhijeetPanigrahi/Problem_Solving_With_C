/* 
PROBLEM: Define structures to represent an automobile with details like make, model, odometer reading, manufacture date, purchase date, and gas tank details. Implement I/O functions for the structure.

ANALYSIS: To solve this problem, we need to define three structure types: 
1. `date_t` for date components.
2. `tank_t` for tank details.
3. `auto_t` for automobile details including the above two structures.

DATA REQUIREMENTS: 
Problem Inputs: 
- char make[20];  
- char model[20];  
- int odometer;  
- date_t manufacture_date;  
- date_t purchase_date;  
- tank_t gas_tank;

Problem Outputs: 
- Display all details of an automobile.

DESIGN: 
INITIAL ALGORITHM: 
Step 1. Define `date_t` for storing month, day, and year.
Step 2. Define `tank_t` for storing tank capacity and current fuel level.
Step 3. Define `auto_t` for storing make, model, odometer reading, and nested structures (`date_t`, `tank_t`).
Step 4. Implement `scan_*` functions to input data for each structure.
Step 5. Implement `print_*` functions to display details.
Step 6. Test the program with sample inputs.

IMPLEMENTATION: 
*/
#include <stdio.h>

typedef struct {
    int month, day, year;
} date_t;

typedef struct {
    float capacity;    // in gallons
    float fuel_level;  // in gallons
} tank_t;

typedef struct {
    char make[20];
    char model[20];
    int odometer;      // in miles
    date_t manufacture_date;
    date_t purchase_date;
    tank_t gas_tank;
} auto_t;

void scan_date(date_t *date) {
    printf("Enter date (MM DD YYYY): ");
    scanf("%d %d %d", &date->month, &date->day, &date->year);
}

void print_date(const date_t *date) {
    printf("%02d/%02d/%04d", date->month, date->day, date->year);
}

void scan_tank(tank_t *tank) {
    printf("Enter tank capacity and current fuel level (in gallons): ");
    scanf("%f %f", &tank->capacity, &tank->fuel_level);
}

void print_tank(const tank_t *tank) {
    printf("Capacity: %.1f gallons, Fuel level: %.1f gallons", tank->capacity, tank->fuel_level);
}

void scan_auto(auto_t *car) {
    printf("Enter make and model: ");
    scanf("%s %s", car->make, car->model);
    printf("Enter odometer reading: ");
    scanf("%d", &car->odometer);
    printf("Enter manufacture date:\n");
    scan_date(&car->manufacture_date);
    printf("Enter purchase date:\n");
    scan_date(&car->purchase_date);
    printf("Enter gas tank details:\n");
    scan_tank(&car->gas_tank);
}

void print_auto(const auto_t *car) {
    printf("Make: %s, Model: %s\n", car->make, car->model);
    printf("Odometer: %d miles\n", car->odometer);
    printf("Manufacture Date: ");
    print_date(&car->manufacture_date);
    printf("\nPurchase Date: ");
    print_date(&car->purchase_date);
    printf("\nGas Tank: ");
    print_tank(&car->gas_tank);
    printf("\n");
}

int main() {
    auto_t car1, car2;

    printf("Enter details for car 1:\n");
    scan_auto(&car1);
    printf("Enter details for car 2:\n");
    scan_auto(&car2);

    printf("\nCar 1 Details:\n");
    print_auto(&car1);

    printf("\nCar 2 Details:\n");
    print_auto(&car2);

    return 0;
}



/*


Mercury Sable 99842 1 18 2001 5 30 1991 16.4 12.5
Mazda Navajo 123961 2 20 1993 6 15 1993 19.3 16.7



Car 1 Details:
Make: Mercury, Model: Sable
Odometer: 99842 miles
Manufacture Date: 01/18/2001
Purchase Date: 05/30/1991
Gas Tank: Capacity: 16.4 gallons, Fuel level: 12.5 gallons

Car 2 Details:
Make: Mazda, Model: Navajo
Odometer: 123961 miles
Manufacture Date: 02/20/1993
Purchase Date: 06/15/1993
Gas Tank: Capacity: 19.3 gallons, Fuel level: 16.7 gallons



*/