/* 
PROBLEM: Calculate weekly payroll for employees, taking into account hourly rate, hours worked, overtime, and tax deduction.

ANALYSIS:
The program should take each employee's ID, hourly wage, and hours worked. If hours exceed 40, pay the overtime rate (1.5x). Deduct tax (3.625%) from the gross salary to calculate net pay. Display each employee's ID and net pay, and calculate the total payroll and average pay.

DATA REQUIREMENTS:
Problem Inputs:
- int emp_id: Employee identification number
- double hourly_rate: Hourly wage rate
- double hours_worked: Total hours worked in a week

Problem Outputs:
- double gross_pay: Gross pay before tax
- double net_pay: Net pay after tax deduction
- double total_payroll: Sum of all net pays
- double avg_pay: Average net pay of all employees

DESIGN:
1. Get the number of employees.
2. For each employee:
   a. Read employee ID, hourly rate, and hours worked.
   b. Calculate gross pay: If hours worked is over 40, calculate overtime pay.
   c. Deduct 3.625% tax from gross pay to get net pay.
   d. Display employee's ID and net pay.
3. Calculate total payroll by summing all net pays.
4. Calculate the average pay by dividing the total payroll by the number of employees.
5. Display the total payroll and average pay.

IMPLEMENTATION:
*/

#include <stdio.h>

int main() {
    int num_employees, emp_id;
    double hourly_rate, hours_worked, gross_pay, net_pay, total_payroll = 0, avg_pay;
    const double OVERTIME_RATE = 1.5;
    const double TAX_RATE = 0.03625;

    // Step 1: Get the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    // Step 2: Process each employee's data
    for (int i = 0; i < num_employees; i++) {
        // Input employee details
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp_id);
        printf("Enter hourly wage rate: ");
        scanf("%lf", &hourly_rate);
        printf("Enter hours worked: ");
        scanf("%lf", &hours_worked);

        // Step 2b: Calculate gross pay with overtime
        if (hours_worked > 40) {
            gross_pay = (40 * hourly_rate) + ((hours_worked - 40) * hourly_rate * OVERTIME_RATE);
        } else {
            gross_pay = hours_worked * hourly_rate;
        }

        // Step 2c: Deduct tax to get net pay
        net_pay = gross_pay * (1 - TAX_RATE);
        total_payroll += net_pay;

        // Step 2d: Display Employee ID and net pay
        printf("Employee ID: %d, Net Pay: $%.2f\n", emp_id, net_pay);
    }

    // Step 3: Calculate average pay
    avg_pay = total_payroll / num_employees;

    // Step 4: Display total payroll and average pay
    printf("\nTotal Payroll: $%.2f\n", total_payroll);
    printf("Average Pay: $%.2f\n", avg_pay);

    return 0;
}
